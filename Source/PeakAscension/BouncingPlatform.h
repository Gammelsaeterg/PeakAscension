// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlatformObject.h"
#include "BouncingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PEAKASCENSION_API ABouncingPlatform : public APlatformObject
{
	GENERATED_BODY()

	virtual void PlayerPlatformHit(AActor* PlayerHit, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) override;
	
};
