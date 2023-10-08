// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "OperatingSystemBaseHardware.h"
#include "OperatingSystemPSU.generated.h"


class UOperatingSystemBaseDevice;

UCLASS(Abstract, Blueprintable, BlueprintType, meta=(Keywords = "power, supply, unit"))
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemPSU : public UOperatingSystemBaseHardware
{
	GENERATED_BODY()

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	TWeakObjectPtr<UOperatingSystemBaseDevice> ParentDevice;

public:

	UOperatingSystemPSU();

	UE_NODISCARD static UOperatingSystemPSU* CreatePSU(UOperatingSystemBaseDevice* OwningDevice, FGenericError& OutError);

protected:

	virtual bool OnValidate(FGenericError& OutError) const override;
};
