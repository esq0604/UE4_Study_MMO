// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "ManPickup.generated.h"

/**
 * 
 */
UCLASS()
class UESTUDYFORMMO_API AManPickup : public AInteractable
{
	GENERATED_BODY()
	
public:
	CheckForInteractables();
};
