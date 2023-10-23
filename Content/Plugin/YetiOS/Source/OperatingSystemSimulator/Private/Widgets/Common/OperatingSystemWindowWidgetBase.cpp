// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Widgets/Common/OperatingSystemWindowWidgetBase.h"
#include "OperatingSystemMacros.h"
#include "Core/OperatingSystem.h"

UOperatingSystemWindowWidgetBase::UOperatingSystemWindowWidgetBase()
	: ParentWindow(nullptr)
{
	IMPLEMENTED_IN_BP_LAMBDA();

	CHECK_IN_BP(UOperatingSystemWindowWidgetBase, OnSetWindow)
	CHECK_IN_BP(UOperatingSystemWindowWidgetBase, OnDestroyWidget)
}

FReply UOperatingSystemWindowWidgetBase::NativeOnMouseButtonDown(const FGeometry& InGeometry,
	const FPointerEvent& InMouseEvent)
{
	BringWindowToFront();
	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UOperatingSystemWindowWidgetBase::NativeOnAddedToFocusPath(const FFocusEvent& InFocusEvent)
{
	BringWindowToFront();
	Super::NativeOnAddedToFocusPath(InFocusEvent);
}

void UOperatingSystemWindowWidgetBase::OnDestroyWidget()
{
	if (bHasBlueprintOnDestroyWidget)
	{
		K2_OnDestroyWidget();
	}

	ParentWindow = nullptr;
}

void UOperatingSystemWindowWidgetBase::SetParentWindow(UDraggableWindow* NewWindow)
{
	ParentWindow = NewWindow;
	if (bHasBlueprintOnSetWindow)
	{
		K2_OnSetWindow();
	}
}

void UOperatingSystemWindowWidgetBase::BringWindowToFront() const
{
	ParentOS->BringWindowToFront(ParentWindow.Get());
}
