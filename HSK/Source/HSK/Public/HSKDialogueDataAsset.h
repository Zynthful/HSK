// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Dialogue/DialogueEnums.h"
#include "HSKDialogueDataAsset.generated.h"

class UHSKDialogueSpeakerData;

USTRUCT(BlueprintType)
struct FHSKDialogueSpeaker
{
	GENERATED_BODY()

		/* Data asset of the speaker */
		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		UHSKDialogueSpeakerData* SpeakerData;

	/* If set, will override the speaker name that is in SpeakerData */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FName SpeakerNameOverride;
};

USTRUCT(BlueprintType)
struct FHSKDialogueLine
{
	GENERATED_BODY()

public:
	/* Developer Notes */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HSKDialogueLine|Developer")
	FString DeveloperNotes;

	/* Struct containing info about the speaker */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HSKDialogueLine|Display")
	FHSKDialogueSpeaker SpeakerInfo;

	/* Text to display */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HSKDialogueLine|Display")
	FString Text;

	/* Mood/tone of the line being said */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HSKDialogueLine|Display")
	TEnumAsByte<EMood> Mood;

	/* AkEvent to post on play */
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HSKDialogueLine|Sound")
	//UAkAudioEvent* PlayAkEvent;

	/* Effect on music to apply on play */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HSKDialogueLine|Sound")
	FEffectOnMusic EffectOnMusic;

	/* AkStates to set on play*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HSKDialogueLine|Sound")
	TMap<FName, FName> PlayAkStates;
};

/**
 * 
 */
UCLASS()
class HSK_API UHSKDialogueDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FHSKDialogueLine DialogueLine;
};
