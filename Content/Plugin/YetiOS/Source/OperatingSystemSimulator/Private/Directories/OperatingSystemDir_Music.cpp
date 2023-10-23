// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Directories/OperatingSystemDir_Music.h"
#include "OperatingSystemTags.h"

#define LOCTEXT_NAMESPACE "OperatingSystemDirectory"

UOperatingSystemDir_Music::UOperatingSystemDir_Music()
{
	Name = LOCTEXT("MusicName", "Music");
	Tag = DirMusic_Tag;
}

#undef LOCTEXT_NAMESPACE
