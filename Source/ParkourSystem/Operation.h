// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Operation.generated.h"

UENUM(BlueprintType)
enum class EOperation:uint8
{
	None UMETA(DisplayName="None"),
	LessThan UMETA(DisplayName="Less Than (<)"),
	GreaterThan UMETA(DisplayName="Greater Than (>)"),
	EqualTo UMETA(DisplayName="Equal To (==)"),
	Hidden UMETA(Hidden)
};
