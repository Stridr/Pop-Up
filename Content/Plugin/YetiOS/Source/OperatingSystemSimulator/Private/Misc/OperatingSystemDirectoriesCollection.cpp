// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Misc/OperatingSystemDirectoriesCollection.h"
#include "OperatingSystemMacros.h"
#include "Core/OperatingSystemDirectory.h"

UOperatingSystemDirectoriesCollection::UOperatingSystemDirectoriesCollection()
	: Directories({})
{
}

void UOperatingSystemDirectoriesCollection::Validate(FGenericError& OutError)
{
	if (Directories.IsEmpty())
	{
		OutError = MAKE_ERROR("ERR_DIR_COLLECTION", "Directories are missing.");
		return;
	}

	bool bHasNullEntry = false;
	for (const auto& It : Directories)
	{
		if (It.IsNull())
		{
			bHasNullEntry = true;
			break;
		}
	}

	if (bHasNullEntry)
	{
		OutError = MAKE_ERROR("ERR_DIR_COLLECTION", "One or more entries in Directories is null.");
	}
}

bool UOperatingSystemDirectoriesCollection::HasDirectoryWithTag(const FGameplayTag& TestTag, const bool bRecursive) const
{
	for (const auto& It : Directories)
	{
		if (It.IsNull())
		{
			continue;
		}

		const auto ObjClass = It.LoadSynchronous();
		const auto DefaultDir = ObjClass->GetDefaultObject<UOperatingSystemDirectory>();
		if (DefaultDir->CheckForDirectoryWithTag(TestTag, bRecursive))
		{
			return true;
		}
	}

	return false;
}

const TSet<TSoftClassPtr<UOperatingSystemDirectory>>& UOperatingSystemDirectoriesCollection::GetDirectories() const
{
	return Directories;
}
