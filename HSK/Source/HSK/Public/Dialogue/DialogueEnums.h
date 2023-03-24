// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogueEnums.generated.h"

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