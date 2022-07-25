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


//TODO : GetPlayer Pointer 
USTRUCT(BlueprintType)
struct FCharacterAbility
{
	GENERATED_USTRUCT_BODY()

public:
	FCharacterAbility();

	void SetOwner(AMyCharacter* owner, bool player = false);
	void ChangeHP(float value);
	void ChangeResource(float value);

private:
	AMyCharacter* Owner;
	bool isPlayer;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CurrentHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Ability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CurrentResource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxResource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CurrentExp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxExp;
};

//Gague Data
UENUM(BlueprintType)
enum EGaugeType
{
	Gauge_HP UMETA(DisplayName = "HP"),
	Gauge_Resource UMETA(DisplayName = "Resource"),
	Gauge_Exp UMETA(DisplayName = "Exp")
};

//Inventory Item Data 없거나, 포션, 장비 
UENUM(BlueprintType)
enum EItemType
{
	ITEM_None		UMETA(DisplayName = "None"),
	ITEM_Useable	UMETA(DisplayName = "Useable"),
	ITEM_Equiment	UMETA(DisplayName = "Equiment")
};

//Slot Type 없거나, Item, Skil,
UENUM(BlueprintType)
enum ESlotType
{
	SLOT_None		UMETA(DisplayName = "None"),
	SLOT_Item		UMETA(DisplayName = "Item"),
	SLOT_Skill		UMETA(DisplayName ="Skill"),
	SLOT_Quick		UMETA(DisplayName = "Quick"),
	SLOT_Q_Item		UMETA(DisplayName = "Q_Item"),
	SLOT_Q_Skill	UMETA(DisplayName = "Q_Skill")
};

//Potion Data
USTRUCT(BlueprintType)
struct FPotionData
{
	GENERATED_USTRUCT_BODY()
public:
	FPotionData()
		: HPValue(100), ResourceValue(0)
	{}

	void Clear();
	void Use(AMyCharacter* Player);
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float HPValue;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float ResourceValue;
};

//Item Data
USTRUCT(BlueprintType)
struct FItemData
{
	GENERATED_USTRUCT_BODY()

public:
	//uniform Initialization
	FItemData()
		: Name(TEXT("")), Texture(nullptr), Type(EItemType::ITEM_None), Count(0)
	{};

	 void Clear(); //정보를 초기화할것임 상속받은쪽에서 오버라이딩 할예정
	 void Use(AMyCharacter* player);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* Texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EItemType> Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FPotionData potion;
};




