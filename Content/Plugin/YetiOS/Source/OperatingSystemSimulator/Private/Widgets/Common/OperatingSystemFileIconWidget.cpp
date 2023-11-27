// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Widgets/Common/OperatingSystemFileIconWidget.h"
#include "OperatingSystemTemplates.h"
#include "Files/OperatingSystemFile.h"
#include "Interfaces/OperatingSystemExplorerInterface.h"

UOperatingSystemFileIconWidget::UOperatingSystemFileIconWidget()
	: ParentFile(nullptr)
{
}

UOperatingSystemFileIconWidget* UOperatingSystemFileIconWidget::CreateIconWidget(UOperatingSystemFile* OwningFile,
                                                                                 const TSoftClassPtr<UOperatingSystemFileIconWidget>& IconClass)
{
	const auto ProxyWidget = CreateFromSoftWidget(OwningFile, IconClass);
	ProxyWidget->ParentFile = OwningFile;
	ProxyWidget->ParentOS = OwningFile->GetExplorerInterface()->GetOperatingSystem();
	return ProxyWidget;
}
