// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Directories/OperatingSystemDir_Users.h"
#include "OperatingSystemTags.h"

#define LOCTEXT_NAMESPACE "OperatingSystemDirectory"

UOperatingSystemDir_Users::UOperatingSystemDir_Users()
{
	Name = LOCTEXT("UsersName", "Users");
	Tag = DirUsers_Tag;
}

#undef LOCTEXT_NAMESPACE
