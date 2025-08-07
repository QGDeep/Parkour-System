// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ParkourFunctionLibrary.generated.h"

/**
 * 
 */
 
UENUM(BlueprintType)
enum EOperation : uint8
{
	None UMETA(Hidden),
	Less_than UMETA(DisplayName = "Less than"),
	Greater_than UMETA(DisplayName = "Greater than"),
	Equal_to UMETA(DisplayName = "Equal To"),
};
 
UCLASS(Blueprintable, BlueprintType)
class PARKOURSYSTEM_API UParkourFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ParkourFunctionLibrary")
	static FVector VectorOffsetMultiplier(FVector InitialVector, FVector MultiplyVector, float Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ParkourFunctionLibrary")
	static void GetYawRotator(FRotator Rotator, FRotator& YawRotator);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ParkourFunctionLibrary")
	static void RandomMontage(UPARAM(ref) TArray<UAnimMontage*>& MontageArray, UAnimMontage*& Montage);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ParkourFunctionLibrary")
	static bool CheckSpeed(UCharacterMovementComponent* CharacterMovement, TEnumAsByte<EOperation> Operation, float Value);

	UFUNCTION(BlueprintCallable, Category = "ParkourFunctionLibrary")
	static void ClearTimerIfValid(FTimerHandle Timer);
	
};
