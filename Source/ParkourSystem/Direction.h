// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Direction.generated.h"

UENUM(BlueprintType)
enum class EDirection:uint8
{
	None UMETA(DisplayName="None"),
	Left UMETA(DisplayName="Left"),
	Right UMETA(DisplayName="Right"),
	Hidden UMETA(Hidden)
};
