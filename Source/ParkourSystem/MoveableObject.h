// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MoveableObjectType.h"
#include "Components/SplineComponent.h"
#include "MoveableObject.generated.h"



// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable, BlueprintType)
class UMoveableObject : public UInterface
{
	GENERATED_BODY()
};

class PARKOURSYSTEM_API IMoveableObject
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "General")
	void GetType(EMoveableObjectType& Type);
	//virtual void GetType_Implementation(EMoveableObjectType& Type) = 0;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "General")
	void GetPeakPosition(FVector& Location);
	//virtual void GetPeakPosition_Implementation(FVector& Location) = 0;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "General")
	void GetLandPosition(FVector& Location);
	//virtual void GetLandPosition_Implementation(FVector& Location) = 0;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Optional")
	void GetSpline(USplineComponent*& Spline);
	//virtual void GetSpline_Implementation(USplineComponent*& Spline) = 0;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Optional")
	bool IsThinObject();
	/*virtual bool IsThinObject_Implementation(bool& Value)
	{
		return Value;
	}*/
};
