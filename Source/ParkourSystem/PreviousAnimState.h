// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PreviousAnimState.generated.h"

UENUM(BlueprintType)
enum class EPreviousAnimState:uint8
{
	None UMETA(DisplayName="None"),
	Up UMETA(DisplayName="Up"),
	Right UMETA(DisplayName="Right"),
	Down UMETA(DisplayName="Down"),
	Left UMETA(DisplayName="Left"),
	Hidden UMETA(Hidden)
};
