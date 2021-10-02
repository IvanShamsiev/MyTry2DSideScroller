// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EMyGameStatus.h"
#include "FMyGameState.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FMyGameState
{

	GENERATED_BODY()

	public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMyGameStatus Status;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PlayerEnergy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Points;

	FMyGameState();
	~FMyGameState();
};
