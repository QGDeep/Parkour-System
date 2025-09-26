// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ClimbMontageSelector.generated.h"

UENUM(BlueprintType)
enum class EClimbMontageSelector:uint8
{
	None UMETA(DisplayName="None"),
	NearlyEqualZero UMETA(DisplayName="Nearly Equal 0"),
	LessThanZero UMETA(DisplayName="Less Than 0 (< 0)"),
	GreaterThanZero UMETA(DisplayName="Greater Than 0 (> 0)"),
	NotEqualZero UMETA(DisplayName="Not Equal 0 (!= 0)"),
	Hidden UMETA(Hidden)
};
