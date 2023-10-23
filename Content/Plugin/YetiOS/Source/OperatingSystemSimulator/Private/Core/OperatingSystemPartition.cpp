// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Core/OperatingSystemPartition.h"
#include "OperatingSystemTypes.h"
#include "Hardware/OperatingSystemHDD.h"
#include "OperatingSystemMacros.h"
#include "Core/OperatingSystemDirectory.h"
#include "Global/OperatingSystemStatics.h"
#include "Core/OperatingSystem.h"
#include "Files/OperatingSystemFile.h"

UOperatingSystemPartition::UOperatingSystemPartition()
	: DiskName(FText())
	, DiskDisplayName(FText())
	, TotalSizeInBytes(0)
	, FreeSpaceInBytes(0)
	, bIsSystemPartition(false)
	, PartitionID(FOperatingSystemUniqueId())
	, ParentHDD(nullptr)
	, ParentOS(nullptr)
{

}

UOperatingSystemPartition* UOperatingSystemPartition::CreateNewPartition(UOperatingSystemHDD* OwningHDD, const double& SizeInBytes, FGenericError& OutError)
{
	if (!IsValid(OwningHDD))
	{
		OutError = MAKE_ERROR("ERR_PARTITION", "HDD null when creating partition.");
		return nullptr;
	}

	if (SizeInBytes < UE_KINDA_SMALL_NUMBER)
	{
		OutError = MAKE_ERROR("ERR_PARTITION", "New partition size in bytes is too small.");
		return nullptr;
	}

	const auto ProxyPartition = NEW_OBJ(UOperatingSystemPartition, OwningHDD, UOperatingSystemPartition::StaticClass(), Partition);
	ProxyPartition->TotalSizeInBytes = SizeInBytes;
	ProxyPartition->FreeSpaceInBytes = SizeInBytes;
	ProxyPartition->ParentHDD = OwningHDD;
	ProxyPartition->PartitionID = FOperatingSystemUniqueId::GenerateNewId();
	return ProxyPartition;
}

UOperatingSystemPartition* UOperatingSystemPartition::LoadNewPartition(UOperatingSystemHDD* OwningHDD, const FOperatingSystemPartitionSaveLoad& PartitionSaveLoad)
{
	auto ProxyPartition = OwningHDD->FindPartitionByID(PartitionSaveLoad.SaveLoad_PartitionID);
	if (!IsValid(ProxyPartition))
	{
		ProxyPartition = NEW_OBJ(UOperatingSystemPartition, OwningHDD, UOperatingSystemPartition::StaticClass(), Partition);
	}
	
	ProxyPartition->TotalSizeInBytes = PartitionSaveLoad.SaveLoad_TotalSizeInBytes;
	ProxyPartition->FreeSpaceInBytes = PartitionSaveLoad.SaveLoad_FreeSpaceInBytes;
	ProxyPartition->DiskName = FText::FromString(PartitionSaveLoad.SaveLoad_DiskName);
	ProxyPartition->bIsSystemPartition = PartitionSaveLoad.bSaveLoad_IsSystemPartition;
	ProxyPartition->PartitionID = PartitionSaveLoad.SaveLoad_PartitionID;
	ProxyPartition->ParentHDD = OwningHDD;
	return ProxyPartition;
}

void UOperatingSystemPartition::SetDiskName(const FString& NewDiskName)
{
	DiskName = FText::FromString(NewDiskName);
}

void UOperatingSystemPartition::SetSystemPartition(const bool bNewSystemPartition)
{
	bIsSystemPartition = bNewSystemPartition;
}

void UOperatingSystemPartition::SetOwningOperatingSystem(UOperatingSystem* OwningOS)
{
	ParentOS = OwningOS;
}

void UOperatingSystemPartition::AddDirectories(const TArray<UOperatingSystemDirectory*>& NewDirectories, const bool bAppend /*= false*/)
{
	if (!bAppend)
	{
		for (auto& It : Directories)
		{
			It->MarkAsGarbage();
			It = nullptr;
		}

		Directories.Reset();
		Directories = NewDirectories;
		return;
	}

	Directories.Append(NewDirectories);
}

void UOperatingSystemPartition::AddDirectory(UOperatingSystemDirectory* NewDirectory)
{
	AddDirectories({ NewDirectory }, true);
}

void UOperatingSystemPartition::ConsumeSpace(const double& SizeInBytes, FGenericError& OutError)
{
	if (!HasEnoughSpace(SizeInBytes))
	{
		OutError = MAKE_ERROR("ERR_STORAGE", "Not enough space.");
		return;
	}

	FreeSpaceInBytes -= SizeInBytes;
	if (FreeSpaceInBytes < UE_KINDA_SMALL_NUMBER)
	{
		FreeSpaceInBytes = 0;
	}
}

void UOperatingSystemPartition::FreeupSpace(const double& SizeInBytes)
{
	FreeSpaceInBytes += SizeInBytes;
	if (FreeSpaceInBytes > TotalSizeInBytes)
	{
		FreeSpaceInBytes = TotalSizeInBytes;
	}
}

FText UOperatingSystemPartition::GetSizeAsText(const EOperatingSystemSizeMethod& SizeMethod) const
{
	auto HddRemainingSize = FreeSpaceInBytes;
	FString SizeString = "B";
	switch (SizeMethod)
	{
	case EOperatingSystemSizeMethod::MB:
		HddRemainingSize = FOperatingSystemSizeInMB::GetValue(TotalSizeInBytes);
		SizeString = "MB";
		break;
	case EOperatingSystemSizeMethod::GB:
		HddRemainingSize = FOperatingSystemSizeInGB::GetValue(TotalSizeInBytes);
		SizeString = "GB";
		break;
	default:
		break;
	}

	FFormatNamedArguments Args;
	Args.Add("Size", HddRemainingSize);
	Args.Add("SizeString", FText::FromString(SizeString));
	return FText::Format(INVTEXT("{Size} {SizeString}"), Args);
}

bool UOperatingSystemPartition::FindDirectoryByTag(const FGameplayTag DirectoryTag, const bool bRecursive, UOperatingSystemDirectory*& OutDirectory) const
{
	OutDirectory = nullptr;
	if (!UOperatingSystemStatics::IsOperatingSystemTagValid(DirectoryTag))
	{
		return false;
	}

	for (const auto& It : Directories)
	{
		if (It->GetDirectoryTag() == DirectoryTag)
		{
			OutDirectory = It;
			break;
		}
		else if (bRecursive)
		{
			const auto& ChildDirs = It->GetChildDirectories();
			for (const auto& ChildDir : ChildDirs)
			{
				if (ChildDir->FindDirectoryByTag(DirectoryTag, bRecursive, OutDirectory))
				{
					return true;
				}
			}
		}
	}

	return IsValid(OutDirectory);
}

TScriptInterface<IOperatingSystemExplorerInterface> UOperatingSystemPartition::GetChildDirectory(const FString& TargetChildDirectoryName, const bool bRecursive /*= true*/) const
{
	if (TargetChildDirectoryName.IsEmpty())
	{
		return nullptr;
	}

	// First check child directories instead of iterating their child if recursive is true.
	for (const auto& ChildDir : Directories)
	{
		if (ChildDir->GetDirectoryName().ToString() == TargetChildDirectoryName)
		{
			return ChildDir.Get();
		}
	}

	if (bRecursive)
	{
		for (const auto& ChildDir : Directories)
		{
			if (const auto GrandChildDir = ChildDir->GetChildDirectory(TargetChildDirectoryName, true))
			{
				return GrandChildDir;
			}
		}
	}

	return nullptr;
}

TArray<UOperatingSystemFile*> UOperatingSystemPartition::GetAllFiles(const FString& WithExtension /*= "*"*/) const
{
	if (WithExtension == "*" || WithExtension.IsEmpty() || WithExtension == ".")
	{
		return Files;
	}

	TArray<UOperatingSystemFile*> FilteredFiles;
	for (const auto& It : Files)
	{
		if (It->GetExtension().ToString() == WithExtension)
		{
			FilteredFiles.Emplace(It);
		}
	}

	return FilteredFiles;
}

TScriptInterface<IOperatingSystemExplorerInterface> UOperatingSystemPartition::GetInterfaceFromPath(const FString& NewPath) const
{
	if (!NewPath.IsEmpty())
	{
		if (NewPath == GetPartitionPath())
		{
			return const_cast<UOperatingSystemPartition*>(this);
		}

		if (NewPath == "..")
		{
			return nullptr;
		}

		TArray<FString> OutPaths;
		NewPath.ParseIntoArray(OutPaths, *UOperatingSystemStatics::GetPathDelimiter(ParentOS.Get()));
		if (OutPaths.IsEmpty())
		{
			return nullptr;
		}

		if (OutPaths[0].EndsWith(":"))
		{
			const auto TargetDiskLetter = OutPaths[0].Replace(TEXT(":"), TEXT(""));
			const auto TargetPartition = ParentOS->FindPartitionFromLetter(*TargetDiskLetter);
			if (ensureMsgf(IsValid(TargetPartition), TEXT("Target Partition is null. This should never happen.")))
			{
				OutPaths.RemoveAt(0);
				if (OutPaths.IsEmpty())
				{
					return TargetPartition;
				}

				if (OutPaths.Num() == 1)
				{
					return TargetPartition->GetChildDirectory(OutPaths[0], false);
				}

				const int32 ArrayLength = OutPaths.Num() - 1;
				TScriptInterface<IOperatingSystemExplorerInterface> CurrentInterface = TargetPartition;
				for (int32 i = 0; i < ArrayLength; ++i)
				{
					CurrentInterface = CurrentInterface->GetChildDirectory(OutPaths[i], false);
					if (CurrentInterface.GetObject() == nullptr)
					{
						return nullptr;
					}
				}

				return CurrentInterface->GetChildDirectory(OutPaths.Last(), false);
			}
		}
		else
		{
			TScriptInterface<IOperatingSystemExplorerInterface> CurrentInterface = const_cast<UOperatingSystemPartition*>(this);
			if (OutPaths.Num() == 1)
			{
				return CurrentInterface->GetChildDirectory(OutPaths[0], false);
			}

			const int32 ArrayLength = OutPaths.Num() - 1;
			for (int32 i = 0; i < ArrayLength; ++i)
			{
				CurrentInterface = CurrentInterface->GetChildDirectory(OutPaths[i], false);
				if (CurrentInterface.GetObject() == nullptr)
				{
					return nullptr;
				}
			}

			return CurrentInterface->GetChildDirectory(OutPaths.Last(), false);
		}
	}

	return nullptr;
}

void UOperatingSystemPartition::SetDiskLetter(const FName& NewDiskLetter)
{
	DiskLetter = NewDiskLetter;
}

void UOperatingSystemPartition::SetDiskDisplayName(const FText& NewName)
{
	DiskDisplayName = NewName;
}

FString UOperatingSystemPartition::GetPartitionPath() const
{
	return FString::Printf(TEXT("%s:%s"), *DiskLetter.ToString(), *UOperatingSystemStatics::GetPathDelimiter(ParentOS.Get()));
}

bool UOperatingSystemPartition::HasEnoughSpace(const FOperatingSystemSizeInMB& TestSpace) const
{
	return ParentOS->HasEnoughSpace(TestSpace.SizeInBytes, this);
}

UOperatingSystem* UOperatingSystemPartition::GetOperatingSystem() const
{
	return ParentOS.Get();
}
