// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Widgets/Common/OperatingSystemProgramWidget.h"
#include "Programs/OperatingSystemBaseProgram.h"
#include "OperatingSystemMacros.h"
#include "OperatingSystemTemplates.h"
#include "Core/OperatingSystem.h"

UOperatingSystemProgramWidget::UOperatingSystemProgramWidget()
	: ParentProgram(nullptr)
{
	IMPLEMENTED_IN_BP_LAMBDA();

	CHECK_IN_BP(UOperatingSystemProgramWidget, OnSetFile);
	CHECK_IN_BP(UOperatingSystemProgramWidget, OnOpenFile);
}

UOperatingSystemProgramWidget* UOperatingSystemProgramWidget::CreateProgramWidget(const TWeakObjectPtr<UOperatingSystemBaseProgram> TargetProgram, FGenericError& OutError)
{
	check(TargetProgram.IsValid());
	if (TargetProgram->GetWidgetClass().IsNull())
	{
		OutError = MAKE_ERROR("ERR_PROGRAM_WIDGET", FString::Printf(TEXT("Widget class missing for %s"), *TargetProgram->GetProgramName()));
		return nullptr;
	}

	const auto ProxyWidget = CreateFromSoftWidget(TargetProgram.Get(), TargetProgram->GetWidgetClass());
	ProxyWidget->SetOperatingSystem(TargetProgram->GetOperatingSystem());
	ProxyWidget->ParentProgram = TargetProgram.Get();
	ensureMsgf(IsValid(ProxyWidget->ParentOS), TEXT("Parent OS not valid for %s. Expect crash or undefined behavior."), *ProxyWidget->GetName());
	return ProxyWidget;
}

void UOperatingSystemProgramWidget::SetFile()
{
	if (bHasBlueprintOnSetFile)
	{
		K2_OnSetFile();
	}
}

void UOperatingSystemProgramWidget::OpenFile()
{
	if (bHasBlueprintOnOpenFile)
	{
		K2_OnOpenFile();
	}
}
