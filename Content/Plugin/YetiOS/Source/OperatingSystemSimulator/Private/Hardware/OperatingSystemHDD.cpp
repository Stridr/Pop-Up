// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Hardware/OperatingSystemHDD.h"
#include "OperatingSystemMacros.h"
#include "OperatingSystemTags.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "Hardware/OperatingSystemGPU.h"
#include "Hardware/OperatingSystemMBB.h"
#include "Core/OperatingSystemPartition.h"
#include "Global/OperatingSystemStatics.h"

UOperatingSystemHDD::UOperatingSystemHDD()
	: SizeInGB(256.f)
	, DiskPartitions({})
{
	HardwareTag = HddTag;
}

UOperatingSystemHDD* UOperatingSystemHDD::CreateHDD(UOperatingSystemMBB* OwningMotherboard, FGenericError& OutError)
{
	const auto& ParentDeviceRef = OwningMotherboard->GetParentDevice();
	if (ParentDeviceRef.GetHddClass().IsNull())
	{
		OutError = MAKE_ERROR("ERR_HDD", FString::Printf(TEXT("%s has no hdd class."), *ParentDeviceRef.GetDeviceName().ToString()));
		return nullptr;
	}

	auto ProxyHDD = NEW_SOFT_OBJ(UOperatingSystemHDD, OwningMotherboard, ParentDeviceRef.GetHddClass(), HDD);
	ProxyHDD->PostDiskAllocatedSpaceInBytes = FOperatingSystemSizeInGB(ProxyHDD->SizeInGB).SizeInBytes;
	
	if (!ProxyHDD->Validate(OutError))
	{
		ProxyHDD->MarkAsGarbage();
		ProxyHDD = nullptr;
	}

	return ProxyHDD;
}

void UOperatingSystemHDD::ConsumeSpaceInMB(const float& NewSizeInMB, UOperatingSystemPartition* Partition, FGenericError& OutError)
{
	if (!IsValid(Partition))
	{
		OutError = MAKE_ERROR("ERR_PARTITION", "Null partition.");
		return;
	}

	Partition->ConsumeSpace(FOperatingSystemSizeInMB(NewSizeInMB).SizeInBytes, OutError);
}

void UOperatingSystemHDD::ConsumeSpaceInGB(const float& NewSizeInGB, UOperatingSystemPartition* Partition, FGenericError& OutError)
{
	if (!IsValid(Partition))
	{
		OutError = MAKE_ERROR("ERR_PARTITION", "Null partition.");
		return;
	}

	Partition->ConsumeSpace(FOperatingSystemSizeInGB(NewSizeInGB).SizeInBytes, OutError);
}

FText UOperatingSystemHDD::GetSizeAsText(const EOperatingSystemSizeMethod SizeMethod, const UOperatingSystemPartition* Partition, FGenericError& OutError) const
{
	if (!IsValid(Partition))
	{
		OutError = MAKE_ERROR("ERR_PARTITION", "Null partition.");
		return FText();
	}

	return Partition->GetSizeAsText(SizeMethod);
}

float UOperatingSystemHDD::GetStoragePercentage(const UOperatingSystemPartition* Partition, FGenericError& OutError) const
{
	if (!IsValid(Partition))
	{
		OutError = MAKE_ERROR("ERR_PARTITION", "Null partition.");
		return 0.f;
	}

	return Partition->GetStoragePercentage();
}

UOperatingSystemPartition* UOperatingSystemHDD::AllocatePartitionFromLoadGame(const FOperatingSystemPartitionSaveLoad& PartitionSaveLoad)
{
	auto LoadedPartition = UOperatingSystemPartition::LoadNewPartition(this, PartitionSaveLoad);
	DiskPartitions.AddUnique(LoadedPartition);
	return LoadedPartition;
}

void UOperatingSystemHDD::AllocatePartition(UOperatingSystemPartition& NewPartition, FGenericError& OutError)
{
	if (!NewPartition.IsValidPartition())
	{
		OutError = MAKE_ERROR("ERR_PARTITION", "Partition not valid.");
		return;
	}

	if (PostDiskAllocatedSpaceInBytes < NewPartition.GetTotalSizeBytes())
	{
		OutError = MAKE_ERROR("ERR_PARTITION", FString::Printf(TEXT("Unable to partition. Trying to allocate %d with %d"), NewPartition.GetTotalSizeBytes(), PostDiskAllocatedSpaceInBytes));
		return;
	}

	bool bSetSystemPartition = true;
	for (const auto& It : DiskPartitions)
	{
		if (It->IsSystemPartition())
		{
			bSetSystemPartition = false;
			break;
		}
	}

	NewPartition.SetSystemPartition(bSetSystemPartition);
	NewPartition.SetDiskName(FString::Printf(TEXT("Disk%i"), DiskPartitions.Num()));
	PostDiskAllocatedSpaceInBytes -= NewPartition.GetTotalSizeBytes();
	if (PostDiskAllocatedSpaceInBytes <= UE_KINDA_SMALL_NUMBER)
	{
		PostDiskAllocatedSpaceInBytes = 0;
	}

	DiskPartitions.Emplace(&NewPartition);
}

void UOperatingSystemHDD::RemovePartition(UOperatingSystemPartition& Partition, FGenericError& OutError)
{
	if (!Partition.IsValidPartition())
	{
		OutError = MAKE_ERROR("ERR_PARTITION", "Partition is not null but not valid either.");
		return;
	}

	PostDiskAllocatedSpaceInBytes += Partition.GetTotalSizeBytes();
	DiskPartitions.RemoveSingle(&Partition);
}

void UOperatingSystemHDD::RefreshPartitions()
{
	int32 Count = 0;
	for (const auto& It : DiskPartitions)
	{
		It->SetDiskName(FString::Printf(TEXT("Disk%i"), Count));
		Count++;
	}
}

bool UOperatingSystemHDD::OnValidate(FGenericError& OutError) const
{
	if (HardwareTag != HddTag)
	{
		OutError = MAKE_ERROR("ERR_HDD", FString::Printf(TEXT("%s is not using %s tag. It is using %s which is not correct."), *Name.ToString(), *HddTag.GetTag().ToString(), *HardwareTag.ToString()));
		return false;
	}

	return true;
}

double UOperatingSystemHDD::GetHardDiskSize(const EOperatingSystemSizeMethod& SizeMethod) const
{
	double ReturnValue = SizeInGB;
	switch (SizeMethod)
	{
		case EOperatingSystemSizeMethod::Bytes:
			ReturnValue = FOperatingSystemSizeInGB(SizeInGB).SizeInBytes;
			break;
		case EOperatingSystemSizeMethod::MB:
			ReturnValue = UOperatingSystemStatics::ConvertGB_ToMB(SizeInGB);
			break;
		default:
			break;
	}

	return ReturnValue;
}

UOperatingSystemPartition* UOperatingSystemHDD::FindPartitionByID(const FOperatingSystemUniqueId& TestID) const
{
	for (const auto& It : DiskPartitions)
	{
		if (It->GetPartitionID() == TestID)
		{
			return It;
		}
	}

	return nullptr;
}

bool UOperatingSystemHDD::HasPartitionWithID(const FOperatingSystemUniqueId& TestID) const
{
	const auto TempPartition = FindPartitionByID(TestID);
	return IsValid(TempPartition);
}
