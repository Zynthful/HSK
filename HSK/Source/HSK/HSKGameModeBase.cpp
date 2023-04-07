// Copyright Epic Games, Inc. All Rights Reserved.


#include "HSKGameModeBase.h"
#include "UI/HSKHUD.h"
#include "Dialogue/HSKScene.h"

DEFINE_LOG_CATEGORY(LogScene)

AHSKGameModeBase::AHSKGameModeBase()
{
	HUDClass = AHSKHUD::StaticClass();
}

void AHSKGameModeBase::PlayScene(AHSKScene* Scene)
{
	if (Scene == nullptr)
	{
		UE_LOG(LogScene, Error, TEXT("Scene was nullptr"));
	}

	UE_LOG(LogScene, VeryVerbose, TEXT("Scene = %s"), *Scene->GetName());

	ActiveScene = Scene;

	NotifyOnPlayScene(Scene);

	Scene->OnPlay();
}