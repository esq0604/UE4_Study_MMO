// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameData.h"
#include "MyCharacter.h"
#include "GameUI.h"
#include "Slot.h"
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
	CurrentHP += value;
	if (CurrentHP < 1) CurrentHP = 0;
	if (CurrentHP > MaxHP) CurrentHP = MaxHP;


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
	CurrentResource += value;
	if (CurrentResource < 1) CurrentResource = 0;
	if (CurrentResource > MaxResource) CurrentResource = MaxResource;

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

	UE_LOG(LogTemp, Warning, TEXT("FItemData : Clear"));
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

	for (auto slot : ReferenceSlots)
	{
		UE_LOG(LogTemp,Warning,TEXT("%d"),slot->Index);
		slot->Refresh();
	}
}

void FItemData::AddSlot(USlot*& slot)
{
	//존재하지 않는 경우 배열에 고유한 요소를 추가함. 
	UE_LOG(LogTemp, Warning, TEXT("FItemData : AddSlot"));
	ReferenceSlots.AddUnique(slot);
}

void FItemData::RemoveSlot(USlot*& slot)
{
	//인덱스가 아닌 순서를 유지하며 지움 
	ReferenceSlots.RemoveSingle(slot);
}

void FItemData::SwapReference(FItemData& data, int fromindex, int toindex)
{
	TArray<USlot*> fromlist = this->ReferenceSlots;
	this->ReferenceSlots = data.ReferenceSlots;
	data.ReferenceSlots = fromlist;

	TArray<USlot*> quicklist;

	for (auto slot : ReferenceSlots)
	{
		if (slot->Type == SLOT_Q_Item)
		{
			quicklist.Add(slot);
		}
	}

	for (auto slot : data.ReferenceSlots)
	{
		if (slot->Type == SLOT_Q_Item)
		{
			quicklist.Add(slot);
		}
	}

	for (auto slot : quicklist)
	{
		if (slot->Index == fromindex)
		{
			this->ReferenceSlots.RemoveSingle(slot);
			slot->Index = toindex;
			data.ReferenceSlots.Add(slot);
		}
		else
		{
			data.ReferenceSlots.RemoveSingle(slot);
			slot->Index = fromindex;
			this->ReferenceSlots.Add(slot);
		}
	}
}
 
