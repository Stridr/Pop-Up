// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Widgets/OperatingSystemWidget.h"
#include "OperatingSystemTemplates.h"
#include "Core/OperatingSystem.h"
#include "DraggableWindowUMG/DraggableWindow.h"
#include "OperatingSystemTags.h"

UOperatingSystemWidget::UOperatingSystemWidget()
	: ParentOS(nullptr)
	, CurrentTabTag(InvalidTag)
{
}

UOperatingSystemWidget* UOperatingSystemWidget::CreateOperatingSystemWidget(UOperatingSystem* OS)
{
	const auto ProxyWidget = CreateFromSoftWidget(OS, OS->GetOperatingSystemWidgetClass());
	ProxyWidget->ParentOS = OS;
	return ProxyWidget;
}

void UOperatingSystemWidget::StartOS(const bool bIsInitialStartup)
{
	K2_OnStartOS(bIsInitialStartup);
	SwitchTab(OSWidget_Loading_Tag);
}

void UOperatingSystemWidget::ShowInitialStartupScreen()
{
	K2_OnInitialStartup();
	SwitchTab(OSWidget_InitialStartup_Tag);
}

void UOperatingSystemWidget::ShowLogonScreen()
{
	K2_OnShowLogonScreen();
	SwitchTab(OSWidget_Logon_Tag);
}

void UOperatingSystemWidget::ShowDesktop()
{
	K2_OnShowDesktop();
}

void UOperatingSystemWidget::PrepareToInstall()
{
	K2_OnPrepareInstall();
	SwitchTab(OSWidget_Installation_Tag);
}

void UOperatingSystemWidget::FinishInstallation()
{
	K2_OnFinishInstall();
}

void UOperatingSystemWidget::BeginRestartOS()
{
	K2_OnBeginRestartOS();
	SwitchTab(OSWidget_Restart_Tag);
}

void UOperatingSystemWidget::BeginShutdownOS()
{
	K2_OnBeginShutdownOS();
	SwitchTab(OSWidget_Shutdown_Tag);
}

UDraggableWindow* UOperatingSystemWidget::CreateNewWindow(UOperatingSystemBaseProgram* Program)
{
	return K2_CreateNewWindow(Program);
}

void UOperatingSystemWidget::ShowNotification(const FOperatingSystemNotification& NewNotification)
{
	K2_OnShowNotification(NewNotification);
}

void UOperatingSystemWidget::AllNotificationsCleared()
{
	K2_OnClearAllNotification();
}

void UOperatingSystemWidget::BringWindowToFront(UDraggableWindow* TargetWindow, const int32& NewZOrder)
{
	K2_BringWindowToFront(TargetWindow, NewZOrder);
}

void UOperatingSystemWidget::SwitchTab(const FGameplayTag Tag)
{
	if (CurrentTabTag != Tag)
	{
		CurrentTabTag = Tag;
		K2_OnSwitchTab(Tag);
		if (CurrentTabTag == OSWidget_Desktop_Tag)
		{
			ShowDesktop();
		}
	}
}

bool UOperatingSystemWidget::IsCurrentlyViewingDesktop() const
{
	return CurrentTabTag == OSWidget_Desktop_Tag;
}
