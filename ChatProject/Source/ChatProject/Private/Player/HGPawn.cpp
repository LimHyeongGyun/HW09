#include "Player/HGPawn.h"
#include "ChatProject/ChatProject.h"

void AHGPawn::BeginPlay()
{
	Super::BeginPlay();
	
	FString NetRolestring = ChatProjectFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("HGPawn::BeginPlay() %s [%s]"), *ChatProjectFunctionLibrary::GetNetModeString(this), *NetRolestring);
	ChatProjectFunctionLibrary::MyPrintString(this, CombinedString, 10.0f);
}

void AHGPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	FString NetRoleString = ChatProjectFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("HGPawn::PossessedBy() &s [%s]"), *ChatProjectFunctionLibrary::GetNetModeString(this), *NetRoleString);
	ChatProjectFunctionLibrary::MyPrintString(this, CombinedString, 10.0f);
}