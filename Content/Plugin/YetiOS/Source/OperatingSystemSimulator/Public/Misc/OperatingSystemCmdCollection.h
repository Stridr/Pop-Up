// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"
#include "OperatingSystemTypes.h"
#include "OperatingSystemCmdCollection.generated.h"

class UOperatingSystemTerminalCommand;

/**
 * 
 */
UCLASS(BlueprintType)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemCmdCollection : public UDataAsset
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemTerminalCommands)
	TSet<TSoftClassPtr<UOperatingSystemTerminalCommand>> Commands;

public:

	UOperatingSystemCmdCollection();

	void Validate(FGenericError& OutError) const;
	const TSet<TSoftClassPtr<UOperatingSystemTerminalCommand>>& GetCommandClasses() const;
};
