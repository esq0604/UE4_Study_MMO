// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomUI.h"
#include "Slot.generated.h"

/**
 * 
 */
enum ESlotType;
class UImage;
class UTextBlock;

UCLASS()
class UESTUDYFORMMO_API USlot : public UCustomUI
{
	GENERATED_BODY()
	
public:
	//void Init() override;
	bool Initialize() override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMax = 31, UIMin = -1))
		int Solotnum;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int Count;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TEnumAsByte<ESlotType> Type;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidget))
		UImage* Img;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (BindWidget))
		UTextBlock* Text;

};
