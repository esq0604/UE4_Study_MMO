// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"

UMyAnimInstance::UMyAnimInstance()
{
	CurruentPawnSpeed = 0.0f;
	GetAttackMontage();
}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	GetPawnVelocity();
	
}

void UMyAnimInstance::GetPawnVelocity()
{
	auto Pawn = TryGetPawnOwner();
	if (::IsValid(Pawn))
	{
		CurruentPawnSpeed = Pawn->GetVelocity().Size();
	}
}

void UMyAnimInstance::GetAttackMontage()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE(TEXT("/Game/BattleWizardPolyart/Animations/Wizard_Attack_Montage.Wizard_Attack_Montage"));
	if (ATTACK_MONTAGE.Succeeded())
	{

		AttackMontage = ATTACK_MONTAGE.Object;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AttackMontage not Succeeded"));
	}
}

void UMyAnimInstance::PlayAttackMontage()
{
	if (!Montage_IsPlaying(AttackMontage))
	{
		Montage_Play(AttackMontage, 1.0f);
	}
}
