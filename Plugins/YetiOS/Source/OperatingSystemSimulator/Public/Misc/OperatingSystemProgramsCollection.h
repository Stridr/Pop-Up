// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"
#include "OperatingSystemTypes.h"
#include "OperatingSystemProgramsCollection.generated.h"

class UOperatingSystemBaseProgram;

/**
 * 
 */
UCLASS(BlueprintType)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemProgramsCollection : public UDataAsset
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemPrograms)
	TSet<TSoftClassPtr<UOperatingSystemBaseProgram>> Programs;

public:

	UOperatingSystemProgramsCollection();

	void Validate(FGenericError& OutError);
	const TSet<TSoftClassPtr<UOperatingSystemBaseProgram>>& GetProgramClasses() const;
};
