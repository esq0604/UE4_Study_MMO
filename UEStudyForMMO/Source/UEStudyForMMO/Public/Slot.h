// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomUI.h"
#include "Slot.generated.h"

/**
 * 
 */
enum ESlotType;
UCLASS()
class UESTUDYFORMMO_API USlot : public UCustomUI
{
	GENERATED_BODY()
	
public:
	void Init() override;


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMax = 31, UIMin = -1))
		int Solotnum;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int Count;

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		//TEnumAsByte<ESlotType> Type;
};
