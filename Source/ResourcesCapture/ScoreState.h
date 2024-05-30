// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "ScoreState.generated.h"



/**
 * 
 */


UCLASS()
class RESOURCESCAPTURE_API AScoreState : public AGameStateBase
{
	GENERATED_BODY()
	

public:

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(Replicated, EditAnywhere,BlueprintReadWrite)
	int32 CurrentScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxScore;
};
