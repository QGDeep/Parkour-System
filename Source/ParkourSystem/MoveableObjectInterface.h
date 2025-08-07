// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MoveableObjectInterface.generated.h"


UENUM(BlueprintType)
enum EMoveableObjectType : uint8
{
	//None UMETA(Hidden),
	Jumpable UMETA(DisplayName = "Jumpable"),
	Vaultable UMETA(DisplayName = "Vaultable"),
	Swingable UMETA(DisplayName = "Swingable"),
	Beam UMETA(DisplayName = "Beam"),
};

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable, BlueprintType)
class UMoveableObjectInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PARKOURSYSTEM_API IMoveableObjectInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Freerunning System | General")
	void GetType(TEnumAsByte<EMoveableObjectType>& Type);
	virtual void GetType_Implementation(TEnumAsByte<EMoveableObjectType>& Type);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Freerunning System | General")
	void GetPeakPosition(FVector& Location);
	virtual void GetPeakPosition_Implementation(FVector& Location);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Freerunning System | General")
	void GetLandPosition(FVector& Location);
	virtual void GetLandPosition_Implementation(FVector& Location);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Freerunning System | Optional")
	void GetSpline(USplineComponent*& Spline);
	virtual void GetSpline_Implementation(USplineComponent*& Spline);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Freerunning System | Optional")
	bool IsThinObject();
	virtual bool IsThinObject_Implementation();
};
