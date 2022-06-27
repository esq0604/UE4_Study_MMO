// Fill out your copyright notice in the Description page of Project Settings.


#include "AutoPickup.h"
#include "MyPlayerController.h"

// Sets default values
AAutoPickup::AAutoPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AAutoPickup::Collect_Implementation(APlayerController* Controller)
{
	AMyPlayerController* IController = Cast<AMyPlayerController>(Controller);
	if (IController->AddItemToInventoryByID(ItemID))
		Destroy();
}

FName AAutoPickup::GetItemID()
{
	return ItemID;
}
