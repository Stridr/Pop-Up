// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Misc/OperatingSystemProgramsCollection.h"
#include "OperatingSystemMacros.h"

UOperatingSystemProgramsCollection::UOperatingSystemProgramsCollection()
	: Programs({})
{
}

void UOperatingSystemProgramsCollection::Validate(FGenericError& OutError)
{
	if (Programs.IsEmpty())
	{
		OutError = MAKE_ERROR("ERR_PRG_COLLECTION", "Programs are missing.");
		return;
	}

	bool bHasNullEntry = false;
	for (const auto& It : Programs)
	{
		if (It.IsNull())
		{
			bHasNullEntry = true;
			break;
		}
	}

	if (bHasNullEntry)
	{
		OutError = MAKE_ERROR("ERR_PRG_COLLECTION", "One or more entries in Programs is null.");
	}
}

const TSet<TSoftClassPtr<UOperatingSystemBaseProgram>>& UOperatingSystemProgramsCollection::GetProgramClasses() const
{
	return Programs;
}
