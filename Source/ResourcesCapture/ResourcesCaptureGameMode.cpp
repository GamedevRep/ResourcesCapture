// Copyright Epic Games, Inc. All Rights Reserved.

#include "ResourcesCaptureGameMode.h"
#include "ResourcesCaptureCharacter.h"
#include "ScoreState.h"

#include "UObject/ConstructorHelpers.h"

AResourcesCaptureGameMode::AResourcesCaptureGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	/*GameStateClass = AScoreState::StaticClass();*/

	
}

//int32 AResourcesCaptureGameMode::GetScore() const
//{
//	return GetGameState<AScoreState>()->MaxScore;
//}
//
//int32 AResourcesCaptureGameMode::SetScore(int32 newScore)
//{
//	return GetGameState<AScoreState>()->CurrentScore = newScore;
//}




