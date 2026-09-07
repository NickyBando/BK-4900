// Fill out your copyright notice in the Description page of Project Settings.

#include "RotatingCube.h"                        
#include "Components/StaticMeshComponent.h"      

ARotatingCube::ARotatingCube()
{

	PrimaryActorTick.bCanEverTick = true; // false by default, this allows the actor to actually rotate (each frame) 
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;
}

void ARotatingCube::BeginPlay()
{
	Super::BeginPlay();  
}

void ARotatingCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);  
	AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
}

