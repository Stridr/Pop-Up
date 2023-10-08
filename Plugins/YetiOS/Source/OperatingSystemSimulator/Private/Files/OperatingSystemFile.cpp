// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Files/OperatingSystemFile.h"
#include "Interfaces/OperatingSystemExplorerInterface.h"
#include "OperatingSystemMacros.h"
#include "OperatingSystemLogs.h"
#include "Widgets/Common/OperatingSystemFileWidget.h"
#include "Core/OperatingSystem.h"
#include "Widgets/Common/OperatingSystemFileIconWidget.h"
#include "Programs/OperatingSystemBaseProgram.h"
#include "Runtime/Core/Public/Modules/ModuleManager.h"

DEFINE_OS_LOG(File)

UOperatingSystemFile::UOperatingSystemFile()
	: Name(FText())
	, Extension(FText())
	, IconObject(nullptr)
	, SpaceRequiredInMB(0.f)
	, bIsDeletable(true)
	, bIsMovable(true)
	, TargetProgramClass(nullptr)
	, IconWidgetClass(nullptr)
	, WidgetClass(nullptr)
	, ParentProgram(nullptr)
	, FileWidget(nullptr)
{
	// Common UI must be loaded because its loading phase is also set to Default and by the time
	// UOperatingSystemFile is constructed, Common UI is NOT loaded. So load it manually.
	FModuleManager::Get().LoadModuleChecked("CommonUI");
	
	IMPLEMENTED_IN_BP_LAMBDA();

	CHECK_IN_BP(UOperatingSystemFile, OnOpen);

	static ConstructorHelpers::FClassFinder<UUserWidget> IconClassFinder(TEXT("/OperatingSystemSimulator/OperatingSystemContent/Shared/Blueprints/Widgets/Icons/WBP_FileIcon"));
	IconWidgetClass = IconClassFinder.Class;
}

UOperatingSystemFile* UOperatingSystemFile::CreateFile(TScriptInterface<IOperatingSystemExplorerInterface> ExplorerInterface,
	const TSoftClassPtr<UOperatingSystemFile>& FileSoftClass, 
	FGenericError& OutError)
{
	if (!IsValid(ExplorerInterface.GetObject()))
	{
		OutError = MAKE_ERROR("ERR_FILE", "File requires valid directory or partition");
		return nullptr;
	}

	auto ProxyFile = NEW_SOFT_OBJ(UOperatingSystemFile, ExplorerInterface.GetObject(), FileSoftClass, File);
	ProxyFile->ParentExplorerInterface = ExplorerInterface;
	ProxyFile->Internal_Validate(OutError);
	if (OutError.IsValid())
	{
		ProxyFile->MarkAsGarbage();
		ProxyFile = nullptr;
		return nullptr;
	}

	if (ProxyFile->Extension.IsEmptyOrWhitespace())
	{
		OS_LOG_WARN(File, FString::Printf(TEXT("%s has no extension so using 'file' as extension."), *ProxyFile->Name.ToString()));
		ProxyFile->Extension = INVTEXT("file");
	}

	if (!ExplorerInterface->CanCreateNewFile())
	{
		OutError = MAKE_ERROR("ERR_FILE", FString::Printf(TEXT("Access denied. New files cannot be created in %s"), *ExplorerInterface->GetInterfaceDisplayName().ToString()));
		ProxyFile->MarkAsGarbage();
		ProxyFile = nullptr;
		return nullptr;
	}

	const auto& AllFiles = ExplorerInterface->GetAllFiles(ProxyFile->Extension.ToString());
	for (const auto& It : AllFiles)
	{
		if (ProxyFile->IsSameFile(It))
		{
			OutError = MAKE_ERROR("ERR_FILE_EXISTS", FString::Printf(TEXT("File %s already exists in %s."), *ProxyFile->GetFileName().ToString(), *ExplorerInterface->GetInterfaceDisplayName().ToString()));
			ProxyFile->MarkAsGarbage();
			ProxyFile = nullptr;
			return nullptr;
		}
	}

	if (!ExplorerInterface->HasEnoughSpace(ProxyFile->SpaceRequiredInMB))
	{
		OutError = MAKE_ERROR("ERR_FILE", FString::Printf(TEXT("Not enough space to create %s in %s."), *ProxyFile->GetFileName().ToString(), *ExplorerInterface->GetInterfaceDisplayName().ToString()));
		ProxyFile->MarkAsGarbage();
		ProxyFile = nullptr;
		return nullptr;
	}

	return ProxyFile;
}

UOperatingSystemFile* UOperatingSystemFile::CreateRuntimeFile(UOperatingSystemFile* ParentFile)
{
	check(ParentFile->HasAnyFlags(RF_Transient));
	const auto ProxyFile = NEW_OBJ(UOperatingSystemFile, ParentFile, ParentFile->GetClass(), RuntimeFile);
	ProxyFile->ParentExplorerInterface = ParentFile->GetExplorerInterface();
	return ProxyFile;
}

UOperatingSystemFileIconWidget* UOperatingSystemFile::CreateIconWidget()
{
	if (IconWidgetClass.IsNull())
	{
		OS_LOG_ERROR(File, FString::Printf(TEXT("Icon widget class is null for %s."), *Name.ToString()));
		return nullptr;
	}

	return UOperatingSystemFileIconWidget::CreateIconWidget(this, IconWidgetClass);
}

void UOperatingSystemFile::OpenFile(FGenericError& OutError)
{
	if (TargetProgramClass.IsNull())
	{
		OutError = MAKE_ERROR("ERR_OPEN_FILE", FString::Printf(TEXT("Target program not set for %s"), *GetFileName().ToString()));
		ParentExplorerInterface->GetOperatingSystem()->AddNotification(OutError, EOperatingSystemNotificationCategory::OperatingSystem);
		return;
	}

	ParentProgram = ParentExplorerInterface->GetOperatingSystem()->IsProgramInstalled(TargetProgramClass);
	if (!ParentProgram.IsValid())
	{
		OutError = MAKE_ERROR("ERR_OPEN_FILE", FString::Printf(TEXT("No compatible program installed for %s"), *GetFileName().ToString()));
		ParentExplorerInterface->GetOperatingSystem()->AddNotification(OutError, EOperatingSystemNotificationCategory::OperatingSystem);
		return;
	}
	
	FileWidget = UOperatingSystemFileWidget::CreateFileWidget(this, WidgetClass);
	ParentProgram = ParentProgram->StartProgram(OutError);
	
	if (OutError.IsValid())
	{
		ParentProgram.Reset();
		return;
	}

	ParentProgram->OpenFile(this, OutError);
	if (OutError.IsValid())
	{
		ParentProgram->GetOperatingSystem()->AddNotification(OutError, EOperatingSystemNotificationCategory::Application);
	}
	else
	{
		FileWidget->SetParentWindow(ParentProgram->GetParentWindow());

		if (bHasBlueprintOnOpen)
		{
			K2_OnOpen();
		}
	}
}

void UOperatingSystemFile::CloseFile()
{
	ParentProgram.Reset();
	if (IsValid(FileWidget))
	{
		FileWidget->RemoveFromParent();
		FileWidget = nullptr;
	}
}

FText UOperatingSystemFile::GetFileName(const bool bWithExtension /*= true*/) const
{
	return bWithExtension ? FText::FromString(FString::Printf(TEXT("%s.%s"), *Name.ToString(), *Extension.ToString())) : Name;
}

bool UOperatingSystemFile::IsSameFile(const UOperatingSystemFile* OtherFile) const
{
	return GetFileName(true).EqualToCaseIgnored(OtherFile->GetFileName(true));
}

void UOperatingSystemFile::Internal_Validate(FGenericError& OutError)
{
	if (Name.IsEmptyOrWhitespace())
	{
		OutError = MAKE_ERROR("ERR_FILE", FString::Printf(TEXT("%s validation error: Name cannot be empty"), *GetClass()->GetName()));
		return;
	}

	if (IconObject.IsNull())
	{
		OutError = MAKE_ERROR("ERR_FILE", FString::Printf(TEXT("%s validation error: Icon cannot be empty"), *GetClass()->GetName()));
		return;
	}

	if (SpaceRequiredInMB < 0.f)
	{
		OutError = MAKE_ERROR("ERR_FILE", FString::Printf(TEXT("%s validation error: Invalid space required setting"), *GetClass()->GetName()));
		return;
	}

	if (IconWidgetClass.IsNull())
	{
		OutError = MAKE_ERROR("ERR_FILE", FString::Printf(TEXT("%s validation error: Missing icon widget class."), *GetClass()->GetName()));
		return;
	}

	if (WidgetClass.IsNull())
	{
		OutError = MAKE_ERROR("ERR_FILE", FString::Printf(TEXT("%s validation error: Widget class null."), *GetClass()->GetName()));
		return;
	}

	OnValidate(OutError);
}
