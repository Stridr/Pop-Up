// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Directories/OperatingSystemDir_Desktop.h"
#include "OperatingSystemTags.h"

#define LOCTEXT_NAMESPACE "OperatingSystemDirectory"

UOperatingSystemDir_Desktop::UOperatingSystemDir_Desktop()
{
	Name = LOCTEXT("DesktopName", "Desktop");
	Tag = DirDesktop_Tag;
}

#undef LOCTEXT_NAMESPACE
