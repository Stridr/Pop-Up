// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "CommonUserWidget.h"
#include "OperatingSystemTypes.h"
#include "GameplayTagContainer.h"
#include "OperatingSystemWidget.generated.h"

class UOperatingSystem;
class UDraggableWindow;
class UOperatingSystemBaseProgram;

UCLASS(Abstract)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemWidget : public UCommonUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemWidget)
	TObjectPtr<UOperatingSystem> ParentOS;

	UPROPERTY(Transient)
	FGameplayTag CurrentTabTag;

public:

	UOperatingSystemWidget();

	UE_NODISCARD static UOperatingSystemWidget* CreateOperatingSystemWidget(UOperatingSystem* OS);

	void StartOS(const bool bIsInitialStartup);
	void ShowInitialStartupScreen();
	void ShowLogonScreen();
	void ShowDesktop();

	void PrepareToInstall();
	void FinishInstallation();

	void BeginRestartOS();
	void BeginShutdownOS();

	UDraggableWindow* CreateNewWindow(UOperatingSystemBaseProgram* Program);

	void ShowNotification(const FOperatingSystemNotification& NewNotification);
	void AllNotificationsCleared();

	void BringWindowToFront(UDraggableWindow* TargetWindow, const int32& NewZOrder);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemWidget, meta = (Categories = "OperatingSystem.Widget.OS"))
	void SwitchTab(const FGameplayTag Tag);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemWidget, meta = (Categories = "OperatingSystem.Widget.OS"))
	bool IsCurrentlyViewingDesktop() const;

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnPrepareInstallation)
	void K2_OnPrepareInstall();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnBeginInstallation)
	void K2_OnBeginInstall(const float& InstallationTime);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnFinishInstallation)
	void K2_OnFinishInstall();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnStartOS)
	void K2_OnStartOS(const bool bIsInitialStartup);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnInitialStartup)
	void K2_OnInitialStartup();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnShowLogonScreen)
	void K2_OnShowLogonScreen();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnShowDesktop)
	void K2_OnShowDesktop();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnBeginRestartOS)
	void K2_OnBeginRestartOS();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnBeginShutdownOS)
	void K2_OnBeginShutdownOS();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnCreateNewWindow)
	UDraggableWindow* K2_CreateNewWindow(UOperatingSystemBaseProgram* Program);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnSwitchTab)
	void K2_OnSwitchTab(const FGameplayTag& WidgetTag);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnBringWindowToFront)
	void K2_BringWindowToFront(UDraggableWindow* Window, const int32& NewZOrder);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnShowNotification)
	void K2_OnShowNotification(const FOperatingSystemNotification& NewNotification);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidget, DisplayName = OnClearAllNotification)
	void K2_OnClearAllNotification();
};
