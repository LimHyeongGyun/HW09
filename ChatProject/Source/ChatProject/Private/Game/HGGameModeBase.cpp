#include "Game/HGGameModeBase.h"
#include "Game/HGGameStateBase.h"
#include "Player/HGPlayerState.h"

#include "Player/NetPlayerController.h"
#include "EngineUtils.h"

void AHGGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	ANetPlayerController* NetPlayerController = Cast<ANetPlayerController>(NewPlayer);
	if (IsValid(NetPlayerController))
	{
		NetPlayerController->NotificationText = FText::FromString(TEXT("Connected to the game server."));

		AllPlayerControllers.Add(NetPlayerController);

		AHGPlayerState* HGPS = NetPlayerController->GetPlayerState<AHGPlayerState>();
		if (IsValid(HGPS))
		{
			HGPS->PlayerNameString = TEXT("Player") + FString::FromInt(AllPlayerControllers.Num());
		}

		AHGGameStateBase* HGGameStateBase = GetGameState<AHGGameStateBase>();
		if (IsValid(HGGameStateBase))
		{
			HGGameStateBase->MulticastRPCBroadcastLoginMessage(HGPS->PlayerNameString);
		}
	}
}

FString AHGGameModeBase::GenerateSecretNumber()
{
	TArray<int32> Numbers;
	for (int32 i = 1; i <= 9; ++i)
	{
		Numbers.Add(i);
	}

	FMath::RandInit(FDateTime::Now().GetTicks());
	Numbers = Numbers.FilterByPredicate([](int32 Num) { return Num > 0; });

	FString Result;
	for (int32 i = 0; i < 3; ++i)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		Numbers.RemoveAt(Index);
	}

	return Result;
}

bool AHGGameModeBase::IsGuessNumberString(const FString& InNumberString)
{
	bool bCanPlay = false;

	do {
		if (InNumberString.Len() != 3)
		{
			break;
		}

		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C : InNumberString)
		{
			if (FChar::IsDigit(C) == false || C == '0')
			{
				bIsUnique = false;
				break;
			}

			UniqueDigits.Add(C);
		}

		if (bIsUnique == false)
		{
			break;
		}

		bCanPlay = true;

	} while (false);

	return bCanPlay;
}

FString AHGGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
{
	int32 StrikeCount = 0, BallCount = 0;

	for (int32 i = 0; i < 3; ++i)
	{
		if (InSecretNumberString[i] == InGuessNumberString[i])
		{
			StrikeCount++;
		}
		else
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), InGuessNumberString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar))
			{
				BallCount++;
			}
		}
	}

	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("Out");
	}

	return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
}

void AHGGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SecretNumberString = GenerateSecretNumber();
}

void AHGGameModeBase::PrintChatMessageString(ANetPlayerController* InChattingPlayerController, const FString& InChatMessageString)
{
	int Index = InChatMessageString.Len() - 3;
	FString GuessNumberString = InChatMessageString.RightChop(Index);
	if (IsGuessNumberString(GuessNumberString))
	{
		FString JudgeResultString = JudgeResult(SecretNumberString, GuessNumberString);

		IncreaseGuessCount(InChattingPlayerController);

		for (TActorIterator<ANetPlayerController> It(GetWorld()); It; ++It)
		{
			ANetPlayerController* NetPlayerController = *It;
			if (IsValid(NetPlayerController) == true)
			{
				FString CombineMessageString = InChatMessageString + TEXT("->") + JudgeResultString;
				NetPlayerController->ClientRPCPrintChatMessageString(CombineMessageString);

				int32 StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));
				JudgeGame(InChattingPlayerController, StrikeCount);
			}
		}
	}
	else
	{
		for (TActorIterator<ANetPlayerController> It(GetWorld()); It; ++It)
		{
			ANetPlayerController* NetPlayerController = *It;
			if (IsValid(NetPlayerController))
			{
				NetPlayerController->ClientRPCPrintChatMessageString(InChatMessageString);
			}
		}
	}
}

void AHGGameModeBase::IncreaseGuessCount(ANetPlayerController* InChattingPlayerController)
{
	AHGPlayerState* HGPS = InChattingPlayerController->GetPlayerState<AHGPlayerState>();
	if (IsValid(HGPS))
	{
		HGPS->CurrentGuessCount++;
	}
}

void AHGGameModeBase::ResetGame()
{
	SecretNumberString = GenerateSecretNumber();

	for (const auto& NetPlayerController : AllPlayerControllers)
	{
		AHGPlayerState* HGPS = NetPlayerController->GetPlayerState<AHGPlayerState>();
		if (IsValid(HGPS))
		{
			HGPS->CurrentGuessCount = 0;
		}
	}
}

void AHGGameModeBase::JudgeGame(ANetPlayerController* InChattingPlayerController, int InStrikeCount)
{
	if (3 == InStrikeCount)
	{
		AHGPlayerState* HGPS = InChattingPlayerController->GetPlayerState<AHGPlayerState>();
		for (const auto& NetPlayerController : AllPlayerControllers)
		{
			if (IsValid(HGPS))
			{
				FString CombinedMessageString = HGPS->PlayerNameString + TEXT("has won the game.");
				NetPlayerController->NotificationText = FText::FromString(CombinedMessageString);

				ResetGame();
			}
		}
	}
	else
	{
		bool bIsDraw = true;
		for (const auto& NetPlayerController : AllPlayerControllers)
		{
			AHGPlayerState* HGPS = NetPlayerController->GetPlayerState<AHGPlayerState>();
			if (IsValid(HGPS))
			{
				if (HGPS->CurrentGuessCount < HGPS->MaxGuessCount)
				{
					bIsDraw = false;
					break;
				}
			}
		}

		if (bIsDraw)
		{
			for (const auto& HGPlayerController : AllPlayerControllers)
			{
				HGPlayerController->NotificationText = FText::FromString(TEXT("Draw..."));

				ResetGame();
			}
		}
	}
}
