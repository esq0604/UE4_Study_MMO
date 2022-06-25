// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutoPickup.generated.h"

UCLASS()
class UESTUDYFORMMO_API AAutoPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAutoPickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	


	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	void Collect(class AMyPlayerController* IController);

};
