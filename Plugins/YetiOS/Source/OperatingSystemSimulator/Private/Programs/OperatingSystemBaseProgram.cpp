// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Programs/OperatingSystemBaseProgram.h"
#include "OperatingSystemMacros.h"
#include "Core/OperatingSystem.h"
#include "Programs/OperatingSystemProgramSettings.h"
#include "OperatingSystemLogs.h"
#include "Widgets/Common/OperatingSystemProgramWidget.h"
#include "DraggableWindowUMG/DraggableWindow.h"
#include "Widgets/Common/OperatingSystemProgramIconWidget.h"
#include "Programs/OperatingSystemProgramData.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Files/OperatingSystemFile.h"
#include "Widgets/Common/OperatingSystemTaskbarButton.h"
#include "Runtime/Core/Public/Modules/ModuleManager.h"

DEFINE_OS_LOG(BaseProgram)

UOperatingSystemBaseProgram::UOperatingSystemBaseProgram()
	: Name(FText())
	, Identifier(NAME_None)
	, Version(1)
	, SupportedOperatingSystems(FGameplayTagContainer())
	, bRequireMinOperatingSystemVersion(false)
	, MinOperatingSystemVersion(1)
	, IconObject(nullptr)
	, SpaceRequiredInMB(0.f)
	, IconWidgetClass(nullptr)
	, WidgetClass(nullptr)
	, SaveMethod(EProgramSaveMethod::SaveOnExit)
	, SettingsClass(nullptr)
	, bAddToDesktop(true)
	, bCreateNotification(true)
	, bSingleInstanceOnly(true)
	, bCreateSettingsBeforeStarting(false)
	, bOverrideWindowSize(false)
	, OverrideWindowSize(FVector2D(640.f, 360.f))
	, OverrideWindowClass(nullptr)
	, bIsSystemInstalledProgram(false)
	, ProgramWidget(nullptr)
	, Settings(nullptr)
	, DataObj(nullptr)
	, ChildFile(nullptr)
	, ParentOS(nullptr)
	, ParentWindow(nullptr)
	, ProcessID(INVALID_PROCESS_ID)
	, ParentPartition(nullptr)
{
	// Common UI must be loaded because its loading phase is also set to Default and by the time
	// UOperatingSystemBaseProgram is constructed, Common UI is NOT loaded. So load it manually.
	FModuleManager::Get().LoadModuleChecked("CommonUI");
	
	static ConstructorHelpers::FClassFinder<UUserWidget> IconClassFinder(TEXT("/OperatingSystemSimulator/OperatingSystemContent/Shared/Blueprints/Widgets/Icons/WBP_ProgramIcon"));
	IconWidgetClass = IconClassFinder.Class;

	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> IconObjectFinder(TEXT("/OperatingSystemSimulator/OperatingSystemContent/Shared/Materials/MI_Icon_DefaultApp"));
	IconObject = IconObjectFinder.Object;

	static ConstructorHelpers::FClassFinder<UUserWidget> TaskbarClassFinder(TEXT("/OperatingSystemSimulator/OperatingSystemContent/Shared/Blueprints/Widgets/Common/WBP_TaskbarButton"));
	TaskbarButtonClass = TaskbarClassFinder.Class;

	IMPLEMENTED_IN_BP_LAMBDA();

	CHECK_IN_BP(UOperatingSystemBaseProgram, OnCreate)
	CHECK_IN_BP(UOperatingSystemBaseProgram, OnInstall)
	CHECK_IN_BP(UOperatingSystemBaseProgram, OnStart)
	CHECK_IN_BP(UOperatingSystemBaseProgram, OnClose)
	CHECK_IN_BP(UOperatingSystemBaseProgram, OnSettingsLoad)
	CHECK_IN_BP(UOperatingSystemBaseProgram, OnOpenFile)
}

UOperatingSystemBaseProgram* UOperatingSystemBaseProgram::CreateProgram(TWeakObjectPtr<UOperatingSystem> OwningOS,
	const TSoftClassPtr<UOperatingSystemBaseProgram>& ProgramClass, 
	FGenericError& OutError, 
	const bool bInstalledWithOS /*= false*/)
{
	if (!OwningOS.IsValid())
	{
		OutError = MAKE_ERROR("ERR_OS_NULL", "Failed to create program because given OS was not valid.");
		return nullptr;
	}

	if (ProgramClass.IsNull())
	{
		OutError = MAKE_ERROR("ERR_CLASS_NULL", "Failed to create program because Program Class was null.");
		OwningOS->AddNotification(OutError, EOperatingSystemNotificationCategory::Application);
		return nullptr;
	}

	auto ProxyProgram = NEW_SOFT_OBJ(UOperatingSystemBaseProgram, OwningOS.Get(), ProgramClass, Program);
	ProxyProgram->Internal_Validate(OutError);
	if (OutError.IsValid())
	{
		OwningOS->AddNotification(OutError, EOperatingSystemNotificationCategory::Application);
		ProxyProgram->MarkAsGarbage();
		ProxyProgram = nullptr;
		return nullptr;
	}

	// @TODO portable device support.
	ProxyProgram->IsCompatibleWithOS(OwningOS, OutError);
	if (OutError.IsValid())
	{
		OwningOS->AddNotification(OutError, EOperatingSystemNotificationCategory::Application);
		ProxyProgram->MarkAsGarbage();
		ProxyProgram = nullptr;
		return nullptr;
	}

	ProxyProgram->ParentOS = OwningOS;
	ProxyProgram->bIsSystemInstalledProgram = bInstalledWithOS;
	ProxyProgram->DataObj = UOperatingSystemDataObject::CreateDataObj<UOperatingSystemProgramData>(ProxyProgram, ProxyProgram->GetDataClass());

	if (ProxyProgram->bCreateSettingsBeforeStarting)
	{
		ProxyProgram->Internal_LoadProgramSettings(OutError);
		if (OutError.IsValid())
		{
			OwningOS->AddNotification(OutError, EOperatingSystemNotificationCategory::Application);
			ProxyProgram->MarkAsGarbage();
			ProxyProgram = nullptr;
			return nullptr;
		}
	}

	if (ProxyProgram->bHasBlueprintOnCreate)
	{
		ProxyProgram->K2_OnCreate();
	}

	OS_LOG(BaseProgram, FString::Printf(TEXT("%s created."), *ProxyProgram->Name.ToString()));
	return ProxyProgram;
}

UOperatingSystemBaseProgram* UOperatingSystemBaseProgram::StartProgram(FGenericError& OutError)
{
	OutError.Reset();
	if (bSingleInstanceOnly && IsRunning())
	{
		return ParentOS->GetRunningProgram(GetClass());
	}

	UOperatingSystemBaseProgram* ProxyProgram = CreateProgram(ParentOS, GetClass(), OutError, bIsSystemInstalledProgram); //IsRunning() ? CreateProgram(ParentOS, GetClass(), OutError, bIsSystemInstalledProgram) : this;

	ProxyProgram->ProcessID = ParentOS->AddRunningProgram(ProxyProgram, OutError);
	if (OutError.IsValid() || ProxyProgram->ProcessID == INVALID_PROCESS_ID)
	{
		ParentOS->AddNotification(OutError, EOperatingSystemNotificationCategory::Application);
		ProxyProgram->MarkAsGarbage();
		ProxyProgram = nullptr;
		return nullptr;
	}

	ProxyProgram->Internal_LoadProgramSettings(OutError);

	if (ProxyProgram->bHasBlueprintOnStart)
	{
		OutError = ProxyProgram->K2_OnStart();
		if (OutError.IsValid())
		{
			ParentOS->AddNotification(OutError, EOperatingSystemNotificationCategory::Application);
			ProxyProgram->MarkAsGarbage();
			ProxyProgram = nullptr;
			return nullptr;
		}
	}

	ProxyProgram->OnStart(OutError);
	if (OutError.IsValid())
	{
		ParentOS->AddNotification(OutError, EOperatingSystemNotificationCategory::Application);
		ProxyProgram->MarkAsGarbage();
		ProxyProgram = nullptr;
		return nullptr;
	}

	ProxyProgram->ProgramWidget = UOperatingSystemProgramWidget::CreateProgramWidget(ProxyProgram, OutError);
	if (OutError.IsValid())
	{
		ParentOS->AddNotification(OutError, EOperatingSystemNotificationCategory::Application);
		ProxyProgram->MarkAsGarbage();
		ProxyProgram = nullptr;
		return nullptr;
	}

	ProxyProgram->ParentWindow = ProxyProgram->ParentOS->CreateNewWindow(ProxyProgram);
	if (!IsValid(ProxyProgram->ParentWindow))
	{
		OutError = MAKE_ERROR("ERR_PROGRAM", FString::Printf(TEXT("%s failed to set a draggable window."), *ProxyProgram->Name.ToString()));
		ParentOS->AddNotification(OutError, EOperatingSystemNotificationCategory::Application);
		ProxyProgram->MarkAsGarbage();
		ProxyProgram = nullptr;
		return nullptr;
	}

	ProxyProgram->ProgramWidget->SetParentWindow(ProxyProgram->ParentWindow);
	ProxyProgram->ProgramWidget->BringWindowToFront();
	ProxyProgram->ProgramWidget->SetFile();
	ProxyProgram->TaskbarButton = UOperatingSystemTaskbarButton::CreateTaskbarButton(ProxyProgram);
	
	ParentOS->ProgramStarted(ProxyProgram);
	return ProxyProgram;
}

bool UOperatingSystemBaseProgram::IsRunning() const
{
	return ParentOS->IsProgramRunning(GetClass());
}

bool UOperatingSystemBaseProgram::CanAddToDesktop() const
{
	return bAddToDesktop && !IconWidgetClass.IsNull();
}

UOperatingSystem* UOperatingSystemBaseProgram::GetOperatingSystem() const
{
	return ParentOS.Get();
}

UOperatingSystemProgramIconWidget* UOperatingSystemBaseProgram::CreateIconWidget()
{
	if (IconWidgetClass.IsNull())
	{
		OS_LOG_ERROR(BaseProgram, FString::Printf(TEXT("Icon widget class is null for %s."), *Name.ToString()));
		return nullptr;
	}

	return UOperatingSystemProgramIconWidget::CreateIconWidget(this);
}

void UOperatingSystemBaseProgram::OpenFile(UOperatingSystemFile* TargetFile, FGenericError& OutError)
{
	ChildFile = TargetFile;
	ParentOS->BringWindowToFront(ParentWindow);
	ProgramWidget->OpenFile();
	if (bHasBlueprintOnOpenFile)
	{
		K2_OnOpenFile();
	}
}

void UOperatingSystemBaseProgram::CloseProgram(FGenericError& OutError)
{
	if (bHasBlueprintOnClose)
	{
		K2_OnClose();
	}

	OnClose(OutError);
	ProcessID = INVALID_PROCESS_ID;
	if (IsValid(ChildFile))
	{
		ChildFile->CloseFile();
		ChildFile->MarkAsGarbage();
		ChildFile = nullptr;
	}

	if (SaveMethod == EProgramSaveMethod::SaveOnExit || ((ParentOS->IsShuttingDown() || ParentOS->IsRestarting()) && SaveMethod == EProgramSaveMethod::SaveOnOperatingSystemShutdown))
	{
		UOperatingSystemProgramSettings::SaveSettings(this);
	}

	if (IsValid(ProgramWidget))
	{
		// @TODO set file widget to null
		ProgramWidget->DestroyOperatingSystemBaseWidget();
		ProgramWidget = nullptr;
	}

	if (IsValid(Settings) && (ParentOS->IsShuttingDown() || ParentOS->IsRestarting()))
	{
		Settings->MarkAsGarbage();
		Settings = nullptr;
	}

	ParentWindow->CloseWindow();
	ParentWindow = nullptr;

	ParentOS->OnProgramClosed.Broadcast(this);
}

UDraggableWindow* UOperatingSystemBaseProgram::GetParentWindow() const
{
	return ParentWindow;
}

void UOperatingSystemBaseProgram::Internal_LoadProgramSettings(FGenericError& OutError)
{
	if (IsValid(Settings))
	{
		Settings->MarkAsGarbage();
		Settings = nullptr;
	}

	Settings = UOperatingSystemProgramSettings::LoadSettings(this);
	if (IsValid(Settings))
	{
		OS_LOG_VERY_VERBOSE(BaseProgram, FString::Printf(TEXT("Loaded saved settings for %s."), *Name.ToString()));
		if (bHasBlueprintOnSettingsLoad)
		{
			K2_OnSettingsLoad();
		}
		return;
	}

	if (SaveMethod != EProgramSaveMethod::DoNotSave && !SettingsClass.IsNull())
	{
		Settings = UOperatingSystemProgramSettings::CreateSettings(this, SettingsClass, OutError);
	}
}

void UOperatingSystemBaseProgram::Internal_Validate(FGenericError& OutError) const
{
	if (Name.IsEmptyOrWhitespace())
	{
		OutError = MAKE_ERROR("ERR_PROGRAM", FString::Printf(TEXT("%s validation error: Missing name."), *GetClass()->GetName()));
		return;
	}

	if (Identifier.IsNone())
	{
		OutError = MAKE_ERROR("ERR_PROGRAM", FString::Printf(TEXT("%s validation error: Missing Identifier."), *GetClass()->GetName()));
		return;
	}

	if (!Version.IsValid())
	{
		OutError = MAKE_ERROR("ERR_PROGRAM", FString::Printf(TEXT("%s validation error: Version invalid."), *GetClass()->GetName()));
		return;
	}

	if (bRequireMinOperatingSystemVersion && !MinOperatingSystemVersion.IsValid())
	{
		OutError = MAKE_ERROR("ERR_PROGRAM", FString::Printf(TEXT("%s validation error: MinOperatingSystemVersion invalid."), *GetClass()->GetName()));
		return;
	}

	if (IconObject.IsNull())
	{
		OutError = MAKE_ERROR("ERR_PROGRAM", FString::Printf(TEXT("%s validation error: Missing icon."), *GetClass()->GetName()));
		return;
	}

	if (SpaceRequiredInMB < UE_KINDA_SMALL_NUMBER)
	{
		OutError = MAKE_ERROR("ERR_PROGRAM", FString::Printf(TEXT("%s validation error: Incorrect Space Required In MB setting."), *GetClass()->GetName()));
		return;
	}

	if (IconWidgetClass.IsNull())
	{
		OutError = MAKE_ERROR("ERR_PROGRAM", FString::Printf(TEXT("%s validation error: Missing icon widget class."), *GetClass()->GetName()));
		return;
	}

	if (WidgetClass.IsNull())
	{
		OutError = MAKE_ERROR("ERR_PROGRAM", FString::Printf(TEXT("%s validation error: Widget null."), *GetClass()->GetName()));
		return;
	}

	OnValidate(OutError);
}

void UOperatingSystemBaseProgram::IsCompatibleWithOS(const TWeakObjectPtr<const UOperatingSystem> TestOS, FGenericError& OutError) const
{
	if (!SupportedOperatingSystems.IsEmpty() && !SupportedOperatingSystems.HasTagExact(TestOS->GetOperatingSystemTag()))
	{
		OutError = MAKE_ERROR("ERR_OS_NOT_SUPPORTED", FString::Printf(TEXT("%s does not support %s"), *Name.ToString(), *TestOS->GetOperatingSystemName().ToString()));
	}
	else if (bRequireMinOperatingSystemVersion && MinOperatingSystemVersion < TestOS->GetOperatingSystemVersion())
	{
		OutError = MAKE_ERROR("ERR_VERSION_MISMATCH", FString::Printf(TEXT("%s is not compatible with Operting System version %s."), *Name.ToString(), *TestOS->GetOperatingSystemVersion().ToString()));
	}
}

bool UOperatingSystemBaseProgram::CanSaveSettings() const
{
	return IsValid(Settings) && SaveMethod != EProgramSaveMethod::DoNotSave;
}

void UOperatingSystemBaseProgram::SetParentPartition(TWeakObjectPtr<UOperatingSystemPartition> OwningPartition)
{
	ParentPartition = OwningPartition;
}

void UOperatingSystemBaseProgram::OnProgramWindowStateChanged(const EOperatingSystemProgramViewState& NewState)
{
	if (NewState == EOperatingSystemProgramViewState::Focused)
	{
		ProgramWidget->BringWindowToFront();
	}
	
	OnOperatingSystemProgramViewStateChanged.Broadcast(NewState);
}

TWeakObjectPtr<UOperatingSystemPartition> UOperatingSystemBaseProgram::GetParentPartition() const
{
	return ParentPartition;
}

TSoftClassPtr<UOperatingSystemProgramIconWidget> UOperatingSystemBaseProgram::GetIconWidgetClass() const
{
	return IconWidgetClass;
}

TSoftClassPtr<UOperatingSystemProgramWidget> UOperatingSystemBaseProgram::GetWidgetClass() const
{
	return WidgetClass;
}

TSoftClassPtr<UOperatingSystemProgramSettings> UOperatingSystemBaseProgram::GetSettingsClass() const
{
	return SettingsClass;
}

TSoftClassPtr<UOperatingSystemProgramData> UOperatingSystemBaseProgram::GetDataClass() const
{
	return DataClass;
}

TSoftClassPtr<UOperatingSystemTaskbarButton> UOperatingSystemBaseProgram::GetTaskbarButtonClass() const
{
	return TaskbarButtonClass;
}

TWeakObjectPtr<UOperatingSystemProgramSettings> UOperatingSystemBaseProgram::GetSettings() const
{
	return Settings;
}

TWeakObjectPtr<UOperatingSystemProgramData> UOperatingSystemBaseProgram::GetDataObj() const
{
	return DataObj;
}

TWeakObjectPtr<UOperatingSystemTaskbarButton> UOperatingSystemBaseProgram::GetTaskbarButton() const
{
	return TaskbarButton;
}
