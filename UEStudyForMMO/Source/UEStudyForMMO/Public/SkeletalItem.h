// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBase.h"
#include "SkeletalItem.generated.h"

/**
 * 
 */
UCLASS()
class UESTUDYFORMMO_API ASkeletalItem : public AItemBase
{
	GENERATED_BODY()

public:
	ASkeletalItem();

	void Tick(float DeltaTime) override;

protected:
	void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
		USkeletalMeshComponent* Mesh;


};
