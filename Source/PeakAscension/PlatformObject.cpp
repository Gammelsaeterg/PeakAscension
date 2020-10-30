// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformObject.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlatformObject::APlatformObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
}

// Called when the game starts or when spawned
void APlatformObject::BeginPlay()
{
	Super::BeginPlay();
	
	InitialTransform = PlatformMesh->GetComponentTransform();
}

// Called every frame
void APlatformObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

