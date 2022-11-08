// Fill out your copyright notice in the Description page of Project Settings.


#include "Radio.h"

// Sets default values
ARadio::ARadio()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	Scene->SetupAttachment(RootComponent);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Scene);
	
	Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	Audio->SetupAttachment(Scene);
}

// Called when the game starts or when spawned
void ARadio::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARadio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARadio::Play()
{
	Audio->SetPaused(false);
}

void ARadio::Pause()
{
	Audio->SetPaused(true);
}

