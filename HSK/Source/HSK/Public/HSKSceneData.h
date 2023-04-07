// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Dialogue/DialogueEnums.h"
#include "HSKSceneData.generated.h"

class UHSKDialogueDataAsset;

USTRUCT(BlueprintType)
struct FSceneStep
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EStepType> Type = EStepType::DialogueLine;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "Type == EStepType::DialogueLine", EditConditionHides))
	UHSKDialogueDataAsset* DialogueLine;
};

/**
 * 
 */
UCLASS(BlueprintType)
class HSK_API UHSKSceneData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FSceneStep> Steps;
};
