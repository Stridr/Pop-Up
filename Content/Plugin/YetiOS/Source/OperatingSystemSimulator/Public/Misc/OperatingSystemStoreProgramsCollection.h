// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Misc/OperatingSystemProgramsCollection.h"
#include "OperatingSystemStoreProgramsCollection.generated.h"

UCLASS(BlueprintType, HideCategories=(OperatingSystemPrograms))
class UOperatingSystemStoreProgramsCollection : public UOperatingSystemProgramsCollection
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemStorePrograms)
	TSet<FOperatingSystemStoreProgramData> StorePrograms;

public:

	UOperatingSystemStoreProgramsCollection();

	virtual void Validate(FGenericError& OutError) override;
	virtual const TSet<TSoftClassPtr<UOperatingSystemBaseProgram>>& GetProgramClasses() const override;

	FORCEINLINE const TSet<FOperatingSystemStoreProgramData>& GetStorePrograms() const { return StorePrograms; }
};
