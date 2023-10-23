// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Widgets/Common/OperatingSystemProgramIconWidget.h"
#include "Programs/OperatingSystemBaseProgram.h"
#include "OperatingSystemTemplates.h"

UOperatingSystemProgramIconWidget::UOperatingSystemProgramIconWidget()
	: ParentProgram(nullptr)
{
}

UOperatingSystemProgramIconWidget* UOperatingSystemProgramIconWidget::CreateIconWidget(TWeakObjectPtr<UOperatingSystemBaseProgram> OwningProgram)
{
	check(OwningProgram.IsValid());

	const auto ProxyWidget = CreateFromSoftWidget(OwningProgram.Get(), OwningProgram->GetIconWidgetClass());
	ProxyWidget->ParentOS = OwningProgram->GetOperatingSystem();
	ProxyWidget->ParentProgram = OwningProgram;
	return ProxyWidget;
}

UOperatingSystemBaseProgram* UOperatingSystemProgramIconWidget::GetParentProgram() const
{
	return ParentProgram.Get();
}
