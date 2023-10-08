// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "OperatingSystemTypes.h"
#include "GameFramework/Actor.h"
#include "OperatingSystemDeviceActor.generated.h"

class UOperatingSystemBaseDevice;
class UOperatingSystemSaveGame;
class UOperatingSystemBaseHardware;

UENUM()
enum class EOperatingSystemWidgetSet : uint8
{
	Disable,
	SetOnly,
	SetAndApply
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeviceCreated);

UCLASS()
class OPERATINGSYSTEMSIMULATOR_API AOperatingSystemDeviceActor : public AActor
{
	GENERATED_BODY()

protected:

	UPROPERTY()
	TObjectPtr<USceneComponent> MainComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemDeviceActor, meta = (Categories = "OperatingSystem.Devices"))
	FGameplayTag DeviceTag;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDeviceActor)
	TSoftClassPtr<UOperatingSystemBaseDevice> DeviceClass;

	UPROPERTY(EditAnywhere, Category = OperatingSystemDeviceActor)
	uint8 bCreateDeviceOnBeginPlay : 1;

	UPROPERTY(EditAnywhere, Category = OperatingSystemDeviceActor)
	uint8 bAddWidgetsToScreen : 1;

	UPROPERTY(EditAnywhere, Category = OperatingSystemDeviceActor)
	uint8 bExitWhenDeviceIsDestroyed : 1;

	UPROPERTY(EditAnywhere, Category = OperatingSystemDeviceActor, AdvancedDisplay)
	uint8 bCanSaveGame : 1;

	UPROPERTY(EditAnywhere, Category = OperatingSystemDeviceActor, AdvancedDisplay, meta = (EditCondition = bCanSaveGame))
	TSoftClassPtr<UOperatingSystemSaveGame> SaveGameClass;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Debug)
	TObjectPtr<UOperatingSystemBaseDevice> CurrentDevice;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	FGuid UniqueID;

public:

	UPROPERTY(BlueprintAssignable, Category = OperatingSystemDeviceActor)
	FOnDeviceCreated OnDeviceCreated;

	AOperatingSystemDeviceActor();

#if WITH_EDITOR
	virtual void PostDuplicate(bool bDuplicateForPIE) override;
#endif

	template <class T>
	T* GetCastedDevice() 
	{ 
		static_assert(TIsDerivedFrom<T, UOperatingSystemBaseDevice>::IsDerived, "GetCastedDevice() can only be used on classes derived from UOperatingSystemBaseDevice.");
		return Cast<T>(this);
	}

protected:

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	
	UFUNCTION()
	void CreateDevice(FGenericError& OutError);

	void CurrentDeviceDestroyed();
	void RestartDevice();

	void WidgetChanged(UUserWidget* ChangedWidget);
	void OnShowBlueScreen(const float& OnScreenTime);

	UOperatingSystemBaseHardware* GetHardwareByTag(const FGameplayTag& TestTag) const;

	UFUNCTION(BlueprintCallable, Category = OperatingSystemDeviceActor)
	void SetAddWidgetsToScreen(const EOperatingSystemWidgetSet Method);

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = OperatingSystemDeviceActor)
	void ClearWidgetFromScreen() const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = OperatingSystemDeviceActor)
	void RefreshWidget() const;

protected:

	UFUNCTION(BlueprintCallable, Category = OperatingSystemDeviceActor, DisplayName = "Create Device")
	bool K2_CreateDevice(FGenericError& OutError);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemDeviceActor, DisplayName = "On Current Device Destroyed")
	void K2_OnCurrentDeviceDestroyed();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemDeviceActor, DisplayName = "On Widget Changed")
	void K2_OnWidgetChanged(UUserWidget* ChangedWidget);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemDeviceActor, DisplayName = "On Bsod Screen Shown")
	void K2_OnBlueScreenShow(const float& OnScreenTime);

public:

	FORCEINLINE const FGameplayTag& GetDeviceTag() const { return DeviceTag; }
	FORCEINLINE bool CanAddWidgetsToScreen() const { return bAddWidgetsToScreen; }
	FORCEINLINE bool CanSaveGame() const { return bCanSaveGame; }
	FORCEINLINE TSoftClassPtr<UOperatingSystemSaveGame> GetSaveGameClass() const { return SaveGameClass; }
	FORCEINLINE FString GetDeviceActorUniqueID() const { return UniqueID.ToString(); }
};
