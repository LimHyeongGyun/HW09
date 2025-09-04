#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "HGPlayerState.generated.h"

UCLASS()
class CHATPROJECT_API AHGPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	AHGPlayerState();

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	FString GetPlayerInfoString();

public:
	UPROPERTY(Replicated)
	FString PlayerNameString;

	UPROPERTY(Replicated)
	int32 CurrentGuessCount;

	UPROPERTY(Replicated)
	int32 MaxGuessCount;
};
