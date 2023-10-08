// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Widgets/OperatingSystemBsodWidget.h"
#include "Core/OperatingSystem.h"
#include "OperatingSystemTemplates.h"

UOperatingSystemBsodWidget* UOperatingSystemBsodWidget::CreateBsodWidget(UOperatingSystem* OwningOS)
{
	const auto ProxyWidget = CreateFromSoftWidget(OwningOS, OwningOS->GetBsodWidgetClass());
	ProxyWidget->ParentOS = OwningOS;

	return ProxyWidget;
}

void UOperatingSystemBsodWidget::SetError(const FGenericError& NewError)
{
	BsodError = NewError;
}

void UOperatingSystemBsodWidget::UpdateProgress(const float ProgressPercentage)
{
	K2_OnProgressChanged(ProgressPercentage);
}
