// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"
#include "OperatingSystemTypes.h"
#include "GameplayTagContainer.h"
#include "OperatingSystemDirectoriesCollection.generated.h"

class UOperatingSystemDirectory;

UCLASS(BlueprintType)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemDirectoriesCollection : public UDataAsset
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemDirectories)
	TSet<TSoftClassPtr<UOperatingSystemDirectory>> Directories;

public:

	UOperatingSystemDirectoriesCollection();

	void Validate(FGenericError& OutError);
	bool HasDirectoryWithTag(const FGameplayTag& TestTag, const bool bRecursive) const;
	const TSet<TSoftClassPtr<UOperatingSystemDirectory>>& GetDirectories() const;
};
