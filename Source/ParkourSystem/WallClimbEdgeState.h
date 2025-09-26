// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "WallClimbEdgeState.generated.h"

UENUM(BlueprintType)
enum class EWallClimbEdgeState:uint8
{
	None UMETA(DisplayName="None"),
	Both UMETA(DisplayName="Both"),
	Left UMETA(DisplayName="Left"),
	Right UMETA(DisplayName="Right"),
	Hidden UMETA(Hidden)
};
