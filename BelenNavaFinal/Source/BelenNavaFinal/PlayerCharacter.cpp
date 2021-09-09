// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Engine.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward", this, &APlayerCharacter::Front);
	PlayerInputComponent->BindAxis("Right", this, &APlayerCharacter::Right);
	PlayerInputComponent->BindAxis("RotateX", this, &APlayerCharacter::RotateX);
	PlayerInputComponent->BindAxis("RotateY", this, &APlayerCharacter::RotateY);

}

	void APlayerCharacter::Front(float v)
	{
		AddMovementInput(GetActorForwardVector(), v);
	}

	void APlayerCharacter::Right(float h)
	{
		AddMovementInput(GetActorRightVector(), h);
	}

	void APlayerCharacter::RotateX(float r)
	{
		AddControllerYawInput(r);
	}
	void APlayerCharacter::RotateY(float r)
	{
		AddControllerRollInput(r);
	}



