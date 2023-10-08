// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Core/OperatingSystem.h"
#include "Widgets/OperatingSystemWidget.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "OperatingSystemMacros.h"
#include "Widgets/OperatingSystemBsodWidget.h"
#include "Hardware/OperatingSystemHDD.h"
#include "Core/OperatingSystemPartition.h"
#include "OperatingSystemLogs.h"
#include "Global/OperatingSystemSaveGame.h"
#include "Programs/OperatingSystemBaseProgram.h"
#include "Misc/OperatingSystemProgramsCollection.h"
#include "Misc/OperatingSystemDirectoriesCollection.h"
#include "UObject/ConstructorHelpers.h"
#include "Core/OperatingSystemDirectory.h"
#include "DraggableWindowUMG/DraggableWindow.h"
#include "UObject/ConstructorHelpers.h"
#include "TimerManager.h"
#include "Global/OperatingSystemStatics.h"
#include "Kismet/GameplayStatics.h"
#include "Widgets/Common/OperatingSystemTaskbarButton.h"
#include "Misc/PackageName.h"
#include "Sound/SoundBase.h"
#include "Runtime/Core/Public/Modules/ModuleManager.h"

DEFINE_OS_LOG(OS);

#define LOG_WITH_NAME(Msg)		OS_LOG(OS, FString::Printf(TEXT("%s - %s."), *Name.ToString(), *FString(Msg)));
#define LOG_VV(Msg)				OS_LOG_VERY_VERBOSE(OS, FString::Printf(TEXT("%s - %s."), *Name.ToString(), *FString(Msg)));

static constexpr const int32 MIN_PID_VALUE = 100;
static constexpr const int32 MAX_PID_VALUE = 99999;

UOperatingSystem::UOperatingSystem()
	: Name(FText())
	, CompanyName(FText())
	, Version(FVersion(1))
	, Icon(nullptr)
	, InstallationSpace(0.f)
	, SupportedDevices(FGameplayTagContainer())
	, MustHavePrograms(nullptr)
	, PostInstallStartupPrograms(nullptr)
	, DefaultDirectories(nullptr)
	, WidgetClass(nullptr)
	, BsodWidgetClass(nullptr)
	, NotificationSettings({})
	, InstallationTime({40.f, 90.f})
	, LoadingTime({4.f, 8.f})
	, LoadingTimeInitial({12, 24.f})
	, LogonToDesktopTime({1.25, 3.f})
	, BsodOnScreenTime({2.f, 7.f})
	, OperatingSystemTag(InvalidTag)
	, Users({})
	, ParentDevice(nullptr)
	, OperatingSystemWidget(nullptr)
	, RunningPrograms({})
	, InstalledPrograms({})
	, CurrentUser(FOperatingSystemUser())
	, bIsPreInstalled(false)
	, bIsStartingForTheTime(true)
	, TotalNotifications(0)
	, TotalErrorNotifications(0)
	, TotalWarningNotifications(0)
	, BSODWidget(nullptr)
	, TargetPartitionID(FOperatingSystemUniqueId())
	, LastBroughtToFrontWindow(nullptr)
	, bInstallStartupPrograms(true)
	, NotificationManagerPtr(nullptr)
	, LastWindowZOrder(1)
{
	// Common UI must be loaded for widgets because its loading phase is also set to Default and by the time
	// UOperatingSystem is constructed, Common UI is NOT loaded. So load it manually.
	FModuleManager::Get().LoadModuleChecked("CommonUI");
	
	IMPLEMENTED_IN_BP_LAMBDA();

	CHECK_IN_BP(UOperatingSystem, CanStartOperatingSystem);

	static ConstructorHelpers::FObjectFinder<UTexture2D> OtherDirObj(TEXT("Texture2D'/OperatingSystemSimulator/OperatingSystemContent/Shared/Textures/Directories/T_UI_Dir.T_UI_Dir'"));
	DirectoryIcons.Add(DirOther_Tag, OtherDirObj.Object);
	DirectoryIcons.Add(DirUsers_Tag, OtherDirObj.Object);

#define SET_ICON(Name) static ConstructorHelpers::FObjectFinder<UTexture2D> Name##DirObj(*FString::Printf(TEXT("Texture2D'/OperatingSystemSimulator/OperatingSystemContent/Shared/Textures/Directories/T_UI_Dir_%s'"), *FString(PREPROCESSOR_TO_STRING(Name)))); \
DirectoryIcons.Add(Dir##Name##_Tag, Name##DirObj.Object)

	SET_ICON(Desktop);
	SET_ICON(Documents);
	SET_ICON(Downloads);
	SET_ICON(Home);
	SET_ICON(Music);
	SET_ICON(Pictures);
	SET_ICON(Videos);

#undef SET_ICON
}

UOperatingSystem* UOperatingSystem::CreateOperatingSystem(UOperatingSystemBaseDevice* OwningDevice, FGenericError& OutError)
{
	const auto OsClass = OwningDevice->GetOperatingSystemClass();
	if (OsClass.IsNull())
	{
		const FString ErrMsg = FString::Printf(TEXT("%s - Operating System missing."), *OwningDevice->GetDeviceName().ToString());
		OutError = MAKE_ERROR("ERR_OS_CLASS_NULL", ErrMsg);
		OS_LOG(OS, ErrMsg);
		return nullptr;
	}

	UOperatingSystem* ProxyOS = NEW_SOFT_OBJ(UOperatingSystem, OwningDevice, OsClass, OS);
	ProxyOS->ParentDevice = OwningDevice;
	ProxyOS->bIsPreInstalled = OwningDevice->IsOperatingSystemPreInstalled();
	ProxyOS->BSODWidget = UOperatingSystemBsodWidget::CreateBsodWidget(ProxyOS);
	ProxyOS->Internal_Validate(OutError);

	if (OutError.IsValid())
	{
		OS_LOG_ERROR(OS, OutError.ErrorExceptionDescription.ToString());
		ProxyOS->MarkAsGarbage();
		ProxyOS = nullptr;
		return nullptr;
	}

	ProxyOS->OperatingSystemWidget = UOperatingSystemWidget::CreateOperatingSystemWidget(ProxyOS);

	return ProxyOS;
}

FString UOperatingSystem::GetOperatingSystemUniqueID(const UOperatingSystem* TestOperatingSystem)
{
	check(IsValid(TestOperatingSystem));
	const auto ObjPath = FSoftObjectPath(TestOperatingSystem->GetClass());
	return FPackageName::ObjectPathToPackageName(ObjPath.ToString());
}

bool UOperatingSystem::AddNotification(const FOperatingSystemNotification& NewNotification)
{
	if (!NotificationSettings.bEnableNotifications)
	{
		return false;
	}
	
	Internal_CreateNotificationManager();
	if (NotificationManagerPtr->LogNotification(NewNotification))
	{
		TotalNotifications++;

		if (NewNotification.IsError())
		{
			TotalErrorNotifications++;
			if (NotificationSettings.bPlayNotificationSound)
			{
				UGameplayStatics::PlaySound2D(this, NotificationSettings.NotificationSoundError.LoadSynchronous());
			}
		}
		else if (NewNotification.IsWarning())
		{
			TotalWarningNotifications++;
			if (NotificationSettings.bPlayNotificationSound)
			{
				UGameplayStatics::PlaySound2D(this, NotificationSettings.NotificationSoundWarning.LoadSynchronous());
			}
		}
		else if (NotificationSettings.bPlayNotificationSound)
		{
			UGameplayStatics::PlaySound2D(this, NotificationSettings.NotificationSoundDefault.LoadSynchronous());
		}

		return true;
	}

	return false;
}

bool UOperatingSystem::AddNotification(const FGenericError& GenericError, 
	const EOperatingSystemNotificationCategory& Category, 
	const EOperatingSystemNotificationType Verbosity /*= EOperatingSystemNotificationType::Error*/)
{
	FOperatingSystemNotification NewNotification(GenericError.ErrorCode, Category, Verbosity);
	NewNotification.Description = GenericError.ErrorExceptionDescription;
	return AddNotification(NewNotification);
}

void UOperatingSystem::StartOperatingSystem(const TWeakObjectPtr<const UOperatingSystemSaveGame> LoadGameInstance, FGenericError& OutError)
{
	LOG_WITH_NAME("Starting operating system..");
	if (ParentDevice->IsOperatingSystemInstalled())
	{
		CreateProgramsFromRepository(MustHavePrograms, true);
		CreateProgramsFromRepository(PostInstallStartupPrograms, true);
		Internal_LoadSettings(LoadGameInstance, OutError);

		if (!OutError.IsValid())
		{
			if (bHasBlueprintCanStartOperatingSystem && !K2_CanStartOperatingSystem(OutError))
			{
				if (!OutError.IsValid())
				{
					OutError = MAKE_ERROR("ERR_OS_START", "An unknown error has occured. K2_CanStartOperatingSystem failed without specifying any error.");
				}
			}
			else if (StartOperatingSystemImpl(OutError))
			{
				AddNotification(NOTIFICATION_OS("Operating System started.", Info));
				OperatingSystemWidget->StartOS(IsStartingForTheFirstTime());
				GetWorld()->GetTimerManager().SetTimer(TimerHandle_LoadingTime, this, &ThisClass::PostLoadOperatingSystem, GetLoadingTime(), false);
			}
		}
	}
	else
	{
		Internal_PrepareInstall(OutError);
	}

	BSODWidget->SetError(OutError);
}

void UOperatingSystem::PostLoadOperatingSystem()
{
	FGenericError OutError;
	PostLoadOperatingSystemImpl(OutError);
	if (OutError.IsValid())
	{
		BSODWidget->SetError(OutError);
		ParentDevice->ShowBSOD();
	}
}

void UOperatingSystem::FinishInstallation()
{
	LOG_WITH_NAME("Finishing installation");

	if (!ParentDevice->IsOperatingSystemPreInstalled())
	{
		AddNotification(NOTIFICATION_OS("Installation finished.", Info));
	}

	FGenericError OutError;
	Internal_CreateDefaultDirectories(OutError);
	CreateProgramsFromRepository(MustHavePrograms, true);
	InstallStartupPrograms();
	FinishInstallationImpl();
	OperatingSystemWidget->FinishInstallation();
	ParentDevice->OnFinishOperatingSystemInstallation();
}

void UOperatingSystem::InstallStartupPrograms()
{
	if (!ShouldInstallStartupPrograms())
	{
		return;
	}
	
	LOG_WITH_NAME("Installing startup programs");
	AddNotification(NOTIFICATION_OS("Installing startup programs...", Info));
	CreateProgramsFromRepository(PostInstallStartupPrograms, true);
	InstallStartupProgramsImpl();
}

void UOperatingSystem::ShutdownOS()
{
	CloseAllRunningPrograms();
	OperatingSystemWidget->BeginShutdownOS();
}

void UOperatingSystem::RestartOS()
{
	CloseAllRunningPrograms();
	OperatingSystemWidget->BeginRestartOS();
}

void UOperatingSystem::DestroyOS()
{
	if (NotificationManagerPtr.IsValid())
	{
		ensureMsgf(NotificationManagerPtr.IsUnique(), TEXT("Notification manager must be unique per OS. Use TWeakPtr instead of TSharedPtr or TSharedRef."));
	}
	NotificationManagerPtr.Reset();

	LastBroughtToFrontWindow.Reset();
	BSODWidget->RemoveFromParent();
	
	InstalledPrograms.Empty();
	RunningPrograms.Empty();

	OperatingSystemWidget->RemoveFromParent();
	ParentDevice.Reset();
	Users.Empty();
}

int32 UOperatingSystem::AddRunningProgram(UOperatingSystemBaseProgram* NewProgram, FGenericError& OutError)
{
	check(NewProgram);

	// @TODO Check if program is installed. Do not run not-installed program.

	const auto ProgramName = NewProgram->GetProgramName();
	if (!ParentDevice->IsRunning())
	{
		OutError = MAKE_ERROR("ERR_PROGRAM", FString::Printf(TEXT("Cannot run %s because %s is not in running state."), *ProgramName, *ParentDevice->GetDeviceName().ToString()));
		return INVALID_PROCESS_ID;
	}

	if (NewProgram->IsSingleInstanceProgram() && IsProgramRunning(NewProgram->GetClass()))
	{
		OutError = MAKE_ERROR("ERR_PROGRAM", FString::Printf(TEXT("%s is a single instance program and it is already running."), *ProgramName));
		return INVALID_PROCESS_ID;
	}

	auto NewProcessID = FMath::RandRange(MIN_PID_VALUE, MAX_PID_VALUE);
	while (RunningPrograms.Contains(NewProcessID))
	{
		const auto Msg = FString::Printf(TEXT("Process ID %i already claimed. Generating new one for %s"), NewProcessID, *ProgramName);
		OS_LOG_VERY_VERBOSE(OS, Msg);

		auto Notification = NOTIFICATION_OS("Generate new PID.", Verbose);
		Notification.Description = FText::FromString(Msg);
		AddNotification(Notification);

		NewProcessID = FMath::RandRange(MIN_PID_VALUE, MAX_PID_VALUE);
	}

	RunningPrograms.Add(NewProcessID, NewProgram);
	return NewProcessID;
}

void UOperatingSystem::ProgramStarted(UOperatingSystemBaseProgram* StartedProgram)
{
	if (StartedProgram->GetTaskbarButton().IsValid())
	{
		TaskbarButtons.Emplace(StartedProgram->GetProcessID(), StartedProgram->GetTaskbarButton());
	}
	
	OnProgramStarted.Broadcast(StartedProgram);
}

bool UOperatingSystem::IsProgramRunning(const TWeakObjectPtr<const UOperatingSystemBaseProgram> TestProgram) const
{
	if (!TestProgram.IsValid())
	{
		return false;
	}

	return IsProgramRunning(TestProgram->GetClass());
}

bool UOperatingSystem::IsProgramRunning(const TSubclassOf<UOperatingSystemBaseProgram> TestProgramClass) const
{
	for (const auto& It : RunningPrograms)
	{
		if (It.Value->GetClass() == TestProgramClass)
		{
			return true;
		}
	}

	return false;
}

UDraggableWindow* UOperatingSystem::CreateNewWindow(TWeakObjectPtr<UOperatingSystemBaseProgram> TargetProgram) const
{
	return OperatingSystemWidget->CreateNewWindow(TargetProgram.Get());
}

void UOperatingSystem::BringWindowToFront(UDraggableWindow* TargetWindow)
{
	if (IsValid(TargetWindow) && IsValid(OperatingSystemWidget) && LastBroughtToFrontWindow.Get() != TargetWindow)
	{
		for (const auto& It : TaskbarButtons)
		{
			if (It.Value->GetCurrentState() == EOperatingSystemProgramViewState::Focused)
			{
				It.Value->ChangeTaskbarState(EOperatingSystemProgramViewState::NotFocused);
			}
		}
		
		LastBroughtToFrontWindow = TargetWindow;
		LastWindowZOrder++;
		OperatingSystemWidget->BringWindowToFront(TargetWindow, LastWindowZOrder);
	}
}

UOperatingSystemDirectory* UOperatingSystem::CreateDirectoryInPath(const FString& TargetPath,
	const FString& DirectoryName, TSoftClassPtr<UOperatingSystemDirectory> DirectoryClass,
	UOperatingSystemPartition* TargetPartition, const bool bIsFromSaveGame, FGenericError& OutError)
{
	checkf(false, TEXT("%s access denied. This should be implemented in child class!"), *FString(__FUNCTION__));
	return nullptr;
}

void UOperatingSystem::Internal_CreateDefaultDirectories(FGenericError& OutError)
{
	const auto MyPartition = GetOperatingSystemPartition();
	const auto& Dirs = DefaultDirectories.LoadSynchronous()->GetDirectories();

	TArray<UOperatingSystemDirectory*> NewDirectories;
	NewDirectories.Reserve(Dirs.Num());

	for (const auto& Directory : Dirs)
	{		
		if (auto NewDir = UOperatingSystemDirectory::CreateDirectory(MyPartition, nullptr, this, Directory, false, OutError))
		{
			NewDirectories.Emplace(NewDir);
		}

		if (OutError.IsValid())
		{
			return;
		}
	}

	MyPartition->AddDirectories(NewDirectories);

	OS_LOG_VERBOSE(OS, "Default directories created.");
}

void UOperatingSystem::Internal_PrepareInstall(FGenericError& OutError)
{
	if (ParentDevice->IsOperatingSystemPreInstalled())
	{
		Internal_FinalizePreInstallation(OutError);
		return;
	}
	
	LOG_WITH_NAME("Preparing to install");
	PrepareOperatingSystemInstallImpl(OutError);
}

void UOperatingSystem::Internal_FinalizePreInstallation(FGenericError& OutError)
{
	FinalizePreInstallation(OutError);
}

void UOperatingSystem::OnShowNotification(const FOperatingSystemNotification& NewNotification)
{
	if (IsValid(OperatingSystemWidget))
	{
		OperatingSystemWidget->ShowNotification(NewNotification);
	}
}

void UOperatingSystem::OnAllOnNotificationsCleared()
{
	if (IsValid(OperatingSystemWidget))
	{
		TotalNotifications = TotalErrorNotifications = TotalWarningNotifications = 0;
		OperatingSystemWidget->AllNotificationsCleared();
	}
}

void UOperatingSystem::Internal_Validate(FGenericError& OutError) const
{
	if (Name.IsEmptyOrWhitespace())
	{
		OutError = MAKE_ERROR("ERR_OS", FString::Printf(TEXT("%s validation error: Missing name."), *GetName()));
		return;
	}

	if (WidgetClass.IsNull())
	{
		OutError = MAKE_ERROR("ERR_OS", FString::Printf(TEXT("%s validation error: Widget null."), *Name.ToString()));
		return;
	}

	if (OperatingSystemTag != UnixOsTag && OperatingSystemTag != NonUnixOsTag)
	{
		OutError = MAKE_ERROR("ERR_OS_TAG_INVALID", FString::Printf(TEXT("%s must have either %s or %s. You specified %s which is not supported."), *Name.ToString(), *UnixOsTag.GetTag().ToString(), *NonUnixOsTag.GetTag().ToString(), *OperatingSystemTag.ToString()));
		return;
	}

	if (InstallationSpace < 1.f)
	{
		OutError = MAKE_ERROR("ERR_OS", FString::Printf(TEXT("%s validation error: Installation space incorrect."), *Name.ToString()));
		return;
	}

	if (!SupportedDevices.IsEmpty() && !SupportedDevices.HasTagExact(ParentDevice->GetDeviceTag()))
	{
		OutError = MAKE_ERROR("ERR_OS_DEVICE_MISMATCH", FString::Printf(TEXT("%s validation error: Not compatible with %s."), *Name.ToString(), *ParentDevice->GetDeviceName().ToString()));
		return;
	}

	if (MustHavePrograms.IsNull())
	{
		OutError = MAKE_ERROR("ERR_OS", FString::Printf(TEXT("%s validation error: Must have programs collection is missing."), *Name.ToString()));
		return;
	}

	if (DefaultDirectories.IsNull())
	{
		OutError = MAKE_ERROR("ERR_OS", FString::Printf(TEXT("%s validation error: Default directory collection is missing."), *Name.ToString()));
		return;
	}

	MustHavePrograms.LoadSynchronous()->Validate(OutError);
	if (OutError.IsValid())
	{
		return;
	}

	const auto DirCollection = DefaultDirectories.LoadSynchronous();
	DirCollection->Validate(OutError);
	if (OutError.IsValid())
	{
		return;
	}

	if (!DirCollection->HasDirectoryWithTag(DirUsers_Tag, true))
	{
		OutError = MAKE_ERROR("ERR_OS", FString::Printf(TEXT("%s validation error: Users directory is missing."), *Name.ToString()));
		return;
	}

	if (!DirCollection->HasDirectoryWithTag(DirDesktop_Tag, true))
	{
		OutError = MAKE_ERROR("ERR_OS", FString::Printf(TEXT("%s validation error: Desktop directory is missing."), *Name.ToString()));
		return;
	}

	if (DirectoryIcons.IsEmpty())
	{
		OutError = MAKE_ERROR("ERR_DIR", FString::Printf(TEXT("%s validation error: Directory icons are not set."), *Name.ToString()));
		return;
	}

	for (const auto& It : DirectoryIcons)
	{
		if (It.Value.IsNull())
		{
			OutError = MAKE_ERROR("ERR_DIR", FString::Printf(TEXT("%s validation error: One or more directory icons are not set."), *Name.ToString()));
			return;
		}
	}

	OnValidate(OutError);
}

void UOperatingSystem::Internal_CreateNotificationManager()
{
	if (!NotificationManagerPtr.IsValid())
	{
		NotificationManagerPtr = FOperatingSystemNotificationManager::CreateNotificationManager(GetWorld(), NotificationSettings.ToastNotificationTime);
		NotificationManagerPtr->OnShowNotification.BindUObject(this, &ThisClass::OnShowNotification);
		NotificationManagerPtr->OnClearAllNotifications.BindUObject(this, &ThisClass::OnAllOnNotificationsCleared);
		LOG_VV("Notification manager created");
	}
}

void UOperatingSystem::Internal_LoadSettings(const TWeakObjectPtr<const UOperatingSystemSaveGame> LoadGameInstance, FGenericError& OutError)
{
	auto& DeviceData = LoadGameInstance->GetDeviceDataRef();
	bIsStartingForTheTime = DeviceData.SaveLoad_OperatingSystem.bIsStartingForTheFirstTime;
	bAutoLogin = DeviceData.SaveLoad_OperatingSystem.bAutoLogin;
	Users = DeviceData.SaveLoad_OperatingSystem.SaveLoad_Users;
	TargetPartitionID = DeviceData.SaveLoad_OperatingSystem.SaveLoad_PartitionID;
	DeviceName = FText::FromString(DeviceData.SaveLoad_OperatingSystem.SaveLoad_DeviceName);

	if (!Users.IsEmpty())
	{
		CurrentUser = Users[0];
	}

	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	for (const auto& LoadedPartitionData : DeviceData.SaveLoad_Partitions)
	{
		const auto LoadedPartition = HardDisk->AllocatePartitionFromLoadGame(LoadedPartitionData);
		LoadedPartition->SetOwningOperatingSystem(this);
		OnPartitionLoaded(*LoadedPartition, LoadedPartitionData);
		for (const auto& LoadedDirectoryData : LoadedPartitionData.SaveLoad_Directories)
		{
			const auto CreatedDir = CreateDirectoryInPath(LoadedDirectoryData.SaveLoad_Path,
              LoadedDirectoryData.SaveLoad_Name,
              TSoftClassPtr<UOperatingSystemDirectory>(FSoftClassPath(LoadedDirectoryData.SaveLoad_DirectoryClass)), LoadedPartition, true, OutError);			

			check(CreatedDir);
			CreatedDir->LoadFiles(LoadedDirectoryData);
		}
	}
	OutError.Reset();

	if (!HardDisk->HasPartitionWithID(TargetPartitionID))
	{
		OutError = MAKE_ERROR("ERR_START_OS", FString::Printf(TEXT("Partition ID %s is missing. %s cannot start."), *TargetPartitionID.ToString(), *Name.ToString()));
	}

	for (const auto& LoadedProgramData : DeviceData.SaveLoad_OperatingSystem.InstalledPrograms)
	{
		const auto ProgramClass = TSoftClassPtr<UOperatingSystemBaseProgram>(FSoftClassPath(LoadedProgramData.ClassPath));
		const auto ProgramPartition = HardDisk->FindPartitionByID(LoadedProgramData.PartitionID);
		Internal_LoadSavedProgram(ProgramClass, ProgramPartition);
	}
}

bool UOperatingSystem::CreateProgramsFromRepository(const TSoftObjectPtr<UOperatingSystemProgramsCollection>& TargetRepository, const bool bIsInstalledWithOS)
{
	if (TargetRepository.IsNull())
	{
		return false;
	}

	TArray<FGenericError> OutErrors;
	const auto& ProgramClasses = TargetRepository.LoadSynchronous()->GetProgramClasses();
	for (const auto& It : ProgramClasses)
	{
		FGenericError OutError;
		auto CreatedProgram = UOperatingSystemBaseProgram::CreateProgram(this, It, OutError, bIsInstalledWithOS);
		if (OutError.IsValid())
		{
			OutErrors.Emplace(OutError);
		}
		else
		{
			CreatedProgram->SetParentPartition(GetOperatingSystemPartition());
			InstalledPrograms.Emplace(CreatedProgram);
		}
	}

	for (const auto& Error : OutErrors)
	{
		FOperatingSystemNotification Notification = NOTIFICATION_OS("Program create error", Error);
		Notification.Code = Error.ErrorCode;
		Notification.Description = Error.ErrorExceptionDescription;
		AddNotification(Notification);
		OS_LOG(OS, FString::Printf(TEXT("Program create error: %s - %s."), *Error.ErrorCode.ToString(), *Error.ErrorExceptionDescription.ToString()));
	}

	return true;
}

void UOperatingSystem::SetToInstallStartupPrograms(const bool bInstall)
{
	bInstallStartupPrograms = bInstall;
}

bool UOperatingSystem::ShouldInstallStartupPrograms() const
{
	if (PostInstallStartupPrograms.IsNull())
	{
		return false;
	}
	
	return bInstallStartupPrograms && !PostInstallStartupPrograms.LoadSynchronous()->GetProgramClasses().IsEmpty();
}

void UOperatingSystem::SetDeviceName(const FText& NewName)
{
	DeviceName = NewName;
}

FText UOperatingSystem::GetDeviceName() const
{
	return DeviceName;
}

void UOperatingSystem::SetAutoLogin(const bool bEnableAutoLogin)
{
	bAutoLogin = bEnableAutoLogin;
}

bool UOperatingSystem::CanAutoLogin() const
{
	return bAutoLogin;
}

float UOperatingSystem::GetInstallationTime() const
{
	if (!CachedInstallationTime.IsSet())
	{
		CachedInstallationTime = InstallationTime.GetTime();
		LOG_VV(FString::Printf(TEXT("Installation time set to %f"), CachedInstallationTime.GetValue()));
	}

	return CachedInstallationTime.GetValue();
}

float UOperatingSystem::GetLoadingTime() const
{
	if (!CachedLoadingTime.IsSet())
	{
		CachedLoadingTime = LoadingTime.GetTime();
		LOG_VV(FString::Printf(TEXT("Loading time set to %f"), CachedLoadingTime.GetValue()));
	}

	return CachedLoadingTime.GetValue();
}

float UOperatingSystem::GetInitialLoadingTime() const
{
	if (!CachedInitialLoadingTime.IsSet())
	{
		CachedInitialLoadingTime = LoadingTimeInitial.GetTime();
		LOG_VV(FString::Printf(TEXT("Initial loading time set to %f"), CachedInitialLoadingTime.GetValue()));
	}

	return CachedInitialLoadingTime.GetValue();
}

void UOperatingSystem::ClearAllNotifications()
{
	NotificationManagerPtr->ClearAllNotifications();
}

void UOperatingSystem::ConsumeSpaceInMB(const float& NewSizeInMB, UOperatingSystemPartition* Partition, FGenericError& OutError)
{
	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	if (!IsValid(HardDisk))
	{
		OutError = MAKE_ERROR("ERR_HDD", "Hard disk not valid.");
		return;
	}

	HardDisk->ConsumeSpaceInMB(NewSizeInMB, Partition, OutError);
	if (OutError.IsValid())
	{
		AddNotification(NOTIFICATION_OS(OutError.ErrorExceptionDescription.ToString(), Error));
	}
}

void UOperatingSystem::ConsumeSpaceInGB(const float& NewSizeInGB, UOperatingSystemPartition* Partition, FGenericError& OutError)
{
	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	if (!IsValid(HardDisk))
	{
		OutError = MAKE_ERROR("ERR_HDD", "Hard disk not valid.");
		return;
	}

	HardDisk->ConsumeSpaceInGB(NewSizeInGB, Partition, OutError);
	if (OutError.IsValid())
	{
		AddNotification(NOTIFICATION_OS(OutError.ErrorExceptionDescription.ToString(), Error));
	}
}

FText UOperatingSystem::GetSizeAsText(const EOperatingSystemSizeMethod SizeMethod, const UOperatingSystemPartition* Partition, FGenericError& OutError) const
{
	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	if (!IsValid(HardDisk))
	{
		OutError = MAKE_ERROR("ERR_HDD", "Hard disk not valid.");
		return FText();
	}

	return HardDisk->GetSizeAsText(SizeMethod, Partition, OutError);
}

float UOperatingSystem::GetStoragePercentage(const UOperatingSystemPartition* Partition, FGenericError& OutError) const
{
	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	if (!IsValid(HardDisk))
	{
		OutError = MAKE_ERROR("ERR_HDD", "Hard disk not valid.");
		return 0.f;
	}

	return HardDisk->GetStoragePercentage(Partition, OutError);
}

double UOperatingSystem::GetHardDiskSize(FGenericError& OutError, const EOperatingSystemSizeMethod SizeMethod /*= EOperatingSystemSizeMethod::GB*/) const
{
	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	if (!IsValid(HardDisk))
	{
		OutError = MAKE_ERROR("ERR_HDD", "Hard disk not valid.");
		return 0.f;
	}

	return HardDisk->GetHardDiskSize(SizeMethod);
}

UOperatingSystemBaseProgram* UOperatingSystem::InstallProgramFromPackage(const FName& ProgramIdentifier,
	FGenericError& OutErrorIfAny)
{
	const auto ProgramClassToInstall = FindProgramFromPackage(ProgramIdentifier);
	if (ProgramClassToInstall.IsNull())
	{
		OutErrorIfAny = MAKE_ERROR("ERR_NULL_PRG", FString::Printf(TEXT("'%s' was not found. Program is either not set in repository or repository itself is not configured."), *ProgramIdentifier.ToString()));
		return nullptr;
	}

	return Internal_InstallProgram(ProgramClassToInstall, GetOperatingSystemPartition(), OutErrorIfAny);
}

void UOperatingSystem::BeginInstallation(UOperatingSystemPartition* TargetPartition, FGenericError& OutError)
{
	if (!ParentDevice.IsValid())
	{
		OutError = MAKE_ERROR("ERR_DEVICE_NULL", "Parent device was null.");
		return;
	}

	if (ParentDevice->IsOperatingSystemInstalled())
	{
		OutError = MAKE_ERROR("ERR_OS_INSTALLED", "Already installed.");
		return;
	}

	if (!IsValid(TargetPartition))
	{
		OutError = MAKE_ERROR("ERR_PARTITION_NULL", "No partition selected to install.");
		return;
	}

	TargetPartitionID = TargetPartition->GetPartitionID();
	ConsumeSpaceInGB(InstallationSpace, TargetPartition, OutError);
	if (OutError.IsValid())
	{
		return;
	}

	LOG_WITH_NAME("Begin installation..");
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_OperatingSystemInstallation, this, &ThisClass::FinishInstallation, GetInstallationTime(), false);
}

UOperatingSystemPartition* UOperatingSystem::AllocatePartition(const double SizeInBytes, FGenericError& OutError)
{
	if (!ParentDevice.IsValid())
	{
		OutError = MAKE_ERROR("ERR_DEVICE_NULL", "Parent device was null.");
		return nullptr;
	}

	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	if (!IsValid(HardDisk))
	{
		OutError = MAKE_ERROR("ERR_HDD_NOT_DETECTED", "Hard Disk was not detected while allocating partition.");
		return nullptr;
	}

	auto NewPartition = UOperatingSystemPartition::CreateNewPartition(HardDisk, SizeInBytes, OutError);
	if (OutError.IsValid())
	{
		if (IsValid(NewPartition))
		{
			NewPartition->MarkAsGarbage();
			NewPartition = nullptr;
		}

		return nullptr;
	}

	HardDisk->AllocatePartition(*NewPartition, OutError);
	if (OutError.IsValid())
	{
		NewPartition->MarkAsGarbage();
		NewPartition = nullptr;
	}

	return NewPartition;
}

void UOperatingSystem::RemovePartition(UOperatingSystemPartition* PartitionToDelete, FGenericError& OutError)
{
	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	if (!IsValid(HardDisk))
	{
		OutError = MAKE_ERROR("ERR_HDD_NOT_DETECTED", "Hard Disk was not detected while removing partition.");
		return;
	}

	if (!IsValid(PartitionToDelete))
	{
		OutError = MAKE_ERROR("ERR_NULL_PARTITION", "Partition invalid.");
		return;
	}

	HardDisk->RemovePartition(*PartitionToDelete, OutError);
}

void UOperatingSystem::RefreshPartitions()
{
	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	HardDisk->RefreshPartitions();
}

void UOperatingSystem::InstallationCompleted(const bool bSwitchToDesktop)
{
	bIsStartingForTheTime = false;
	ParentDevice->OnFinishSettingUpOperatingSystemPostInstallation();
	if (bSwitchToDesktop)
	{
		OperatingSystemWidget->SwitchTab(OSWidget_Desktop_Tag);
	}
}

bool UOperatingSystem::CreateNewUser(const FOperatingSystemUser& NewUser, const bool bSetAsActive /*= false*/)
{
	if (!NewUser.IsValid())
	{
		return false;
	}

	Users.Emplace(NewUser);
	if (bSetAsActive)
	{
		CurrentUser = NewUser;
	}

	return true;
}

bool UOperatingSystem::LoginUser(const FText& Username, const FText& Password)
{
	const FOperatingSystemUser TempUser(Username, Password);
	for (const auto& It : Users)
	{
		if (TempUser == It)
		{
			CurrentUser = It;
			return true;
		}
	}

	return false;
}

bool UOperatingSystem::HasEnoughSpace(const double& TestSizeInBytes, const UOperatingSystemPartition* InPartition) const
{
	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	if (!IsValid(HardDisk))
	{
		return false;
	}

	return InPartition->HasEnoughSpace(TestSizeInBytes);
}

TArray<UOperatingSystemPartition*> UOperatingSystem::GetDiskPartitions() const
{
	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	return HardDisk->GetPartitions();
}

UOperatingSystemPartition* UOperatingSystem::GetOperatingSystemPartition() const
{
	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	return HardDisk->FindPartitionByID(TargetPartitionID);
}

void UOperatingSystem::CloseProgram(UOperatingSystemBaseProgram* TargetProgram, FGenericError& OutError)
{
	if (!IsValid(TargetProgram))
	{
		OutError = MAKE_ERROR("ERR_CLOSE_PROGRAM", "Program to close not valid.");
		return;
	}

	if (!TargetProgram->IsRunning())
	{
		OutError = MAKE_ERROR("ERR_CLOSE_PROGRAM", FString::Printf(TEXT("Unable to close %s since it is not running."), *TargetProgram->GetProgramName()));
		AddNotification(NOTIFICATION_OS(FString::Printf(TEXT("Unable to close %s since it is not running."), *TargetProgram->GetProgramName()), Error));
		return;
	}

	const auto& TargetPID = TargetProgram->GetProcessID();
	RunningPrograms.Remove(TargetPID);
	TaskbarButtons.Remove(TargetPID);
	TaskbarButtons.Compact();
	TaskbarButtons.Shrink();
	TargetProgram->CloseProgram(OutError);
}

void UOperatingSystem::MinimizeProgram(UOperatingSystemBaseProgram* TargetProgram)
{
	if (ensure(IsValid(TargetProgram)))
	{
		const auto FoundTaskbarButton = TaskbarButtons.FindRef(TargetProgram->GetProcessID());
		if (FoundTaskbarButton.IsValid())
		{
			FoundTaskbarButton->ChangeTaskbarState(EOperatingSystemProgramViewState::Minimized);
		}
	}
}

void UOperatingSystem::CloseAllRunningPrograms()
{
	TArray<TObjectPtr<UOperatingSystemBaseProgram>> ProgramsArray;
	RunningPrograms.GenerateValueArray(ProgramsArray);
	for (const auto& It : ProgramsArray)
	{
		FGenericError OutError;
		CloseProgram(It, OutError);
	}
}

void UOperatingSystem::RestoreMinimizedProgram(const UOperatingSystemBaseProgram* TargetProgram)
{
	if (ensure(IsValid(TargetProgram)))
	{
		const auto FoundTaskbarButton = TaskbarButtons.FindRef(TargetProgram->GetProcessID());
		if (FoundTaskbarButton.IsValid())
		{
			FoundTaskbarButton->ChangeTaskbarState(EOperatingSystemProgramViewState::Focused);
		}
	}
}

TSoftClassPtr<UOperatingSystemWidget> UOperatingSystem::GetOperatingSystemWidgetClass() const
{
	return WidgetClass;
}

TSoftClassPtr<UOperatingSystemBsodWidget> UOperatingSystem::GetBsodWidgetClass() const
{
	return BsodWidgetClass;
}

TWeakObjectPtr<UOperatingSystemWidget> UOperatingSystem::GetOperatingSystemWidget() const
{
	return OperatingSystemWidget;
}

TWeakObjectPtr<UOperatingSystemBsodWidget> UOperatingSystem::GetBsodWidget() const
{
	return BSODWidget;
}

TWeakObjectPtr<UOperatingSystemBaseDevice> UOperatingSystem::GetParentDevice() const
{
	return ParentDevice;
}

UObject* UOperatingSystem::GetDirectoryIconObject(const FGameplayTag& TestTag) const
{
	return DirectoryIcons.FindRef(TestTag).LoadSynchronous();
}

TArray<UOperatingSystemBaseProgram*> UOperatingSystem::GetInstalledPrograms() const
{
	return InstalledPrograms;
}

UOperatingSystemBaseProgram* UOperatingSystem::IsProgramInstalled(const TSoftClassPtr<UOperatingSystemBaseProgram> TestClass) const
{
	if (TestClass.IsNull())
	{
		return nullptr;
	}

	for (const auto& It : InstalledPrograms)
	{
		if (It->GetClass() == TestClass.LoadSynchronous())
		{
			return It;
		}
	}

	return nullptr;
}

UOperatingSystemBaseProgram* UOperatingSystem::GetRunningProgram(const TSoftClassPtr<UOperatingSystemBaseProgram> TestClass) const
{
	if (TestClass.IsNull())
	{
		return nullptr;
	}

	for (const auto& It : RunningPrograms)
	{
		if (It.Value->GetClass() == TestClass.LoadSynchronous())
		{
			return It.Value;
		}
	}

	return nullptr;
}

bool UOperatingSystem::IsPreInstalledOperatingSystem() const
{
	return ParentDevice->IsOperatingSystemPreInstalled();
}

bool UOperatingSystem::IsShuttingDown() const
{
	return ParentDevice->IsShuttingDown();
}

bool UOperatingSystem::IsRestarting() const
{
	return ParentDevice->IsRestarting();
}

UOperatingSystemBaseProgram* UOperatingSystem::Internal_InstallProgram(const TSoftClassPtr<UOperatingSystemBaseProgram>& TargetProgram,
	UOperatingSystemPartition* TargetPartition,
	FGenericError& OutError)
{
	check(!TargetProgram.IsNull());
	if (!IsValid(TargetPartition))
	{
		ensureMsgf(false, TEXT("Partition should not be null when calling %s"), *FString(__FUNCTION__));
		return nullptr;
	}

	const auto CDO = TargetProgram.LoadSynchronous()->GetDefaultObject<UOperatingSystemBaseProgram>();
	const auto ProgramName = CDO->GetProgramName();

	if (!ParentDevice->IsRunning())
	{
		OutError = MAKE_ERROR("ERR_PRG_INSTALL", FString::Printf(TEXT("Unable to install %s while device is not in running state."), *ProgramName));
		return nullptr;
	}

	for (const auto& It : InstalledPrograms)
	{
		if (It.GetClass() == TargetProgram.Get())
		{
			OutError = MAKE_ERROR("ERR_PRG_INSTALL", FString::Printf(TEXT("Unable to install %s. It is already installed."), *ProgramName));
			return nullptr;
		}
	}

	const auto ProgramSpaceInMB = CDO->GetSpaceRequiredInMB();
	const auto SpaceBytes = UOperatingSystemStatics::ConvertMB_ToBytes(ProgramSpaceInMB);
	if (!HasEnoughSpace(SpaceBytes, TargetPartition))
	{
		OutError = MAKE_ERROR("ERR_PRG_INSTALL", FString::Printf(TEXT("Unable to install %s. Not enough space in partition."), *ProgramName));
		return nullptr;
	}

	const auto NewProgram = UOperatingSystemBaseProgram::CreateProgram(this, TargetProgram, OutError);
	if (OutError.IsValid())
	{
		return nullptr;
	}

	InstalledPrograms.Emplace(NewProgram);
	ConsumeSpaceInMB(ProgramSpaceInMB, TargetPartition, OutError);
	NewProgram->SetParentPartition(TargetPartition);

	OnProgramInstalled.Broadcast(NewProgram);
	UOperatingSystemSaveGame::SaveGame(ParentDevice.Get());
	return NewProgram;
}

void UOperatingSystem::Internal_LoadSavedProgram(const TSoftClassPtr<UOperatingSystemBaseProgram>& TargetProgram,
	UOperatingSystemPartition* TargetPartition)
{
	check(!TargetProgram.IsNull());
	check(IsValid(TargetPartition));

	FGenericError OutError;
	const auto NewProgram = UOperatingSystemBaseProgram::CreateProgram(this, TargetProgram, OutError);
	check(!OutError.IsValid());

	InstalledPrograms.Emplace(NewProgram);
	NewProgram->SetParentPartition(TargetPartition);
}

#undef LOG_WITH_NAME
#undef LOG_VV
