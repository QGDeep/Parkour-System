// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MoveableObjectType.generated.h"

UENUM(BlueprintType)
enum class EMoveableObjectType:uint8
{
	None UMETA(DisplayName="None"),
	Beam UMETA(DisplayName="Beam"),
	Jumpable UMETA(DisplayName="Jumpable"),
	Vaultable UMETA(DisplayName="Vaultable"),
	Swingable UMETA(DisplayName="Swingable"),
	Hidden UMETA(Hidden)
};
