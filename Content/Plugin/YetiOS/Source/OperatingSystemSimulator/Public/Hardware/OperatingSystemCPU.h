// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "OperatingSystemBaseHardware.h"
#include "OperatingSystemTypes.h"
#include "OperatingSystemCPU.generated.h"

class UOperatingSystemMBB;

UCLASS(Abstract, Blueprintable, BlueprintType)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemCPU : public UOperatingSystemBaseHardware
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemCPU, meta = (ForceUnits = Gigahertz, UIMin = 1, UIMax = 5, ClampMin = 0, ClampMax = 8.8))
	float Speed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemCPU, meta = (Categories = "OperatingSystem.Hardware.CPU.Socket"))
	FGameplayTag SocketTag;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	TWeakObjectPtr<UOperatingSystemMBB> ParentMotherboard;

public:

	UOperatingSystemCPU();

	UE_NODISCARD static UOperatingSystemCPU* CreateCPU(UOperatingSystemMBB* OwningMotherboard, FGenericError& OutError);

protected:

	virtual bool OnValidate(FGenericError& OutError) const override;
};
