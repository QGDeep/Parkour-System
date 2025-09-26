// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "LandState.generated.h"

UENUM(BlueprintType)
enum class ELandState:uint8
{
	None UMETA(DisplayName="None"),
	AnotherFreerun UMETA(DisplayName="Another Freerun"),
	DefaultFloor UMETA(DisplayName="Default Floor"),
	InAir UMETA(DisplayName="In Air"),
	Hidden UMETA(Hidden)
};
