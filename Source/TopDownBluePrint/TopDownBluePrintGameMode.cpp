// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TopDownBluePrint.h"
#include "TopDownBluePrintGameMode.h"
#include "TopDownBluePrintPlayerController.h"
#include "TopDownBluePrintCharacter.h"

ATopDownBluePrintGameMode::ATopDownBluePrintGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopDownBluePrintPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}