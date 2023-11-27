// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Widgets/Common/OperatingSystemFileWidget.h"
#include "Files/OperatingSystemFile.h"
#include "OperatingSystemTemplates.h"
#include "Interfaces/OperatingSystemExplorerInterface.h"

UOperatingSystemFileWidget::UOperatingSystemFileWidget()
	: ParentFile(nullptr)
{
}

UOperatingSystemFileWidget* UOperatingSystemFileWidget::CreateFileWidget(UOperatingSystemFile* OwningFile, const TSoftClassPtr<UOperatingSystemFileWidget>& WidgetSoftClass)
{
	if (WidgetSoftClass.IsNull())
	{
		return nullptr;
	}

	const auto ProxyFileWidget = CreateFromSoftWidget(OwningFile, WidgetSoftClass);
	ProxyFileWidget->ParentFile = OwningFile;
	ProxyFileWidget->SetOperatingSystem(OwningFile->GetExplorerInterface()->GetOperatingSystem());
	return ProxyFileWidget;
}
