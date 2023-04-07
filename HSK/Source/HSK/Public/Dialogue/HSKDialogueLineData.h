// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"

#include "DialogueEnums.h"

#include "HSKDialogueLineData.generated.h"

class UHSKDialogueSpeakerData;

/**
 * 
 */
UCLASS()
class HSK_API UHSKDialogueLineData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FHSKDialogueLine DialogueLine;
};
