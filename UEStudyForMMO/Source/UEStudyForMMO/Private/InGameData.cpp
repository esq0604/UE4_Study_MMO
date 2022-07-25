// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameData.h"
#include "MyCharacter.h"
#include "GameUI.h"
#include "Inventory.h"

InGameData::InGameData()
{
}

InGameData::~InGameData()
{
}

FCharacterAbility::FCharacterAbility()
{
}

void FCharacterAbility::SetOwner(AMyCharacter* owner, bool player)
{
	Owner = owner;
	isPlayer = player;
}
void FCharacterAbility::ChangeHP(float value)
{
	FString str = FString::Printf(TEXT("Current HP : %d"), (int)CurrentHP);
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, str);

	CurrentHP += value;
	if (CurrentHP < 1) CurrentHP = 0;
	if (CurrentHP > MaxHP) CurrentHP = MaxHP;

	str = FString::Printf(TEXT("Current HP : %d"), (int)CurrentHP);
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, str);

	if (isPlayer == true)
	{
		UE_LOG(LogTemp, Warning, TEXT("isPlayer ==true"));
		AMyCharacter* casting = Cast<AMyCharacter>(Owner);
		if (casting)
		{
			casting->GameUIWidget->ChangeTextinBar(Gauge_HP, CurrentHP, MaxHP);
		}

	}
}

void FCharacterAbility::ChangeResource(float value)
{
	FString str = FString::Printf(TEXT("Current CurrentResource : %d"), (int)CurrentResource);
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, str);

	CurrentResource += value;
	if (CurrentResource < 1) CurrentResource = 0;
	if (CurrentResource > MaxResource) CurrentResource = MaxResource;

	str = FString::Printf(TEXT("Current CurrentResource : %d"), (int)CurrentResource);
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, str);

	if (isPlayer == true)
	{
		AMyCharacter* casting = Cast<AMyCharacter>(Owner);
		if (casting)
			casting->GameUIWidget->ChangeTextinBar(Gauge_Resource, CurrentResource, MaxResource);
	}
}

void FPotionData::Clear()
{
	HPValue = 0;
	ResourceValue = 0;
}

void FPotionData::Use(AMyCharacter* player)
{
	player->Ability.SetOwner(player, true);
	if (HPValue != 0)
	{
		player->Ability.ChangeHP(HPValue);
	}
	if (ResourceValue != 0)
	{
		player->Ability.ChangeResource(ResourceValue);
	}
}
void FItemData::Clear()
{
	switch (Type)
	{
	case EItemType::ITEM_Useable:
		potion.Clear();
		break;

	case EItemType::ITEM_Equiment:
		break;
	}

	Name = TEXT("");
	Count = 0;
	Texture = nullptr;
	Type = EItemType::ITEM_None;
}

void FItemData::Use(AMyCharacter* player)
{
	switch (Type)
	{
		case EItemType::ITEM_Useable:
		{
			potion.Use(player);

			Count--;
			if (Count <= 0)
			{
				this->Clear();
				Texture = player->GameUIWidget->Inventory->DefTex;
			}
			break;
		}
		case EItemType::ITEM_Equiment:
			break;
	}
}
 
