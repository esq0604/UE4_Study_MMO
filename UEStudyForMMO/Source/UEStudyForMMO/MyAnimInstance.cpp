// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"

UMyAnimInstance::UMyAnimInstance()
{
	CurruentPawnSpeed = 0.0f;
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
