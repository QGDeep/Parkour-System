// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "VaultAnimation.generated.h"

USTRUCT(BlueprintType)
struct FVaultAnimation
{
	GENERATED_BODY();
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Montage", MakeStructureDefaultValue = "None"))
	TObjectPtr<UAnimMontage> Montage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Offset", MakeStructureDefaultValue = "0.00000"))
	float Offset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "DisableCollision", MakeStructureDefaultValue = "false"))
	bool DisableCollision;
};

	
