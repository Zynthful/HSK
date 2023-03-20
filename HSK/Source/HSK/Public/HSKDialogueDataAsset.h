// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HSKDialogueDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class HSK_API UHSKDialogueDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:

	/* Developer Notes */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Developer")
	FString DeveloperNotes;

	/* Text to display */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Text")
	FString Text;

	/* AkEvent to post on play */
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
	//UAkAudioEvent* PlayAkEvent;

	/* Effect on music to apply on play */
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
	//TEnumAsByte<EEffectOnMusic> EffectOnMusic;
	
	/* AkStates to set on play*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
	TMap<FName, FName> PlayAkStates;
};
