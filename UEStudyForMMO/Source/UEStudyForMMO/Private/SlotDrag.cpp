// Fill out your copyright notice in the Description page of Project Settings.


#include "SlotDrag.h"
#include "Slot.h"
#include "MyCharacter.h"

bool USlotDrag::Drop(USlot* to)
{
	if (Player == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player ==nullptr"));
		return false;
	}
	if (From == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("From ==nullptr"));
		//return false;

	}
	if (to == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("to ==nullptr"));
		return false;
	}
	switch (From->Type)
	{
		case SLOT_Item:
		{
			UE_LOG(LogTemp, Warning, TEXT("From Idx : %d"), From->Index);
			UE_LOG(LogTemp, Warning, TEXT("to Idx : %d"), to->Index);
			if (to->Type == From->Type) return SwapInven(to);

		}
		case SLOT_Skill: break;
		case SLOT_Q_Item: case SLOT_Q_Skill:
		{
			if (to->Type == SLOT_Quick || to->Type == SLOT_Q_Item || to->Type == SLOT_Q_Skill)
				return SwapQuickSlot(to);
		}
	}

	return false;
}

bool USlotDrag::SwapInven(USlot* to)
{

	Player->Inventory.Swap(From->Index, to->Index);
	

	From->Refresh();
	to->Refresh();

	return true;
}

bool USlotDrag::SwapQuickSlot(USlot* to)
{
	return false;
}

bool USlotDrag::SetQuickSlot(USlot* to)
{
	if (From->Type == SLOT_Item)
	{
		if (to->Type == SLOT_Q_Item)
			Player->Inventory[to->Index].RemoveSlot(to);

		Player->Inventory[From->Index].AddSlot(to);
		to->Type = SLOT_Q_Item;
		to->Index = From->Index;
		to->Refresh();
	}
	return true;
}
