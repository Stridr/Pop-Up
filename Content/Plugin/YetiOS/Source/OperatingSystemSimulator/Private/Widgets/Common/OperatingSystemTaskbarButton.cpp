// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Widgets/Common/OperatingSystemTaskbarButton.h"
#include "OperatingSystemTemplates.h"
#include "Core/OperatingSystem.h"
#include "Programs/OperatingSystemBaseProgram.h"

UOperatingSystemTaskbarButton::UOperatingSystemTaskbarButton()
	: CurrentState(EOperatingSystemProgramViewState::None)
{
}

UOperatingSystemTaskbarButton* UOperatingSystemTaskbarButton::CreateTaskbarButton(UOperatingSystemBaseProgram* OwningProgram)
{
	if (OwningProgram->GetTaskbarButtonClass().IsNull())
	{
		return nullptr;
	}
	
	const auto ProxyButton = CreateFromSoftWidget(OwningProgram, OwningProgram->GetTaskbarButtonClass());
	ProxyButton->SetOperatingSystem(OwningProgram->GetOperatingSystem());
	ProxyButton->ParentProgram = OwningProgram;
	ProxyButton->K2_OnCreated();
	ProxyButton->ChangeTaskbarState(EOperatingSystemProgramViewState::Focused);
	return ProxyButton;
}

bool UOperatingSystemTaskbarButton::ChangeTaskbarState(const EOperatingSystemProgramViewState NewState)
{
	if (CurrentState != NewState)
	{
		CurrentState = NewState;
		ParentProgram->OnProgramWindowStateChanged(CurrentState);
		return true;
	}

	return false;
}

void UOperatingSystemTaskbarButton::ToggleState()
{
	if (CurrentState == EOperatingSystemProgramViewState::Focused || CurrentState == EOperatingSystemProgramViewState::NotFocused)
	{
		ParentOS->MinimizeProgram(ParentProgram.Get());
		return;
	}

	ParentOS->RestoreMinimizedProgram(ParentProgram.Get());
}
