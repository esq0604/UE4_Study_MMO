// Fill out your copyright notice in the Description page of Project Settings.


#include "GameUI.h"
#include "Gauge.h"
#include "MyCharacter.h"
#include "Inventory.h"
#include "Engine/Texture2D.h"

UGameUI::UGameUI(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{

}

void UGameUI::Init()
{
	
	
	UE_LOG(LogTemp, Warning, TEXT("UGameUI::Init()"));  
	
	if (Inventory)
	{

		Inventory->Player = this->Player;
		Inventory->Init();
	}

	//HP Bar
	
	HPBar->Player = this->Player;
	HPBar->SetType(EGaugeType::Gauge_HP);
	HPBar->SetColor(HPBarColor); //alpa값 같이 설정해주기 
	//if (HPBarTex)
		//HPBar->SetTexture((UTexture2D*)HPBarTex);
	HPBar->Init();

	//Resource Bar
	ResourceBar->Player = this->Player;
	ResourceBar->SetType(EGaugeType::Gauge_Resource);
	ResourceBar->SetColor(ResourceBarColor);
	//if (ResourceBarTex)
		//ResourceBar->SetTexture(ResourceBarTex);
	ResourceBar->Init();

	//ExpBar
	ExpBar->Player = this->Player;
	ExpBar->SetType(EGaugeType::Gauge_Exp);
	ExpBar->SetColor(ExBarColor);
	ExpBar->SetRenderScale(FVector2D(4.5f, 0.5f));
	//if (ExpBar)
		//ExpBar->SetTexture(ExpBarTex);
	ExpBar->Init();
}

void UGameUI::RefreshInventory(int slotnum)
{
	Inventory->RefreshSlot(slotnum);
}
