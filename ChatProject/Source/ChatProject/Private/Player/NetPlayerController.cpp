#include "Player/NetPlayerController.h"
#include "UI/HGUserWidget.h"
#include "Game/HGGameModeBase.h"
#include "Player/HGPlayerState.h"

#include "ChatProject/ChatProject.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "Net/UnrealNetwork.h"

ANetPlayerController::ANetPlayerController()
{
	bReplicates = true;
}

void ANetPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (!IsLocalController())
	{
		return;
	}
	
	FInputModeUIOnly InputModeUIOnly;
	SetInputMode(InputModeUIOnly);

	if (IsValid(ChatInputWidgetClass))
	{
		ChatInputWidgetInstance = CreateWidget<UHGUserWidget>(this, ChatInputWidgetClass);
		if (IsValid(ChatInputWidgetInstance))
		{
			ChatInputWidgetInstance->AddToViewport();
		}
	}

	if (IsValid(NotificationTextWidgetClass))
	{
		NotificationTextWidgetInstance = CreateWidget<UUserWidget>(this, NotificationTextWidgetClass);
		if (IsValid(NotificationTextWidgetInstance))
		{
			NotificationTextWidgetInstance->AddToViewport();
		}
	}
}

void ANetPlayerController::SetChatMessageString(const FString& InChatMessageString)
{
	ChatMessageString = InChatMessageString;

	if (IsLocalController())
	{
		AHGPlayerState* HGPS = GetPlayerState<AHGPlayerState>();
		if (IsValid(HGPS))
		{
			FString CombinedMessageString = HGPS->GetPlayerInfoString() + TEXT(": ") + InChatMessageString;

			ServerRPCPrintChatMessageString(CombinedMessageString);
		}
	}
}

void ANetPlayerController::PrintChatMessageString(const FString& InChatMessageString)
{
	ChatProjectFunctionLibrary::MyPrintString(this, InChatMessageString, 10.0f);
}

void ANetPlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, NotificationText);
}

void ANetPlayerController::ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	PrintChatMessageString(InChatMessageString);
}

void ANetPlayerController::ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	AGameModeBase* GM = UGameplayStatics::GetGameMode(this);
	if (IsValid(GM))
	{
		AHGGameModeBase* HGGM = Cast<AHGGameModeBase>(GM);
		if (IsValid(HGGM))
		{
			HGGM->PrintChatMessageString(this, InChatMessageString);
		}
	}
}
