// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Directories/OperatingSystemDir_Downloads.h"
#include "OperatingSystemTags.h"

#define LOCTEXT_NAMESPACE "OperatingSystemDirectory"

UOperatingSystemDir_Downloads::UOperatingSystemDir_Downloads()
{
	Name = LOCTEXT("DownloadsName", "Downloads");
	Tag = DirDownloads_Tag;
}

#undef LOCTEXT_NAMESPACE
