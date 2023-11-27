// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystemBaseProgram.h"
#include "OperatingSystemStore.generated.h"

class UOperatingSystemStoreProgramsCollection;

UCLASS(Abstract, HideCategories=(OperatingSystemProgramStore))
class UOperatingSystemStore : public UOperatingSystemBaseProgram
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemStore, meta = (AllowPrivateAccess = true))
	TSoftObjectPtr<UOperatingSystemStoreProgramsCollection> StoreProgramsCollection;

public:

	UOperatingSystemStore();

	virtual FString GetSaveSlotName() const override;

	UFUNCTION(BlueprintPure, Category = OperatingSystemStore)
	static float GetAverageRating(const FOperatingSystemStoreProgramData& StoreProgramData);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemStore)
	bool SubmitRating(const TSoftClassPtr<UOperatingSystemBaseProgram>& TargetProgram, const FOperatingSystemStoreReviewUser& ReviewingUser);

protected:

	virtual void OnValidate(FGenericError& OutError) const override;
	virtual void OnStart(FGenericError& OutError) override;

private:

	void Internal_TryCreateSaveFile() const;
	bool Internal_GetSaveFile(FOperatingSystemStoreApps& OutStoreApps) const;
	static float Internal_GetCurrentAverageRating(const TSet<FOperatingSystemStoreReviewUser>& ReviewUsers);
};
