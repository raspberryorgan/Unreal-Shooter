// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerBullet.h"
#include "Components/SceneComponent.h"
#include "ShootingNPC.h"
#include "MyPlayerController.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class BELENNAVAFINAL_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;




	void Front(float v);
	void Right(float h);
	void OnJumpPlayer();
	void OnEndPlayerJump();

	void RotateX(float r);
	void RotateY(float r);

	void OnFire();

	FHitResult GetFirstPhysicBodyToReach();;

	UPROPERTY(EditAnywhere)
		UStaticMesh* gun;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class APlayerBullet> bulletPrefab;

	UFUNCTION(BlueprintCallable)
		void OnDamage();

	UPROPERTY(BlueprintReadWrite)
	float life;

	UPROPERTY(EditAnywhere)
		float damage;

	bool bIsSpeedy;
	UPROPERTY(EditAnywhere)
	float timer;

};
