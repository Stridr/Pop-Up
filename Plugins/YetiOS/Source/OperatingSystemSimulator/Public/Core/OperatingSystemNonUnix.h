// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystem.h"
#include "OperatingSystemNonUnix.generated.h"

class UOperatingSystemPartition;

/**
 * 
 */
UCLASS(Within=OperatingSystemBaseDevice, Abstract, Blueprintable, BlueprintType)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemNonUnix : public UOperatingSystem
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<FName> DiskLetters;

public:

	UOperatingSystemNonUnix();

	virtual UOperatingSystemDirectory* CreateDirectoryInPath(const FString& TargetPath, const FString& DirectoryName,
		TSoftClassPtr<UOperatingSystemDirectory> DirectoryClass,
		UOperatingSystemPartition* TargetPartition,
		const bool bIsFromSaveGame,
		FGenericError& OutError) override;

protected:

	virtual void FinalizePreInstallation(FGenericError& OutError) override;
	virtual void PrepareOperatingSystemInstallImpl(FGenericError& OutError) override;
	virtual bool StartOperatingSystemImpl(FGenericError& OutError) override;
	virtual void PostLoadOperatingSystemImpl(FGenericError& OutError) override;
	virtual void OnPartitionLoaded(UOperatingSystemPartition& LoadedPartition, const FOperatingSystemPartitionSaveLoad& SaveLoadData) override;

	virtual UOperatingSystemPartition* FindPartitionFromLetter(const FName& TargetDiskLetter) const override final;

	UFUNCTION(BlueprintPure, Category = OperatingSystemNonUnix, meta = (Keywords = "get, disk, letter"))
	FName FindDiskLetterAtIndex(const int32& AtIndex) const;
};
