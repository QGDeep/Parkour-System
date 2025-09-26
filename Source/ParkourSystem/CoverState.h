// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoverState.generated.h"

UENUM(BlueprintType)
enum class ECoverState:uint8
{
	None UMETA(DisplayName="None"),
	LeftEdge UMETA(DisplayName="Left Edge"),
	LeftMoving UMETA(DisplayName="Left Moving"),
	LeftIdle UMETA(DisplayName="Left Idle"),
	Idle UMETA(DisplayName="Idle"),
	RightIdle UMETA(DisplayName="Right Idle"),
	RightMoving UMETA(DisplayName="Right Moving"),
	RightEdge UMETA(DisplayName="Right Edge"),
	Hidden UMETA(Hidden)
};
