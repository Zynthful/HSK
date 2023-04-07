// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HSKScene.generated.h"

UCLASS()
class HSK_API AHSKScene : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHSKScene();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void OnPlay();

	UFUNCTION()
	virtual void OnFinished();

	UFUNCTION(BlueprintImplementableEvent)
	void NotifyOnPlay();

	UFUNCTION(BlueprintImplementableEvent)
	void NotifyOnFinished();
};
