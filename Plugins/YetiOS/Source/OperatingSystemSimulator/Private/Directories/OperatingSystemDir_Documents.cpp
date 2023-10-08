// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Directories/OperatingSystemDir_Documents.h"
#include "OperatingSystemTags.h"

#define LOCTEXT_NAMESPACE "OperatingSystemDirectory"

UOperatingSystemDir_Documents::UOperatingSystemDir_Documents()
{
	Name = LOCTEXT("DocumentsName", "Documents");
	Tag = DirDocuments_Tag;
}

#undef LOCTEXT_NAMESPACE
