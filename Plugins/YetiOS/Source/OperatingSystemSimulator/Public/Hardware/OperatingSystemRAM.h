// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "OperatingSystemBaseHardware.h"
#include "OperatingSystemRAM.generated.h"

class UOperatingSystemMBB;

UCLASS(Abstract, Blueprintable, BlueprintType, meta=(Keywords = "memory"))
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemRAM : public UOperatingSystemBaseHardware
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = OperatingSystemMemory)
	EOperatingSystemCommonSizes Size;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	TWeakObjectPtr<UOperatingSystemMBB> ParentMotherboard;

public:

	UOperatingSystemRAM();

	UE_NODISCARD static UOperatingSystemRAM* CreateRAM(UOperatingSystemMBB* OwningMotherboard, FGenericError& OutError);

protected:

	virtual bool OnValidate(FGenericError& OutError) const override;
};
