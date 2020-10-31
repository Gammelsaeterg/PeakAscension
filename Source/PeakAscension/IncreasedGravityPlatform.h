// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlatformObject.h"
#include "IncreasedGravityPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PEAKASCENSION_API AIncreasedGravityPlatform : public APlatformObject
{
	GENERATED_BODY()

		

	virtual void PlayerPlatformHit(AActor* PlayerHit, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) override;
};
