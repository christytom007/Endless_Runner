// Fill out your copyright notice in the Description page of Project Settings.


#include "WallSpike.h"

AWallSpike::AWallSpike()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AWallSpike::BeginPlay()
{
	Super::BeginPlay();

	this->RootComponent->ComponentVelocity = FVector(0.0f, 25.0f, 0.0f);
	
}

void AWallSpike::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	SetActorLocation(GetActorLocation() + FVector(0.0f, 350 * DeltaSeconds, 0.0f), true);
}

