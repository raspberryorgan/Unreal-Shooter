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


		PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerCharacter::OnJumpPlayer);
		PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &APlayerCharacter::OnFire);
}

	void APlayerCharacter::Front(float v)
	{
		AddMovementInput(GetActorForwardVector(), -v);
	}

	void APlayerCharacter::Right(float h)
	{
		AddMovementInput(GetActorRightVector(), -h);
	}

	void APlayerCharacter::RotateX(float r)
	{
		AddControllerYawInput(r);
	}
	void APlayerCharacter::RotateY(float r)
	{
		AddControllerPitchInput(r);
	}

	void APlayerCharacter::OnJumpPlayer()
	{
		Jump();
	}


	FHitResult APlayerCharacter::GetFirstPhysicBodyToReach()
	{
		FVector viewPosition;
		FRotator viewRotation;

		GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
			OUT viewPosition,
			OUT viewRotation
		);
		FVector lineTraceEnd = viewPosition + viewRotation.Vector() * 5000000000000.f;
		FHitResult hitResult;
		FCollisionQueryParams queryParams = FCollisionQueryParams(
			FName(TEXT("")),
			false,
			GetOwner()
		);

		GetWorld()->LineTraceSingleByObjectType(
			OUT hitResult,
			viewPosition,
			lineTraceEnd,
			FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
			queryParams
		);

		// Obtener que está mirando
		AActor* hitActor = hitResult.GetActor();
		
		if (hitActor)
		{
			FString actorName = hitActor->GetName();
			UE_LOG(LogTemp, Warning, TEXT("Actor name: %s"), *actorName);
		}
		

		return hitResult;
	}



	void APlayerCharacter:: OnFire() {
		UE_LOG(LogTemp, Warning, TEXT("Shoot"));

		auto hitResult = GetFirstPhysicBodyToReach();
		auto componentToGrab = hitResult.GetComponent();
		auto actor = hitResult.GetActor();

		if (actor)
		{
			//Shoot
			//Cast to an enemy, if is correct we hit an enemy
			//The enemy needs physics
			FString actorName = actor->GetName();
			UE_LOG(LogTemp, Warning, TEXT("Actor name: %s"), *actorName);
		}
	}

