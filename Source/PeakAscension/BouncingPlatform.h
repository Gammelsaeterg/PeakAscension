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

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseStaticBounce{ false };

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BaseBounceForce{ 500.f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumBounceForce{ -100.f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BounceForceRetention{ 0.9f };

	float CurrentBounceForce{ 500.f };

	virtual void PlayerPlatformHit(AActor* PlayerHit, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) override;
	
};
