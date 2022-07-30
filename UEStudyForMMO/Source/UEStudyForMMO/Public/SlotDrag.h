// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "SlotDrag.generated.h"

enum ESlotType;

class USlot;
class AMyCharacter;

/**
 * 
 */
UCLASS()
class UESTUDYFORMMO_API USlotDrag : public UDragDropOperation
{
	GENERATED_BODY()
	
public:
	bool Drop(USlot* to);
	bool SwapInven(USlot* to);
	bool SwapQuickSlot(USlot* to);
	bool SetQuickSlot(USlot* to);

public:
	AMyCharacter* Player;
	USlot* From;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int FromNum;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TEnumAsByte<ESlotType> Type;
};
