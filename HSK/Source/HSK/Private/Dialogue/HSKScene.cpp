// Fill out your copyright notice in the Description page of Project Settings.


#include "Dialogue/HSKScene.h"

// Sets default values
AHSKScene::AHSKScene()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHSKScene::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHSKScene::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHSKScene::OnPlay()
{
	NotifyOnPlay();
}

void AHSKScene::OnFinished()
{
	NotifyOnFinished();
}

