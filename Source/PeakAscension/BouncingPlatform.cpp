// Fill out your copyright notice in the Description page of Project Settings.


#include "BouncingPlatform.h"
#include "GameFramework/Character.h"

void ABouncingPlatform::PlayerPlatformHit(AActor* PlayerHit, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	Cast<ACharacter>(PlayerHit)->LaunchCharacter(FVector(0, 0, 500), false, true);
}
