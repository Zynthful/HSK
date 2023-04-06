// Fill out your copyright notice in the Description page of Project Settings.


#include "Dialogue/HSKDialogueWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Components/TextBlock.h"

void UHSKDialogueWidget::NativeConstruct()
{
	Super::NativeConstruct();

	UPanelWidget* RootWidget = Cast<UPanelWidget>(GetRootWidget());

	if (RootWidget && WidgetTree)
	{
		DialogueSpeakerText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("DialogueSpeakerText"));
		DialogueLineText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("DialogueLineText"));
		
		RootWidget->AddChild(DialogueSpeakerText);
		RootWidget->AddChild(DialogueLineText);
	}
	
}
