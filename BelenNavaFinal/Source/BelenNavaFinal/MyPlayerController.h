// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "MainMenu.h"
#include "GameWidget.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BELENNAVAFINAL_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
public:

		UPROPERTY(EditAnywhere)
		TSubclassOf<class UMainMenu> menucanvasprefab;
		UPROPERTY(EditAnywhere)
			TSubclassOf<class UGameWidget> gamecanvasprefab;

	UPROPERTY(EditAnywhere)
		UMainMenu* menuwidget;
	UPROPERTY(EditAnywhere)
		UGameWidget* gameWidget;

	UPROPERTY(EditAnywhere)
		FString mainmenuname;
	UPROPERTY(EditAnywhere)
		FString level1name;

	UPROPERTY(EditAnywhere)
		FString currentLevelName;

	void virtual BeginPlay() override;
	
};
