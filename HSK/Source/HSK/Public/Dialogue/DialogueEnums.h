// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogueEnums.generated.h"

class UHSKDialogueSpeakerData;

/**
 * 
 */
UCLASS()
class HSK_API UDialogueEnums : public UObject
{
	GENERATED_BODY()
	
};

UENUM(BlueprintType)
enum class EMood : uint8
{
	Neutral		UMETA(DisplayName = "Neutral - uwu. :|"),
	Happy		UMETA(DisplayName = "Happy - uwu! : )"),
	Sad			UMETA(DisplayName = "Sad - uwu : ("),
	Curious		UMETA(DisplayName = "Curious - uwu? :o")
};

UENUM(BlueprintType)
enum class EEffectOnMusic : uint8
{
	None		UMETA(DisplayName = "None"),
	Silence		UMETA(DisplayName = "To Silence"),
	Tension		UMETA(DisplayName = "To Tension"),
};

UENUM(BlueprintType)
enum class EStepType : uint8
{
	DialogueLine,
	DialogueChoice,
};

USTRUCT(BlueprintType)
struct FEffectOnMusic
{
	GENERATED_BODY()

	/* What to transition the music to */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EEffectOnMusic> Effect = EEffectOnMusic::None;

	/* How long this effect should take to transition to */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0, ClampMax = 30))
	float TransitionDuration = 0;
};

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