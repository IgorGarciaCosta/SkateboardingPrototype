// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterParent.generated.h"

UCLASS()
class SKATEBOARDING_API ACharacterParent : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterParent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	int32 pointsCounter = 0;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void AddPoint();
		void AddPoint_Implementation();//call BP function after C++ function

	UFUNCTION(BlueprintCallable)
	FORCEINLINE int32 GetPoints() { return pointsCounter; };
};
