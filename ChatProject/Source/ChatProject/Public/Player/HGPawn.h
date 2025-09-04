#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "HGPawn.generated.h"

UCLASS()
class CHATPROJECT_API AHGPawn : public APawn
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	virtual void PossessedBy(AController* NewController) override;

};
