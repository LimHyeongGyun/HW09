#include "UI/HGUserWidget.h"
#include "Player/NetPlayerController.h"

#include "Components/EditableTextBox.h"

void UHGUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (EditableTextBox_UserInput->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommitted) == false)
	{
		EditableTextBox_UserInput->OnTextCommitted.AddDynamic(this, &ThisClass::OnChatInputTextCommitted);
	}
}

void UHGUserWidget::NativeDestruct()
{
	Super::NativeDestruct();

	if (EditableTextBox_UserInput->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommitted) == true)
	{
		EditableTextBox_UserInput->OnTextCommitted.RemoveDynamic(this, &ThisClass::OnChatInputTextCommitted);
	}
}

void UHGUserWidget::OnChatInputTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if(CommitMethod == ETextCommit::OnEnter)
	{
		APlayerController* OwningPlayerController = GetOwningPlayer();
		if (IsValid(OwningPlayerController))
		{
			ANetPlayerController* OwningCXPlayerController = Cast<ANetPlayerController>(OwningPlayerController);
			if (IsValid(OwningCXPlayerController))
			{
				OwningCXPlayerController->SetChatMessageString(Text.ToString());

				EditableTextBox_UserInput->SetText(FText());
			}
		}
	}
}
