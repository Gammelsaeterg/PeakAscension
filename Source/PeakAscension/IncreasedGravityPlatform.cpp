// Fill out your copyright notice in the Description page of Project Settings.


#include "IncreasedGravityPlatform.h"
#include "GameFramework/Character.h"

void AIncreasedGravityPlatform::PlayerPlatformHit(AActor* PlayerHit, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	int decreasejump = 1;
	decreasejump -= 10;

	PlayerHit->GetActorLocation() = PlayerHit->GetActorLocation() + FVector{ 0,10,0 };
}