// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InGameData.generated.h"
/**
 * 
 */

class AMyCharacter;

class UESTUDYFORMMO_API InGameData
{
public:
	InGameData();
	~InGameData();

};


//Gague Data
UENUM(BlueprintType)
enum EGaugeType
{
	Gauge_HP UMETA(DisplayName = "HP"),
	Gauge_Resource UMETA(DisplayName = "Resource"),
	Gauge_Exp UMETA(DisplayName = "Exp")
};

//Inventory Data
UENUM(BlueprintType)
enum EItemType
{
	ITEM_None		UMETA(DisplayName = "None"),
	ITEM_Useable	UMETA(DisplayName = "Useable"),
	ITEM_Equiment	UMETA(DisplayName = "Equiment")
};


USTRUCT(BlueprintType)
struct FItemData
{
	GENERATED_USTRUCT_BODY()

public:
	//uniform Initialization
	FItemData()
		: Name(TEXT("")), Texture(nullptr), Type(EItemType::ITEM_None), Count(0)
	{};

	//virtual void Clear(); //������ �ʱ�ȭ�Ұ��� ��ӹ����ʿ��� �������̵� �ҿ���
	//virtual void Use(AMyCharacter* player);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* Texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EItemType> Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Count;
};




