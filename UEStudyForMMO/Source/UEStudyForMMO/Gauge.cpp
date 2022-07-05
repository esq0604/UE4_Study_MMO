 //Fill out your copyright notice in the Description page of Project Settings.


#include "Gauge.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Engine/Texture2D.h"
#include "MyCharacter.h"

void UGauge::Init()
{
	switch(Type)
	{
		case EGaugeType::Gauge_HP:
		{
			SetValue(Player->Ability.CurrentHP, Player->Ability.MaxHP);
			break;
		}
		case EGaugeType::Gauge_Resource:
		{
			SetValue(Player->Ability.CurrentResource, Player->Ability.MaxResource);
			break;
		}
		case EGaugeType::Gauge_Exp:
		{
			SetValue(Player->Ability.CurrentExp, Player->Ability.MaxExp);
			Text->SetVisibility(ESlateVisibility::Hidden);
			break;
		}
	}

}

void UGauge::SetType(EGaugeType type)
{
	Type = type;
}

void UGauge::SetValue(float cur, float max)
{
	GaugeBar->SetPercent(cur / max);
	ChangeText(cur, max);
}

void UGauge::SetColor(FLinearColor color)
{
	GaugeBar->FillColorAndOpacity = color;
}

void UGauge::SetTexture(UTextrue2D* Tex)
{
	if (Tex == nullptr) return;
	
	GaugeBar->WidgetStyle.BackgroundImage.SetResourceObject(Tex);
	GaugeBar->WidgetStyle.FillImage.SetResourceObject(Tex);
}

void UGauge::ChangeText(int cur, int max)
{
	FString str = FString::Printf(TEXT("%d / %d"), cur, max);

	Text->SetText(FText::FromString(str));
}
