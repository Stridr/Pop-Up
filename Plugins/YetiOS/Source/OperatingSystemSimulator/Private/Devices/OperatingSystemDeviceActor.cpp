// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Devices/OperatingSystemDeviceActor.h"
#include "OperatingSystemLogs.h"
#include "OperatingSystemMacros.h"
#include "OperatingSystemTags.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "Global/OperatingSystemStatics.h"
#include "Kismet/GameplayStatics.h"
#include "Subsystems/OperatingSystemWorldSubsystem.h"
#include "Global/OperatingSystemSaveGame.h"

DEFINE_OS_LOG(DeviceActor)

AOperatingSystemDeviceActor::AOperatingSystemDeviceActor()
	: DeviceTag(InvalidTag)
	, DeviceClass(nullptr)
	, bCreateDeviceOnBeginPlay(true)
	, bAddWidgetsToScreen(true)
	, bExitWhenDeviceIsDestroyed(true)
	, bCanSaveGame(true)
	, SaveGameClass(UOperatingSystemSaveGame::StaticClass())
	, CurrentDevice(nullptr)
{
	MainComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MainComponent"));
	MainComponent->SetupAttachment(RootComponent);

	if (!UniqueID.IsValid())
	{
		UniqueID = FGuid::NewGuid();
	}
	
	PrimaryActorTick.bCanEverTick = false;
}

#if WITH_EDITOR
void AOperatingSystemDeviceActor::PostDuplicate(bool bDuplicateForPIE)
{
	Super::PostDuplicate(bDuplicateForPIE);
	if (!bDuplicateForPIE)
	{
		UniqueID = FGuid::NewGuid();
	}
}
#endif

void AOperatingSystemDeviceActor::BeginPlay()
{
	Super::BeginPlay();
	
	if (bCreateDeviceOnBeginPlay)
	{
		FTimerDelegate TimerDelegate_CreateDevice;
		TimerDelegate_CreateDevice.BindLambda([&]
		{
			FGenericError OutError;
			CreateDevice(OutError);
			if (OutError.IsValid())
			{
				OS_LOG_ERROR(DeviceActor, FString::Printf(TEXT("Device error in %s: %s. Exception: %s"), *GetName(), *OutError.ErrorCode.ToString(), *OutError.ErrorExceptionDescription.ToString()));
			}
		});

		GetWorld()->GetTimerManager().SetTimerForNextTick(TimerDelegate_CreateDevice);
	}
	
	UOperatingSystemWorldSubsystem::Get(this)->RegisterDeviceActor(this);
}

void AOperatingSystemDeviceActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UOperatingSystemWorldSubsystem::Get(this)->UnregisterDeviceActor(this);
	
	if (IsValid(CurrentDevice))
	{
		CurrentDevice->DestroyDevice();
	}
	
	Super::EndPlay(EndPlayReason);
}

void AOperatingSystemDeviceActor::CreateDevice(FGenericError& OutError)
{
	if (CurrentDevice != nullptr)
	{
		OutError = MAKE_ERROR("ERR_DEVICE_SET", "Current device is alread set.");
		return;
	}

	if (DeviceClass.IsNull())
	{
		OutError = MAKE_ERROR("ERR_DEVICE_CLASS_NULL", "Device Class is null");
		return;
	}

	if (!UOperatingSystemStatics::IsOperatingSystemTagValid(DeviceTag))
	{
		OutError = MAKE_ERROR("DEVICE_TAG_INVALID", FString::Printf(TEXT("Device tag is not valid. It's either None or set to %s"), *InvalidTag.GetTag().ToString()));
		return;
	}

	CurrentDevice = NEW_SOFT_OBJ(UOperatingSystemBaseDevice, this, DeviceClass, Device);
	if (!IsValid(CurrentDevice))
	{
		OutError = MAKE_ERROR("ERR_DEVICE", "Create Device failed. Current device was not set.");
		return;
	}

	CurrentDevice->DeviceCreated(this, OutError);
	OnDeviceCreated.Broadcast();
}

void AOperatingSystemDeviceActor::CurrentDeviceDestroyed()
{
	K2_OnCurrentDeviceDestroyed();
	CurrentDevice->MarkAsGarbage();
	CurrentDevice = nullptr;
	
	if (bExitWhenDeviceIsDestroyed)
	{
#if WITH_EDITOR
		if (APlayerController* MyController = UGameplayStatics::GetPlayerController(this, 0))
		{
			MyController->ConsoleCommand("exit");
		}
#else
		FGenericPlatformMisc::RequestExit(false);
#endif
	}
}

void AOperatingSystemDeviceActor::RestartDevice()
{
	CurrentDevice->MarkAsGarbage();
	CurrentDevice = nullptr;

	FTimerDelegate CreateDeviceDelegate;
	FTimerHandle TimerHandle_Dummy;

	const FGenericError OutError;
	CreateDeviceDelegate.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(AOperatingSystemDeviceActor, CreateDevice), OutError);
	GetWorldTimerManager().SetTimer(TimerHandle_Dummy, CreateDeviceDelegate, 1.f, false);
}

void AOperatingSystemDeviceActor::WidgetChanged(UUserWidget* ChangedWidget)
{
	K2_OnWidgetChanged(ChangedWidget);
}

void AOperatingSystemDeviceActor::OnShowBlueScreen(const float& OnScreenTime)
{
	K2_OnBlueScreenShow(OnScreenTime);
}

UOperatingSystemBaseHardware* AOperatingSystemDeviceActor::GetHardwareByTag(const FGameplayTag& TestTag) const
{
	if (!IsValid(CurrentDevice))
	{
		return nullptr;
	}
	
	return CurrentDevice->GetHardwareByTag(TestTag);
}

void AOperatingSystemDeviceActor::SetAddWidgetsToScreen(const EOperatingSystemWidgetSet Method)
{
	bAddWidgetsToScreen = Method != EOperatingSystemWidgetSet::Disable;
	if (Method == EOperatingSystemWidgetSet::SetAndApply && IsValid(CurrentDevice))
	{
		CurrentDevice->ApplyWidgetToScreen();
	}
}

void AOperatingSystemDeviceActor::ClearWidgetFromScreen() const
{
	if (IsValid(CurrentDevice))
	{
		CurrentDevice->ClearOnScreenWidget();
	}
}

void AOperatingSystemDeviceActor::RefreshWidget() const
{
	if (IsValid(CurrentDevice))
	{
		CurrentDevice->ReApplyWidget();
	}
}

bool AOperatingSystemDeviceActor::K2_CreateDevice(FGenericError& OutError)
{
	CreateDevice(OutError);
	return !OutError.IsValid();
}
