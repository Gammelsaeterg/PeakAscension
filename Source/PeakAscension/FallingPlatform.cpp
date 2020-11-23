// Fill out your copyright notice in the Description page of Project Settings.


#include "FallingPlatform.h"
#include "TimerManager.h"

void AFallingPlatform::PlayerPlatformHit(AActor* PlayerHit, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (!bIsHit)
	{
		GetWorldTimerManager().SetTimer(DurationBeforeFallHandle, this, &AFallingPlatform::StartDurationBeforeFall, DurationBeforeFall);
	}

	PlatformMesh->GetUpVector().Normalize();
}

void AFallingPlatform::StartDurationBeforeFall()
{
	PlatformMesh->SetSimulatePhysics(true);
	bIsHit = true;
	GetWorldTimerManager().SetTimer(DurationBeforeFallHandle, this, &AFallingPlatform::StartRespawnTime, DurationBeforeFall);
}

void AFallingPlatform::StartRespawnTime()
{
	PlatformMesh->SetSimulatePhysics(false);
	PlatformMesh->SetWorldTransform(InitialTransform);
	bIsHit = false;
}
