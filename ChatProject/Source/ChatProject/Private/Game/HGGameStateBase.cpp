#include "Game/HGGameStateBase.h"
#include "Player/NetPlayerController.h"

#include "Kismet/GameplayStatics.h"

void AHGGameStateBase::MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString)
{
	if (!HasAuthority())
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		if (IsValid(PC))
		{
			ANetPlayerController* NetPC = Cast<ANetPlayerController>(PC);
			if (IsValid(NetPC))
			{
				FString NotificationString = InNameString + TEXT("has joined the game");
				NetPC->PrintChatMessageString(NotificationString);
			}
		}
	}
}