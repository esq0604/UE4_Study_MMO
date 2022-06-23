// Fill out your copyright notice in the Description page of Project Settings.


#include "FireBall.h"
#include "Engine/Classes/Components/SphereComponent.h"
#include "Engine/Classes/GameFramework/ProjectileMovementComponent.h"
#include "Engine/Classes/Particles/ParticleSystemComponent.h"

AFireBall::AFireBall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	FireBallMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	CollisionComponent->InitSphereRadius(15.0f);
	FireBallMovementInit();
	//FireInDurection();
	
	SetRootComponent(Mesh);

	CollisionComponent->SetupAttachment(Mesh);
	Particle->SetupAttachment(Mesh);




}
// Called when the game starts or when spawned
void AFireBall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFireBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFireBall::FireBallMovementInit()
{
	FireBallMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("FireBallMovementComponent"));
	FireBallMovementComponent->SetUpdatedComponent(Mesh);
	FireBallMovementComponent->InitialSpeed = 3000.0f;
	FireBallMovementComponent->MaxSpeed = 3000.0f;
	FireBallMovementComponent->bRotationFollowsVelocity = true;
	FireBallMovementComponent->bShouldBounce = true;
	FireBallMovementComponent->Bounciness = 0.3f;
}


