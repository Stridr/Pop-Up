// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "UObject/Object.h"
#include "OperatingSystemTypes.h"
#include "GameplayTagContainer.h"
#include "OperatingSystemBaseProgram.generated.h"

class UOperatingSystemTaskbarButton;
class UOperatingSystemProgramIconWidget;
class UOperatingSystemProgramWidget;
class UOperatingSystemProgramSettings;
class UOperatingSystem;
class UDraggableWindow;
class UOperatingSystemProgramData;
class UOperatingSystemPartition;
class UOperatingSystemFile;

UENUM()
enum class EProgramSaveMethod : uint8
{
	/** Save automatically when Operating System is shutting down. */
	SaveOnOperatingSystemShutdown,

	/** Save automatically whenever this program is closed. Also saves on operating system shutdown since the program exits at shutdown. */
	SaveOnExit,

	/** No automatic saving. Player has to manually save settings using SaveSettinsg() method. */
	SaveManually,

	/** Do not save at all. */
	DoNotSave
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOperatingSystemProgramViewStateChanged, const EOperatingSystemProgramViewState&, CurrentViewState);

UCLASS(Within=OperatingSystem, Abstract, Blueprintable, BlueprintType)
class UOperatingSystemBaseProgram : public UObject
{
	GENERATED_BODY()

protected:

	/** Name of this program. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemProgram)
	FText Name;

	/** The company or individual who created this program. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemProgram)
	FText Author;

	/** A simple description for this program. Typically used on store apps. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemProgram, meta = (MultiLine))
	FText Description;

	/** A unique identifier (UID) for this program. Useful for terminal commands. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemProgram)
	FName Identifier;

	/** Program version */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemProgram)
	FVersion Version;

	/** Only for store app. Overrides the name to show on store. If this is unset, Name property is used. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemProgramStore)
	FText StoreDisplayName;

	/** Only for store app. What category or type is this program? Example: Entertainment, Productivity, Financial, Game, Utilities, Tool etc. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemProgramStore)
	FText StoreType;

	/** Only for store app. What price should be displayed on store. Set to 0 to make this free. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemProgramStore)
	float StorePrice;

	/** If this container is empty, it is assumed all Operating Systems are supported. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgram, meta = (Categories = "OperatingSystem.Type"))
	FGameplayTagContainer SupportedOperatingSystems;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgram, meta = (InlineEditConditionToggle))
	uint8 bRequireMinOperatingSystemVersion : 1;

	/** If enabled, this program will not install/run on an Operating System less than this version. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgram, meta = (EditCondition = bRequireMinOperatingSystemVersion))
	FVersion MinOperatingSystemVersion;

	/** Obvious right? C'mon its just an Icon. What you need a tooltip for ¯\_(ツ)_/¯ */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemProgram, meta = (DisplayThumbnail = "true", AllowedClasses = "Texture,MaterialInterface"))
	TSoftObjectPtr<UObject> IconObject;

	/** How much space does this program consume once installed. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgram, meta = (ForceUnits = "MB"))
	float SpaceRequiredInMB;

	/** Icon widget that represents this program. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgramWidgets)
	TSoftClassPtr<UOperatingSystemProgramIconWidget> IconWidgetClass;

	/** Widget associated with this program. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgramWidgets)
	TSoftClassPtr<UOperatingSystemProgramWidget> WidgetClass;

	/** Determines when this program saves. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgram)
	EProgramSaveMethod SaveMethod;
	
	/** An optional class where you can save custom settings for this program. Example: Customizable options for a browser. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgram, meta = (EditCondition = "SaveMethod != EProgramSaveMethod::DoNotSave"))
	TSoftClassPtr<UOperatingSystemProgramSettings> SettingsClass;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgram)
	TSoftClassPtr<UOperatingSystemProgramData> DataClass;

	/** If true, then this program must have a valid data class set and the data object must return ShouldCreate true (by default it is). If not, program will not create. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgram)
	uint8 bRequiresData : 1;

	/** If true, add this program to the desktop after install. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgram)
	uint8 bAddToDesktop : 1;

	/** If true, add a notification to the Operating System that this program installed. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgram)
	uint8 bCreateNotification : 1;

	/** If true, only one instance of this program is allowed to run. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemProgram)
	uint8 bSingleInstanceOnly : 1;

	/** Some programs might need access to its settings class before they are started.
	* For example, to determine if the program itself should start automatically when os is started. In this case, you need to enable this.
	* @See: K2_OnSettingsLoad
	*/
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgram)
	uint8 bCreateSettingsBeforeStarting : 1;

	/** Disables auto determining and set the window size as set by Override Window Size variable. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemProgram, meta = (InlineEditConditionToggle))
	uint8 bOverrideWindowSize : 1;

	/** Forcefully set a window size instead of auto-determining */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemProgram, meta = (EditCondition = bOverrideWindowSize))
	FVector2D OverrideWindowSize;

	/** If not null, then use this class as draggable window when starting this program. If null, new window class should be set inside UOperatingSystemWidget::K2_CreateNewWindow */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemProgramWidgets)
	TSoftClassPtr<UDraggableWindow> OverrideWindowClass;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemProgramWidgets)
	TSoftClassPtr<UOperatingSystemTaskbarButton> TaskbarButtonClass;

private:

	/** True if this program was installed by default when installing Operating System. */
	UPROPERTY(VisibleInstanceOnly, Category = OperatingSystemProgramDebug)
	uint8 bIsSystemInstalledProgram : 1;

	uint8 bHasBlueprintOnCreate : 1;
	uint8 bHasBlueprintOnInstall : 1;
	uint8 bHasBlueprintOnStart : 1;
	uint8 bHasBlueprintOnClose : 1;
	uint8 bHasBlueprintOnSettingsLoad : 1;
	uint8 bHasBlueprintOnOpenFile : 1;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = OperatingSystemProgramDebug, meta = (AllowPrivateAccess = true))
	TObjectPtr<UOperatingSystemProgramWidget> ProgramWidget;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = OperatingSystemProgramDebug, meta = (AllowPrivateAccess = true))
	TObjectPtr<UOperatingSystemProgramSettings> Settings;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = OperatingSystemProgramDebug, meta = (AllowPrivateAccess = true))
	TObjectPtr<UOperatingSystemProgramData> DataObj;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = OperatingSystemProgramDebug, meta = (AllowPrivateAccess = true))
	TObjectPtr<UOperatingSystemFile> ChildFile;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = OperatingSystemProgramDebug)
	TWeakObjectPtr<UOperatingSystem> ParentOS;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = OperatingSystemProgramDebug)
	TObjectPtr<UDraggableWindow> ParentWindow;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = OperatingSystemProgramDebug, meta = (AllowPrivateAccess = true))
	TObjectPtr<UOperatingSystemTaskbarButton> TaskbarButton;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = OperatingSystemProgramDebug, meta = (AllowPrivateAccess = true))
	int32 ProcessID;

	UPROPERTY()
	TObjectPtr<UOperatingSystemProgramIconWidget> CachedIconWidget;

protected:

	UPROPERTY(BlueprintReadOnly, Transient, Category = OperatingSystemProgramDebug)
	TWeakObjectPtr<UOperatingSystemPartition> ParentPartition;

public:

	UPROPERTY(BlueprintAssignable, Category = OperatingSystemProgramDelegates)
	FOnOperatingSystemProgramViewStateChanged OnOperatingSystemProgramViewStateChanged;

	UOperatingSystemBaseProgram();

	UE_NODISCARD static UOperatingSystemBaseProgram* CreateProgram(TWeakObjectPtr<UOperatingSystem> OwningOS,
		const TSoftClassPtr<UOperatingSystemBaseProgram>& ProgramClass, 
		FGenericError& OutError, const bool bInstalledWithOS = false);

	UFUNCTION(BlueprintPure, Category = OperatingSystemProgram)
	static OPERATINGSYSTEMSIMULATOR_API bool IsStoreItemFree(const FOperatingSystemStoreProgramData& ProgramData);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemProgram)
	UOperatingSystemBaseProgram* StartProgram(FGenericError& OutError);

	UFUNCTION(BlueprintPure, Category = OperatingSystemProgram)
	bool IsRunning() const;

	UFUNCTION(BlueprintPure, Category = OperatingSystemProgram)
	bool CanAddToDesktop() const;

	UFUNCTION(BlueprintPure, Category = OperatingSystemProgram, meta = (Keywords = "parent, owner, os"))
	UOperatingSystem* GetOperatingSystem() const;

	UFUNCTION(BlueprintCallable, Category = OperatingSystemProgram)
	UOperatingSystemProgramIconWidget* CreateIconWidget();

	UFUNCTION(BlueprintPure, Category = OperatingSystemProgram)
	UOperatingSystemProgramIconWidget* GetIconWidget() const;

	void OpenFile(UOperatingSystemFile* TargetFile, FGenericError& OutError);
	void CloseProgram(FGenericError& OutError);

	UDraggableWindow* GetParentWindow() const;

private:

	void Internal_Validate(FGenericError& OutError) const;
	void Internal_LoadProgramSettings(FGenericError& OutError);

protected:

	OPERATINGSYSTEMSIMULATOR_API virtual void OnValidate(FGenericError& OutError) const {}
	OPERATINGSYSTEMSIMULATOR_API virtual void OnStart(FGenericError& OutError) {}
	OPERATINGSYSTEMSIMULATOR_API virtual void OnClose(FGenericError& OutError) {}

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemProgram, DisplayName = OnCreate)
	void K2_OnCreate();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemProgram, DisplayName = OnInstall)
	void K2_OnInstall();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemProgram, DisplayName = OnStart)
	FGenericError K2_OnStart();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemProgram, DisplayName = OnClose)
	void K2_OnClose();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemProgram, DisplayName = OnSettingsLoad)
	void K2_OnSettingsLoad(UOperatingSystemProgramSettings* LoadedSettings);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemProgram, DisplayName = OnOpenFile)
	void K2_OnOpenFile();

public:
	
	void IsCompatibleWithOS(const TWeakObjectPtr<const UOperatingSystem> TestOS, FGenericError& OutError) const;

	bool CanSaveSettings() const;
	void SetParentPartition(TWeakObjectPtr<UOperatingSystemPartition> OwningPartition);

	void OnProgramWindowStateChanged(const EOperatingSystemProgramViewState& NewState);

	OPERATINGSYSTEMSIMULATOR_API virtual FString GetSaveSlotName() const;

	TWeakObjectPtr<UOperatingSystemPartition> GetParentPartition() const;
	TSoftClassPtr<UOperatingSystemProgramIconWidget> GetIconWidgetClass() const;
	TSoftClassPtr<UOperatingSystemProgramWidget> GetWidgetClass() const;
	TSoftClassPtr<UOperatingSystemProgramSettings> GetSettingsClass() const;
	TSoftClassPtr<UOperatingSystemProgramData> GetDataClass() const;
	TSoftClassPtr<UOperatingSystemTaskbarButton> GetTaskbarButtonClass() const;
	TWeakObjectPtr<UOperatingSystemProgramSettings> GetSettings() const;
	TWeakObjectPtr<UOperatingSystemProgramData> GetDataObj() const;
	TWeakObjectPtr<UOperatingSystemTaskbarButton> GetTaskbarButton() const;

	template<class T>
	T* GetDataObj() const
	{
		static_assert(TIsDerivedFrom<T, UOperatingSystemProgramData>::Value, "T not derived from UOperatingSystemProgramData!");
		return Cast<T>(DataObj);
	}

	FORCEINLINE FString GetProgramName() const { return Name.ToString(); }
	FORCEINLINE FName GetIdentifier() const { return Identifier; }
	FORCEINLINE bool IsSingleInstanceProgram() const { return bSingleInstanceOnly; }
	FORCEINLINE bool IsSystemInstalledProgram() const { return bIsSystemInstalledProgram; }
	FORCEINLINE uint32 GetProcessID() const { return ProcessID; }
	FORCEINLINE float GetSpaceRequiredInMB() const { return SpaceRequiredInMB; }
};
