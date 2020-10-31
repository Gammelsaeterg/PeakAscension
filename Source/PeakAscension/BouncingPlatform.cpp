// Fill out your copyright notice in the Description page of Project Settings.


#include "BouncingPlatform.h"
#include "GameFramework/Character.h"

void ABouncingPlatform::PlayerPlatformHit(AActor* PlayerHit, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	
	float ZForce = Cast<ACharacter>(PlayerHit)->GetMesh()->GetPhysicsLinearVelocity().Z;
	UE_LOG(LogTemp, Warning, TEXT("Reference %f %s"), ZForce, *NormalImpulse.ToString())
		
	
	if (ZForce <= MinimumBounceForce && bUseStaticBounce == false)
	{
		ZForce = ZForce * BounceForceRetention;
		CurrentBounceForce = -ZForce;
		Cast<ACharacter>(PlayerHit)->LaunchCharacter(FVector(0, 0, CurrentBounceForce), false, true);
	}

	else if (bUseStaticBounce == true)
	{
		Cast<ACharacter>(PlayerHit)->LaunchCharacter(FVector(0, 0, BaseBounceForce), false, true);
	}

	UE_LOG(LogTemp, Warning, TEXT("Reference %f"), ZForce)
}
