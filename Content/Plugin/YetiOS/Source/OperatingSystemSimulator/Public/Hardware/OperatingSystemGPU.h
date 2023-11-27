// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "OperatingSystemBaseHardware.h"
#include "OperatingSystemGPU.generated.h"

class UOperatingSystemMBB;

UCLASS(Abstract, Blueprintable, BlueprintType, meta=(Keywords = "graphic"))
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemGPU : public UOperatingSystemBaseHardware
{
	GENERATED_BODY()

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	TWeakObjectPtr<UOperatingSystemMBB> ParentMotherboard;

public:

	UOperatingSystemGPU();

	UE_NODISCARD static UOperatingSystemGPU* CreateGPU(UOperatingSystemMBB* OwningMotherboard, FGenericError& OutError);

protected:

	virtual bool OnValidate(FGenericError& OutError) const override;
};
