// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Core/OperatingSystemDataObject.h"
#include "OperatingSystemProgramData.generated.h"

class UOperatingSystemBaseProgram;

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class UOperatingSystemProgramData : public UOperatingSystemDataObject
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemProgramData)
	TWeakObjectPtr<UOperatingSystemBaseProgram> ParentProgram;

public:

	UOperatingSystemProgramData();

protected:

	virtual void OnCreate() override;
};
