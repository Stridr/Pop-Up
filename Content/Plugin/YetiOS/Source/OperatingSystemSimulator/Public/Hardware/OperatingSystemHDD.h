// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystemBaseHardware.h"
#include "OperatingSystemHDD.generated.h"

class UOperatingSystemMBB;
class UOperatingSystemPartition;

UCLASS(Abstract, Blueprintable, BlueprintType, meta=(Keywords = "hard, disk, ssd, nvme", DisplayName = "Operating System HardDisk"))
class UOperatingSystemHDD : public UOperatingSystemBaseHardware
{
	GENERATED_BODY()

protected:

	/** Size of this hard disk. */
	UPROPERTY(EditAnywhere, Category = OperatingSystemHardDisk, meta = (ForceUnits = Gigabytes, UIMin = 100, UIMax = 4000, ClampMin = 1, ClampMax = 8000))
	float SizeInGB;

	/** Key is the drive letter. Like C, D, E etc. In Unix this can be /dev/sda, /dev/sda1 etc. */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = Debug)
	TArray<TObjectPtr<UOperatingSystemPartition>> DiskPartitions;

	/** Space remaining to allocate new partitions. */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = Debug)
	double PostDiskAllocatedSpaceInBytes;

public:

	UOperatingSystemHDD();

	UE_NODISCARD static UOperatingSystemHDD* CreateHDD(UOperatingSystemMBB* OwningMotherboard, FGenericError& OutError);

	void ConsumeSpaceInMB(const float& NewSizeInMB, UOperatingSystemPartition* Partition, FGenericError& OutError);
	void ConsumeSpaceInGB(const float& NewSizeInGB, UOperatingSystemPartition* Partition, FGenericError& OutError);

	FText GetSizeAsText(const EOperatingSystemSizeMethod SizeMethod, const UOperatingSystemPartition* Partition, FGenericError& OutError) const;
	float GetStoragePercentage(const UOperatingSystemPartition* Partition, FGenericError& OutError) const;

	UOperatingSystemPartition* AllocatePartitionFromLoadGame(const FOperatingSystemPartitionSaveLoad& PartitionSaveLoad);
	void AllocatePartition(UOperatingSystemPartition& NewPartition, FGenericError& OutError);
	void RemovePartition(UOperatingSystemPartition& Partition, FGenericError& OutError);
	void RefreshPartitions();

protected:

	virtual bool OnValidate(FGenericError& OutError) const override;

public:

	double GetHardDiskSize(const EOperatingSystemSizeMethod& SizeMethod) const;

	UOperatingSystemPartition* FindPartitionByID(const FOperatingSystemUniqueId& TestID) const;
	bool HasPartitionWithID(const FOperatingSystemUniqueId& TestID) const;

	FORCEINLINE const TArray<TObjectPtr<UOperatingSystemPartition>>& GetPartitions() const { return DiskPartitions; }
};
