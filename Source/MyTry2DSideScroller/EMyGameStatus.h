// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EMyGameStatus : uint8 {
 None           UMETA(DisplayName = "None"),
 Started        UMETA(DisplayName = "Started"),
 Stopped        UMETA(DisplayName = "Stopped"),
 Finished       UMETA(DisplayName = "Finished"),
 FailedTime     UMETA(DisplayName = "Failed (time end)"),
 FailedEnergy   UMETA(DisplayName = "Failed (energy end)"),
 FailedKill     UMETA(DisplayName = "Failed (kill box)")
};
