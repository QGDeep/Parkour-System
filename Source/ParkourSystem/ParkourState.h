// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ParkourState.generated.h"

UENUM(BlueprintType)
enum class EParkourState:uint8
{
	None UMETA(DisplayName="None"),
	Sliding UMETA(DisplayName="Sliding"),
	Vaulting UMETA(DisplayName="Vaulting"),
	Mantling UMETA(DisplayName="Mantling"),
	BeamWalking UMETA(DisplayName="Beam Walking"),
	LedgeClimbing UMETA(DisplayName="Ledge Climbing"),
	Cover UMETA(DisplayName="Cover"),
	WallRunning UMETA(DisplayName="Wall Running"),
	WallSliding UMETA(DisplayName="Wall Sliding"),
	WallClimbing UMETA(DisplayName="Wall Climbing"),
	Rolling UMETA(DisplayName="Rolling"),
	Dodging UMETA(DisplayName="Dodging"),
	AirDashing UMETA(DisplayName="Air Dashing"),
	FreeRunning UMETA(DisplayName="Free Running"),
	Hidden UMETA(Hidden)
};
