// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Directories/OperatingSystemDir_Pictures.h"
#include "OperatingSystemTags.h"

#define LOCTEXT_NAMESPACE "OperatingSystemDirectory"

UOperatingSystemDir_Pictures::UOperatingSystemDir_Pictures()
{
	Name = LOCTEXT("PicturesName", "Pictures");
	Tag = DirPictures_Tag;
}

#undef LOCTEXT_NAMESPACE
