// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widget/HSKUserWidget.h"
#include "HSKDialogueWidget.generated.h"

class UTextBlock;

/**
 * 
 */
UCLASS()
class HSK_API UHSKDialogueWidget : public UHSKUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTextBlock* DialogueSpeakerText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTextBlock* DialogueLineText;
};
