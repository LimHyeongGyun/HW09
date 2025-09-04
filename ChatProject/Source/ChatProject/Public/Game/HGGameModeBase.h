#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HGGameModeBase.generated.h"

class ANetPlayerController;

UCLASS()
class CHATPROJECT_API AHGGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void OnPostLogin(AController* NewPlayer) override;

	FString GenerateSecretNumber();

	bool IsGuessNumberString(const FString& InNumberString);

	FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString);

	virtual void BeginPlay() override;

	void PrintChatMessageString(ANetPlayerController* InChattingPlayerController, const FString& InChatMessageString);

	void IncreaseGuessCount(ANetPlayerController* InChattingPlayerController);

	void ResetGame();

	void JudgeGame(ANetPlayerController* InChattingPlayerController, int InStrikeCount);

protected:
	FString SecretNumberString;

	TArray<TObjectPtr<ANetPlayerController>> AllPlayerControllers;

};
