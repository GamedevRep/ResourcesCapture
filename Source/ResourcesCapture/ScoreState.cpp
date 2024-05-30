// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreState.h"

void AScoreState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AScoreState, CurrentScore);
}
