// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InGameData.generated.h"
/**
 * 
 */
class UESTUDYFORMMO_API InGameData
{
public:
	InGameData();
	~InGameData();

};

UENUM(BlueprintType)
enum EGaugeType
{
	Gauge_HP UMETA(DisplayName = "HP_Enum"),
	Gauge_Resource UMETA(DisplayName = "Resource"),
	Gauge_Exp UMETA(DisplayName = "Exp")
};
