 //Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "Blueprint/UserWidget.h"
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
class UESTUDYFORMMO_API UGauge : public UUserWidget
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

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProgressBarData")
	UTexture2D* HPBarTex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProgressBarData")
	FLinearColor HPBarColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProgressBarData")
	UTexture2D* ResourceBarTex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProgressBarData")
	FLinearColor ResourceBarColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProgressBarData")
	UTexture2D* ExpBarTex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProgressBarData")
	FLinearColor ExBarColor;
	
	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI" , meta =(BindWidget))
		UGauge* HPBar;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI", meta = (BindWidget))
		UGauge* ResourceBar;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI", meta = (BindWidget))
		UGauge* ExpBar;*/
};
