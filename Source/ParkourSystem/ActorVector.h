// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ActorVector.generated.h"

UENUM(BlueprintType)
enum class EActorVector:uint8
{
	None UMETA(DisplayName="None"),
	Forward UMETA(DisplayName="Forward"),
	Right UMETA(DisplayName="Right"),
	Left UMETA(DisplayName="Left"),
	Hidden UMETA(Hidden)
};
