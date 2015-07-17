// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "LibraryVR.h"
#include "LibraryVRGameMode.h"
#include "LibraryVRPlayerController.h"
#include "LibraryVRCharacter.h"

ALibraryVRGameMode::ALibraryVRGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// use our custom PlayerController class
	PlayerControllerClass = ALibraryVRPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}