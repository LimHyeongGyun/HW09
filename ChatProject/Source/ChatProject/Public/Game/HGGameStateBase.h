#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "HGGameStateBase.generated.h"

UCLASS()
class CHATPROJECT_API AHGGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(NetMulticast, Reliable)
	void MulticastRPCBroadcastLoginMessage(const FString& InNameString = FString(TEXT("XXXXXXX")));
};
