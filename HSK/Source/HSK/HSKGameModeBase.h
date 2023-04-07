// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HSKGameModeBase.generated.h"

class AHSKScene;
class UHSKDialogueWidget;

DECLARE_LOG_CATEGORY_EXTERN(LogScene, Log, All);

/**
 * 
 */
UCLASS()
class HSK_API AHSKGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AHSKGameModeBase();

	UFUNCTION(BlueprintCallable)
	void PlayScene(AHSKScene* Scene);

	UFUNCTION(BlueprintImplementableEvent)
	void NotifyOnPlayScene(AHSKScene* Scene);

protected:
	UPROPERTY(BlueprintReadOnly)
	AHSKScene* ActiveScene;
};
