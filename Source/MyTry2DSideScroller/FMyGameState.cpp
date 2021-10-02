// Fill out your copyright notice in the Description page of Project Settings.


#include "FMyGameState.h"

#include <string>

FMyGameState::FMyGameState(): Status(EMyGameStatus::None), TimeLeft(0.0f), PlayerEnergy(0.0f), Points(0.0f)
{
}

FMyGameState::~FMyGameState()
{
}

