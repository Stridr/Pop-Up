// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Misc/OperatingSystemCmdCollection.h"
#include "OperatingSystemMacros.h"

UOperatingSystemCmdCollection::UOperatingSystemCmdCollection()
	: Commands({})
{
}

void UOperatingSystemCmdCollection::Validate(FGenericError& OutError) const
{
	if (Commands.IsEmpty())
	{
		OutError = MAKE_ERROR("ERR_CMD_COLLECTION", "Commands are missing.");
		return;
	}

	bool bHasNullEntry = false;
	for (const auto& It : Commands)
	{
		if (It.IsNull())
		{
			bHasNullEntry = true;
			break;
		}
	}

	if (bHasNullEntry)
	{
		OutError = MAKE_ERROR("ERR_CMD_COLLECTION", "One or more entries in Commands is null.");
	}
}

const TSet<TSoftClassPtr<UOperatingSystemTerminalCommand>>& UOperatingSystemCmdCollection::GetCommandClasses() const
{
	return Commands;
}
