// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameStateBase.h"

AMyGameStateBase::AMyGameStateBase()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> BP_ItemDB(TEXT("DataTable/Game/Data/ItemDB_ItemDB"));
	ItemDB = BP_ItemDB.Object;
}

UDataTable* AMyGameStateBase::GetItemDB() const
{
	return ItemDB;
}
