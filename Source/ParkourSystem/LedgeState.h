// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "LedgeState.generated.h"

UENUM(BlueprintType)
enum class ELedgeState:uint8
{
	None UMETA(DisplayName="None"),
	Idle UMETA(DisplayName="Idle"),
	MovingLeft UMETA(DisplayName="Moving Left"),
	MovingRight UMETA(DisplayName="Moving Right"),
	Hidden UMETA(Hidden)
};
