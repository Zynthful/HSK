// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HSKDialogueSpeakerData.generated.h"

/**
 * 
 */
UCLASS()
class HSK_API UHSKDialogueSpeakerData : public UDataAsset
{
	GENERATED_BODY()

public:

	/* Name of the speaker to display */
	// TODO: localization?
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HSKDialogueSpeaker")
	FName Name;

	// Portrait?
};
