 //Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "CustomUI.h"
#include "InGameData.h"
#include "Gauge.generated.h"

class UProgressBar;
class UTextBlock;
class UTextrue2D;
enum EGaugeType;
/**
 * 
 */
UCLASS()
class UESTUDYFORMMO_API UGauge : public UCustomUI
{
	GENERATED_BODY()
public:
	void Init();
	void SetType(enum EGaugeType type);
	void SetValue(float cur, float max);
	void SetColor(FLinearColor color);
	void SetTexture(UTextrue2D* Tex);
	
private:
	void ChangeText(int cur, int max);
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* Text;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta =(BindWidget))
	UProgressBar* GaugeBar;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TEnumAsByte<EGaugeType> Type;
public:
	class AMyCharacter* Player;

};
