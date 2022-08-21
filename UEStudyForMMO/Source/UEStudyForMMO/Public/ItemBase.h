// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemBase.generated.h"

class USphereComponent;
class UCapsuleComponent;
class UArrowComponent;
struct FItemData;

UCLASS()
class UESTUDYFORMMO_API AItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBase();

public:
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FItemData Data;*/

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USphereComponent* Sphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCapsuleComponent* Capsule;

#if WITH_EDITORONLY_DATA
	UPROPERTY()
		UArrowComponent* ArrowComponent;
#endif

};
