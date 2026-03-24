// MyActor.cpp


#include "MyActor.h"

AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play!"));
}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

<<<<<<< HEAD
=======
	//UE_LOG(LogTemp, Warning, TEXT("AMyActor is ticking!"));
>>>>>>> e57f03cb3ea40c48a0710e1aa29bce8de6b506e7
}

