// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Misc/OperatingSystemStoreProgramsCollection.h"
#include "OperatingSystemMacros.h"

UOperatingSystemStoreProgramsCollection::UOperatingSystemStoreProgramsCollection()
	: StorePrograms({})
{
}

void UOperatingSystemStoreProgramsCollection::Validate(FGenericError& OutError)
{
	if (StorePrograms.IsEmpty())
	{
		OutError = MAKE_ERROR("ERR_STR_PRG_COLLECTION", "Store programs are missing.");
		return;
	}

	bool bHasNullEntry = false;
	for (const auto& It : StorePrograms)
	{
		if (It.Program.IsNull())
		{
			bHasNullEntry = true;
			break;
		}
	}

	if (bHasNullEntry)
	{
		OutError = MAKE_ERROR("ERR_STR_PRG_COLLECTION", "One or more entries in Store programs is null.");
	}
}

const TSet<TSoftClassPtr<UOperatingSystemBaseProgram>>& UOperatingSystemStoreProgramsCollection::GetProgramClasses() const
{
	ensureAlwaysMsgf(false, TEXT("GetProgramClasses should not be called on UOperatingSystemStoreProgramsCollection. Please call GetStorePrograms."));
	return Programs;
}
