// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveableObjectInterface.h"

// Default functionality. Will be overridden in C++ and Blueprints (Movable Object Actor)
void IMoveableObjectInterface::GetType_Implementation(TEnumAsByte<EMoveableObjectType>& Type)
{
	
}

void IMoveableObjectInterface::GetPeakPosition_Implementation(FVector& Location)
{
	
}

void IMoveableObjectInterface::GetLandPosition_Implementation(FVector& Location)
{
	
}

void IMoveableObjectInterface::GetSpline_Implementation(USplineComponent*& Spline)
{
	
}

bool IMoveableObjectInterface::IsThinObject_Implementation()
{
	return true;
}
