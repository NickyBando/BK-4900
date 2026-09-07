// Fill out your copyright notice in the Description page of Project Settings.

#pragma once 

#include "CoreMinimal.h"          
#include "GameFramework/Actor.h"  
#include "RotatingCube.generated.h"  

UCLASS()  //  Unreal's reflection system 
class MOON_API ARotatingCube : public AActor  // inherit from Actor.
{
	GENERATED_BODY()  

public:
	ARotatingCube();  

	virtual void Tick(float DeltaTime) override;  // tick() runs every single frame 
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComponent;  

	
	UPROPERTY(EditAnywhere, Category = "Rotation")
	float RotationSpeed = 90.0f;  

protected:
	virtual void BeginPlay() override;  // Runs once when the game starts 
};
