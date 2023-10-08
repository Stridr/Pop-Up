// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Programs/OperatingSystemProgramData.h"
#include "Programs/OperatingSystemBaseProgram.h"

UOperatingSystemProgramData::UOperatingSystemProgramData()
	: ParentProgram(nullptr)
{
}

void UOperatingSystemProgramData::OnCreate()
{
	ParentProgram = Cast<UOperatingSystemBaseProgram>(ParentObject);
	ensure(ParentProgram.IsValid());
}
