// Fill out your copyright notice in the Description page of Project Settings.


#include "ParkourFunctionLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
//#include "Kismet/KismetSystemLibrary.h"
//#include "Kismet/KismetArrayLibrary.h"

FVector UParkourFunctionLibrary::VectorOffsetMultiplier(FVector InitialVector, FVector MultiplyVector, float Value)
{
    /* Common vector multiplication used throughout blueprint code */
	return InitialVector + (MultiplyVector * Value);
}

void UParkourFunctionLibrary::GetYawRotator(FRotator Rotator, FRotator& YawRotator)
{
	/* Used in some instances. Breaks a rotator and only returns the Yaw rotator in blueprints */
	YawRotator = FRotator(0, 0, Rotator.Yaw);
	//return YawRotator;
}

void UParkourFunctionLibrary::RandomMontage(TArray<UAnimMontage*>& MontageArray, UAnimMontage*& Montage)
{
	/* Returns a random montage from a montage array */
    int32 RandomIndex = FMath::RandRange(0, MontageArray.Num() - 1);
	Montage = MontageArray[RandomIndex];
	//return Montage;
}

bool UParkourFunctionLibrary::CheckSpeed(UCharacterMovementComponent* CharacterMovement,
	TEnumAsByte<EOperation> Operation, float Value)
{
	/* Returns true or false wheather the input Value is < / > / == to character velocity. */
	float VecLength = CharacterMovement->Velocity.Size();
	switch (Operation)
	{
		case Less_than:
			if (VecLength < Value)
			{
				return true;
			}
			else
			{
				return false;
			}
		case Greater_than:
			if (VecLength > Value)
			{
				return true;
			}
			else
			{
				return false;
			}
		case Equal_to:
			if (VecLength == Value)
			{
				return true;
			}
			else
			{
				return false;
			}
		default: return None;
	};
}

void UParkourFunctionLibrary::ClearTimerIfValid(FTimerHandle Timer)
{
	/* Checks if given timer is valid. If true, clear timer */
	if (Timer.IsValid())
	{
		UWorld* World = nullptr;
		World->GetTimerManager().ClearTimer(Timer);
		//return true;
		//UKismetSystemLibrary::K2_IsValidTimerHandle(Timer);
		//UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(World, Timer);
	}
	/*else
	{
		return false;
	}*/
}
