// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "OperatingSystemNotificationManager.h"
#include "OperatingSystemTypes.h"
#include "OperatingSystemTags.h"
#include "Engine/EngineTypes.h"
#include "OperatingSystem.generated.h"

class UOperatingSystemTaskbarButton;
class UOperatingSystemDirectory;
class UOperatingSystemBaseProgram;
class UOperatingSystemBaseDevice;
class UOperatingSystemWidget;
class UOperatingSystemProgramsCollection;
class USoundBase;
class UOperatingSystemBsodWidget;
class UOperatingSystemPartition;
class UOperatingSystemSaveGame;
class UDraggableWindow;
class UOperatingSystemDirectoriesCollection;

USTRUCT()
struct FOperatingSystemNotificationSettings
{
	GENERATED_BODY();
	
	/** Enable notifications in Operating System. */
	UPROPERTY(EditAnywhere, Category = "Notification Settings")
	uint8 bEnableNotifications : 1;
	
	/** Should we play a sound when a notification is received? */
	UPROPERTY(EditAnywhere, Category = "Notification Settings", meta = (EditCondition = "bEnableNotifications"))
	uint8 bPlayNotificationSound : 1;

	/** How long the toast notification should display on screen. Toast notifications are implemented in UMG and this has no effect if you have not done that. */
	UPROPERTY(EditAnywhere, Category = "Notification Settings", meta = (EditCondition = "bEnableNotifications", UIMin = 1, UIMax = 7, ClampMin = 1, ForceUnits = Seconds))
	uint8 ToastNotificationTime;

	/** Default sound to play. */
	UPROPERTY(EditAnywhere, Category = "Notification Settings", meta = (EditCondition = "bEnableNotifications && bPlayNotificationSound"))
	TSoftObjectPtr<USoundBase> NotificationSoundDefault;

	/** Warning sound to play if notification is a warning. */
	UPROPERTY(EditAnywhere, Category = "Notification Settings", meta = (EditCondition = "bEnableNotifications && bPlayNotificationSound"))
	TSoftObjectPtr<USoundBase> NotificationSoundWarning;

	/** Error sound to play if notification is an error. */
	UPROPERTY(EditAnywhere, Category = "Notification Settings", meta = (EditCondition = "bEnableNotifications && bPlayNotificationSound"))
	TSoftObjectPtr<USoundBase> NotificationSoundError;

	FOperatingSystemNotificationSettings()
		: bEnableNotifications(true)
		, bPlayNotificationSound(true)
		, ToastNotificationTime(5)
		, NotificationSoundDefault(nullptr)
		, NotificationSoundWarning(nullptr)
		, NotificationSoundError(nullptr)
	{
	}
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOperatingSystemProgramDelegate, UOperatingSystemBaseProgram*, Program);

/** Main Operating System class.
 * DO NOT inherit from this class directly.
 * @See UOperatingSystemUnix
 * @See UOperatingSystemNonUnix
 */
UCLASS(Within=OperatingSystemBaseDevice, Abstract, NotBlueprintable, BlueprintType)
class UOperatingSystem : public UObject
{
	GENERATED_BODY()

protected:

	FTimerHandle TimerHandle_OperatingSystemInstallation;
	FTimerHandle TimerHandle_LoadingTime;

	/** Name of this operating system. Think of this as just Windows or MacOS or Ubuntu etc. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystem)
	FText Name;

	/** Company that made this operating system. Think of this as just Microsoft or Apple or Canonical etc. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystem)
	FText CompanyName;

	/** Current version of this Operating System. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystem)
	FVersion Version;

	/** An icon (either texture or user interface material) for this Operating System. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystem, meta = (DisplayThumbnail = true, AllowedClasses = "Texture, MaterialInterface"))
	TSoftObjectPtr<UObject> Icon;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystem, meta = (Categories = "OperatingSystem.Directory", DisplayThumbnail = true, AllowedClasses = "Texture, MaterialInterface", ForceInlineRow))
	TMap<FGameplayTag, TSoftObjectPtr<UObject>> DirectoryIcons;

	/** Space required by this OS for installation. Remember, this is all simulated so don't worry about anything related to your PC. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystem, meta = (ForceUnits = Gigabytes, UIMin = 1, UIMax = 20, ClampMin = 1, ClampMax = 20))
	float InstallationSpace;

	/** List of devices this Operating System supports. If empty, it is assumed all devices are supported. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystem, meta = (Categories = "OperatingSystem.Devices"))
	FGameplayTagContainer SupportedDevices;

	/** These are programs that *must* be installed with Operating System. For example: File explorer, terminal, web browser etc. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystem)
	TSoftObjectPtr<UOperatingSystemProgramsCollection> MustHavePrograms;

	/** List of programs that can be optionally installed after installing the Operating System. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystem)
	TSoftObjectPtr<UOperatingSystemProgramsCollection> PostInstallStartupPrograms;

	/** Default directories to automatically create when installing this Operating System. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystem)
	TSoftObjectPtr<UOperatingSystemDirectoriesCollection> DefaultDirectories;

	/** Operating System Widget class. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemWidgets)
	TSoftClassPtr<UOperatingSystemWidget> WidgetClass;

	/** Operating System Widget class. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemWidgets)
	TSoftClassPtr<UOperatingSystemBsodWidget> BsodWidgetClass;

	/** Notification settings. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystem)
	FOperatingSystemNotificationSettings NotificationSettings;

	/** Installation time for installing this Operating System. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystem)
	FOperatingSystemRangeTime InstallationTime;

	/** Time it takes for the Operating System to show loading screen and then change to logon screen. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystem)
	FOperatingSystemRangeTime LoadingTime;

	/** Time it takes for the Operating System to load for the first time after installation. Typically this will be set higher than Loading Time. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystem)
	FOperatingSystemRangeTime LoadingTimeInitial;

	/** Time it takes to transition from Logon screen to Desktop. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystem)
	FOperatingSystemRangeTime LogonToDesktopTime;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystem, AdvancedDisplay)
	FOperatingSystemRangeTime BsodOnScreenTime;

	UPROPERTY(VisibleAnywhere, Category = OperatingSystem, AdvancedDisplay)
	FGameplayTag OperatingSystemTag;

	// @TODO Operating System Settings.
	// @TODO Taskbar

	/** The device this Operating System is running on. */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = Debug)
	TWeakObjectPtr<UOperatingSystemBaseDevice> ParentDevice;

	/** Reference to the Operating System widget. */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = Debug)
	TObjectPtr<UOperatingSystemWidget> OperatingSystemWidget;

	/** All running programs in this Operating System. The key is the Process ID and value is the program. */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = Debug)
	TMap<int32, TObjectPtr<UOperatingSystemBaseProgram>> RunningPrograms;

	/** All the programs that are currently installed. */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = Debug)
	TArray<TObjectPtr<UOperatingSystemBaseProgram>> InstalledPrograms;

	/** Active user. */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = Debug)
	FOperatingSystemUser CurrentUser;

	/** True if this Operating System was pre-installed with the device. */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = Debug)
	uint8 bIsPreInstalled : 1;

	/** True if the Operating System is starting for the first time after installation. */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = Debug)
	uint8 bIsStartingForTheTime : 1;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = Debug)
	int32 TotalNotifications;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = Debug)
	int32 TotalErrorNotifications;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = Debug)
	int32 TotalWarningNotifications;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = Debug)
	TObjectPtr<UOperatingSystemBsodWidget> BSODWidget;

	UPROPERTY(Transient)
	TMap<int32, TWeakObjectPtr<UOperatingSystemTaskbarButton>> TaskbarButtons;

	UPROPERTY(Transient)
	FOperatingSystemUniqueId TargetPartitionID;

	UPROPERTY(Transient)
	TWeakObjectPtr<UDraggableWindow> LastBroughtToFrontWindow;

	UPROPERTY(Transient)
	uint8 bAutoLogin : 1;

	UPROPERTY(Transient)
	uint8 bInstallStartupPrograms : 1;

	UPROPERTY()
	uint8 bHasBlueprintCanStartOperatingSystem : 1;

	FOperatingSystemNotificationManagerPtr NotificationManagerPtr;
	mutable TOptional<float> CachedInstallationTime;
	mutable TOptional<float> CachedInitialLoadingTime;
	mutable TOptional<float> CachedLoadingTime;

	int32 LastWindowZOrder;

	/** Can be computer name also like JohnDoes-PC. */
	FText DeviceName;

public:

	UPROPERTY(BlueprintAssignable, Category = OperatingSystem)
	FOperatingSystemProgramDelegate OnProgramStarted;

	UPROPERTY(BlueprintAssignable, Category = OperatingSystem)
	FOperatingSystemProgramDelegate OnProgramClosed;

	UPROPERTY(BlueprintAssignable, Category = OperatingSystem)
	FOperatingSystemProgramDelegate OnProgramInstalled;

	UPROPERTY(BlueprintAssignable, Category = OperatingSystem)
	FOperatingSystemProgramDelegate OnProgramUninstalled;

	template<class T>
	FORCEINLINE T* GetAs() const
	{
		static_assert(TIsDerivedFrom<T, UOperatingSystem>::Value, "T not derived from UOperatingSystem!");
		return Cast<T>(this);
	}

	template<class T>
	FORCEINLINE const T* GetAsConst() const
	{
		static_assert(TIsDerivedFrom<T, UOperatingSystem>::Value, "T not derived from UOperatingSystem!");
		return Cast<T>(this);
	}

	UOperatingSystem();

	UE_NODISCARD static UOperatingSystem* CreateOperatingSystem(UOperatingSystemBaseDevice* OwningDevice, FGenericError& OutError);
	UE_NODISCARD static FString GetOperatingSystemUniqueID(const UOperatingSystem* TestOperatingSystem);

	OPERATINGSYSTEMSIMULATOR_API bool AddNotification(const FOperatingSystemNotification& NewNotification);
	OPERATINGSYSTEMSIMULATOR_API bool AddNotification(const FGenericError& GenericError, const EOperatingSystemNotificationCategory& Category, const EOperatingSystemNotificationType Verbosity = EOperatingSystemNotificationType::Error);

	void StartOperatingSystem(const TWeakObjectPtr<const UOperatingSystemSaveGame> LoadGameInstance, FGenericError& OutError);
	void PostLoadOperatingSystem();
	void FinishInstallation();
	void InstallStartupPrograms();
	
	void ShutdownOS();
	void RestartOS();
	void DestroyOS();

	int32 AddRunningProgram(UOperatingSystemBaseProgram* NewProgram, FGenericError& OutError);
	void ProgramStarted(UOperatingSystemBaseProgram* StartedProgram);
	bool IsProgramRunning(const TWeakObjectPtr<const UOperatingSystemBaseProgram> TestProgram) const;
	bool IsProgramRunning(const TSubclassOf<UOperatingSystemBaseProgram> TestProgramClass) const;
	UDraggableWindow* CreateNewWindow(TWeakObjectPtr<UOperatingSystemBaseProgram> TargetProgram) const;

	void BringWindowToFront(UDraggableWindow* TargetWindow);

	OPERATINGSYSTEMSIMULATOR_API virtual UOperatingSystemDirectory* CreateDirectoryInPath(const FString& TargetPath, const FString& DirectoryName,
		TSoftClassPtr<UOperatingSystemDirectory> DirectoryClass,
		UOperatingSystemPartition* TargetPartition,
		const bool bIsFromSaveGame,
		FGenericError& OutError);

private:

	void Internal_CreateDefaultDirectories(FGenericError& OutError);
	void Internal_PrepareInstall(FGenericError& OutError);

	void Internal_FinalizePreInstallation(FGenericError& OutError);

protected:

	OPERATINGSYSTEMSIMULATOR_API virtual void OnShowNotification(const FOperatingSystemNotification& NewNotification);
	OPERATINGSYSTEMSIMULATOR_API virtual void OnAllOnNotificationsCleared();
	
	OPERATINGSYSTEMSIMULATOR_API virtual void OnValidate(FGenericError& OutError) const {}

	OPERATINGSYSTEMSIMULATOR_API virtual void FinalizePreInstallation(FGenericError& OutError) {}
	OPERATINGSYSTEMSIMULATOR_API virtual void PrepareOperatingSystemInstallImpl(FGenericError& OutError) {}
	OPERATINGSYSTEMSIMULATOR_API virtual bool StartOperatingSystemImpl(FGenericError& OutError) { return false; }
	OPERATINGSYSTEMSIMULATOR_API virtual void PostLoadOperatingSystemImpl(FGenericError& OutError) {}

	OPERATINGSYSTEMSIMULATOR_API virtual void FinishInstallationImpl() {}
	OPERATINGSYSTEMSIMULATOR_API virtual void InstallStartupProgramsImpl() {}

	OPERATINGSYSTEMSIMULATOR_API virtual void OnPartitionLoaded(UOperatingSystemPartition& LoadedPartition, const FOperatingSystemPartitionSaveLoad& SaveLoadData) {}

	OPERATINGSYSTEMSIMULATOR_API virtual TSoftClassPtr<UOperatingSystemBaseProgram> FindProgramFromPackage(const FName& ProgramIdentifier) { return nullptr; }
	
private:

	void Internal_Validate(FGenericError& OutError) const;
	void Internal_CreateNotificationManager();
	void Internal_LoadSettings(const TWeakObjectPtr<const UOperatingSystemSaveGame> LoadGameInstance, FGenericError& OutError);

public:

	bool CreateProgramsFromRepository(const TSoftObjectPtr<UOperatingSystemProgramsCollection>& TargetRepository, const bool bIsInstalledWithOS);

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	void SetToInstallStartupPrograms(const bool bInstall);

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	bool ShouldInstallStartupPrograms() const;

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	void SetDeviceName(const FText& NewName);

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	FText GetDeviceName() const;

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	void SetAutoLogin(const bool bEnableAutoLogin);

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	bool CanAutoLogin() const;

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	float GetInstallationTime() const;

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	float GetLoadingTime() const;

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	float GetInitialLoadingTime() const;

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	const TArray<FOperatingSystemNotification>& GetNotifications() const { return NotificationManagerPtr->GetNotificationsRef(); }

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	void ClearAllNotifications();

	OPERATINGSYSTEMSIMULATOR_API void ConsumeSpaceInMB(const float& NewSizeInMB, UOperatingSystemPartition* Partition, FGenericError& OutError);
	OPERATINGSYSTEMSIMULATOR_API void ConsumeSpaceInGB(const float& NewSizeInGB, UOperatingSystemPartition* Partition, FGenericError& OutError);

	/**
	* public
	* UOperatingSystem::GetSizeAsText const
	* Returns the size of this Hard disk in given format
	* @param SizeMethod [const EOperatingSystemSizeMethod] Your preferred method. Bytes, Megabytes or Gigabytes.
	* @return [FText] Return text in the format {Size} {SizeString}. For example: 256 GB.
	**/
	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	OPERATINGSYSTEMSIMULATOR_API FText GetSizeAsText(const EOperatingSystemSizeMethod SizeMethod, const UOperatingSystemPartition* Partition, FGenericError& OutError) const;

	/**
	* public
	* UOperatingSystem::GetStoragePercentage const
	* Returns the percentage of storage available. For example: 75%, 40% etc.
	* @return [float] Percentage of storage remaining in 0 - 100 range.
	**/
	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	OPERATINGSYSTEMSIMULATOR_API float GetStoragePercentage(const UOperatingSystemPartition* Partition, FGenericError& OutError) const;

	/**
	* public
	* UOperatingSystem::GetHardDiskSize const
	* Returns the Hard Disk total size in given method.
	* @param OutError [FGenericError&] If any error this will be valid.
	* @param SizeMethod [const EOperatingSystemSizeMethod] How you want to represent the return size to be.
	* @return [double] Size in given method.
	**/
	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	OPERATINGSYSTEMSIMULATOR_API double GetHardDiskSize(FGenericError& OutError, const EOperatingSystemSizeMethod SizeMethod = EOperatingSystemSizeMethod::GB) const;

	/**
	 * public
	 * UOperatingSystem::UninstallProgram
	 * Uninstalls the given program identifier from this Operating System.
	 * @param ProgramIdentifier Identifier of the program to uninstall.
	 * @param OutErrorIfAny Outputs uninstall error (if any).
	 */
	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	void UninstallProgram(const FName& ProgramIdentifier, FGenericError& OutErrorIfAny);

	/**
	 * public
	 * UOperatingSystem::UninstallProgramByClass
	 * Uninstalls the given program class from this Operating System.
	 * @param ProgramClass Target program class to uninstall.
	 * @param OutErrorIfAny Outputs uninstall error (if any).
	 */
	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	void UninstallProgramByClass(const TSoftClassPtr<UOperatingSystemBaseProgram> ProgramClass, FGenericError& OutErrorIfAny);

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	UOperatingSystemBaseProgram* InstallProgramFromPackage(const FName& ProgramIdentifier, FGenericError& OutErrorIfAny);

	/**
	 * public
	 * UOperatingSystem::InstallProgramFromClass
	 * Installs the given program class. If target partition is null, system partition is automatically used.
	 * @param OutErrorIfAny Outputs any error. Use the IsValid from this struct to check if there are any errors.
	 * @param ProgramClass Target program class to install
	 * @param TargetPartition Target partition to install. If null, then system partition is automatically used.
	 * @return Valid program if installed. Null otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = OperatingSystem, meta = (AdvancedDisplay = 2))
	UOperatingSystemBaseProgram* InstallProgramFromClass(FGenericError& OutErrorIfAny, const TSoftClassPtr<UOperatingSystemBaseProgram> ProgramClass, UOperatingSystemPartition* TargetPartition = nullptr);
	
	/**
	* public
	* UOperatingSystem::BeginInstallation
	* Begin installation of this Operating System. 
	* This is a simple timer which will call UOperatingSystem::FinishInstallation after the time returned by UOperatingSystem::GetInstallationTime()
	* @param TargetPartition Which partition to install to? Must not be null.
	* @param OutError [FGenericError&] Outputs error (if any). Use the IsValid in this struct to check if there was any error.
	**/
	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	void BeginInstallation(UOperatingSystemPartition* TargetPartition, FGenericError& OutError);

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	UOperatingSystemPartition* AllocatePartition(const double SizeInBytes, FGenericError& OutError);

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	void RemovePartition(UOperatingSystemPartition* PartitionToDelete, FGenericError& OutError);

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	void RefreshPartitions();

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	void InstallationCompleted(const bool bSwitchToDesktop = true);

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	bool CreateNewUser(const FOperatingSystemUser& NewUser, const bool bSetAsActive = false);

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	bool LoginUser(const FText& Username, const FText& Password);

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	bool AuthorizeUser(const FText& Email, const FText& Password, FOperatingSystemUser& OutAuthorizedUser) const;

	/**
	 * public
	 * UOperatingSystem::UpdateCurrentUserDetails
	 * Updates the details for the current user. If you don't want specific settings to change simply leave them empty or null.
	 * @param UpdatedDetails Settings to update. If a setting is left null or empty, that is not updated.
	 * @return True if the details were updated. False otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	bool UpdateCurrentUserDetails(const FOperatingSystemUser& UpdatedDetails);

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	bool HasEnoughSpace(const double& TestSizeInBytes, const UOperatingSystemPartition* InPartition) const;

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	TArray<UOperatingSystemPartition*> GetDiskPartitions() const;

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	UOperatingSystemPartition* GetOperatingSystemPartition() const;

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	void CloseProgram(UOperatingSystemBaseProgram* TargetProgram, FGenericError& OutError);

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	void MinimizeProgram(UOperatingSystemBaseProgram* TargetProgram);

	UFUNCTION(BlueprintCallable, Category = OperatingSystem)
	void CloseAllRunningPrograms();

	void RestoreMinimizedProgram(const UOperatingSystemBaseProgram* TargetProgram);

	TSoftClassPtr<UOperatingSystemWidget> GetOperatingSystemWidgetClass() const;
	TSoftClassPtr<UOperatingSystemBsodWidget> GetBsodWidgetClass() const;
	TWeakObjectPtr<UOperatingSystemWidget> GetOperatingSystemWidget() const;
	TWeakObjectPtr<UOperatingSystemBsodWidget> GetBsodWidget() const;
	TWeakObjectPtr<UOperatingSystemBaseDevice> GetParentDevice() const;

	UFUNCTION(BlueprintPure, Category = OperatingSystem, meta = (Categories = "OperatingSystem.Directory"))
	UObject* GetDirectoryIconObject(const FGameplayTag& TestTag) const;

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	bool IsUnix() const { return OperatingSystemTag == UnixOsTag; }

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	float GetBsodOnScreenTime() const { return BsodOnScreenTime.GetTime(); }

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	float GetToastNotificationDisplayTime() const { return NotificationSettings.ToastNotificationTime; }

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	TArray<UOperatingSystemBaseProgram*> GetInstalledPrograms() const;

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	UOperatingSystemBaseProgram* GetInstalledProgram(const TSoftClassPtr<UOperatingSystemBaseProgram> TestClass) const;

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	bool IsProgramInstalled(const TSoftClassPtr<UOperatingSystemBaseProgram> TestClass) const;

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	UOperatingSystemBaseProgram* GetRunningProgram(const TSoftClassPtr<UOperatingSystemBaseProgram> TestClass) const;

	UFUNCTION(BlueprintPure, Category = OperatingSystem)
	bool IsPreInstalledOperatingSystem() const;

	virtual UOperatingSystemPartition* FindPartitionFromLetter(const FName& TargetDiskLetter) const { return nullptr; }

	virtual TOptional<FText> GetRootCommand() const { return TOptional<FText>(); }
	virtual TOptional<FOperatingSystemUser> GetRootUser() const { return TOptional<FOperatingSystemUser>(); }
	bool HasValidRootCommandAndUser() const { return GetRootCommand().IsSet() && GetRootUser().IsSet(); }

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystem, DisplayName = "Can Start Operating System")
	bool K2_CanStartOperatingSystem(FGenericError& ReturnError);

public:

	bool IsShuttingDown() const;
	bool IsRestarting() const;
	TArray<FOperatingSystemUser> GetAllUsers() const;

	FORCEINLINE FGameplayTag GetOperatingSystemTag() const { return OperatingSystemTag; }
	FORCEINLINE FText GetOperatingSystemName() const { return Name; }
	FORCEINLINE FVersion GetOperatingSystemVersion() const { return Version; }
	FORCEINLINE bool IsStartingForTheFirstTime() const { return bIsStartingForTheTime; }
	FORCEINLINE FOperatingSystemUser GetCurrentUser() const { return CurrentUser; }
	FORCEINLINE FOperatingSystemUniqueId GetPartitionID() const { return TargetPartitionID; }
	FORCEINLINE const TMap<FGameplayTag, TSoftObjectPtr<UObject>>& GetDirectoryIcons() const { return DirectoryIcons; }

private:

	UOperatingSystemBaseProgram* Internal_InstallProgram(const TSoftClassPtr<UOperatingSystemBaseProgram>& TargetProgram, UOperatingSystemPartition* TargetPartition, FGenericError& OutError);
	void Internal_LoadSavedProgram(const TSoftClassPtr<UOperatingSystemBaseProgram>& TargetProgram, UOperatingSystemPartition* TargetPartition);
};
