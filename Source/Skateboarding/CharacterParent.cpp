// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterParent.h"

// Sets default values
ACharacterParent::ACharacterParent()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacterParent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterParent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

