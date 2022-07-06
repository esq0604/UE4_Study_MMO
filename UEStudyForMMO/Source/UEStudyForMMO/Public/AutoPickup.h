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

	UFUNCTION(BlueprintNativeEvent)
	void Collect(class APlayerController* IController);

	virtual void Collect_Implementation(APlayerController* Controller);

	FName GetItemID();

protected:
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* PickupMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ItemID;
};
