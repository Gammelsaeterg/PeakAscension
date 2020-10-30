// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlatformObject.h"
#include "FallingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PEAKASCENSION_API AFallingPlatform : public APlatformObject
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DurationBeforeFall{ 1.f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RespawnTime{ 3.f };

	bIsHit{ false };
};
