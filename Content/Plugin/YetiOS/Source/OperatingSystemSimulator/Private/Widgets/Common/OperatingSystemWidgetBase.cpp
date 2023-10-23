// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Widgets/Common/OperatingSystemWidgetBase.h"
#include "Core/OperatingSystem.h"
#include "DraggableWindowUMG/DraggableWindow.h"
#include "OperatingSystemMacros.h"

UOperatingSystemWidgetBase::UOperatingSystemWidgetBase()
	: ParentOS(nullptr)
{
	IMPLEMENTED_IN_BP_LAMBDA();

	CHECK_IN_BP(UOperatingSystemWidgetBase, OnSetOperatingSystem)
}

void UOperatingSystemWidgetBase::SetOperatingSystem(UOperatingSystem* NewOS)
{
	if (ParentOS != NewOS)
	{
		ParentOS = NewOS;
		if (bHasBlueprintOnSetOperatingSystem)
		{
			K2_OnSetOperatingSystem();
		}
	}
}

void UOperatingSystemWidgetBase::DestroyOperatingSystemBaseWidget()
{
	OnDestroyWidget();
	ParentOS = nullptr;
	RemoveFromParent();
}

void UOperatingSystemWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();
	if (IsValid(ParentOS))
	{
		SetOperatingSystem(ParentOS);
	}
}
