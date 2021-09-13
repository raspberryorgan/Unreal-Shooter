// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"

void AMyPlayerController::BeginPlay() {
	Super::BeginPlay();

	UWorld* MyWorld = GetWorld();
	currentLevelName = MyWorld->GetMapName();

	if (currentLevelName == mainmenuname) {
		menuwidget = CreateWidget< UMainMenu>(this, menucanvasprefab);

		if (menuwidget) {
			menuwidget->AddToViewport();
		}
	}
	
	if (currentLevelName == level1name) {
		gameWidget = CreateWidget< UGameWidget>(this, gamecanvasprefab);

		if (gameWidget) {
			gameWidget->AddToViewport();
		}
	}
	
}

