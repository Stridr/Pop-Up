// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Core/OperatingSystemDirectory.h"
#include "OperatingSystemRootDirectory.generated.h"

/**
 * Only usable for Unix Operating Systems
 */
UCLASS(Abstract)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemRootDirectory : public UOperatingSystemDirectory
{
	GENERATED_BODY()

public:

	virtual bool IsUnixRootDirectory() const override final { return true; }
};
