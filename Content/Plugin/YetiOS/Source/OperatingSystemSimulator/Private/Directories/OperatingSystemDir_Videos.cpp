// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Directories/OperatingSystemDir_Videos.h"
#include "OperatingSystemTags.h"

#define LOCTEXT_NAMESPACE "OperatingSystemDirectory"

UOperatingSystemDir_Videos::UOperatingSystemDir_Videos()
{
	Name = LOCTEXT("VideosName", "Videos");
	Tag = DirVideos_Tag;
}

#undef LOCTEXT_NAMESPACE
