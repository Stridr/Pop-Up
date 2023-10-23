// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "OperatingSystemTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OperatingSystemStatics.generated.h"

class UOperatingSystemUserManager;
class UOperatingSystemBaseProgram;
class UOperatingSystemDeviceMessenger;
class UOperatingSystemBaseHardware;
class AOperatingSystemDeviceActor;
class UOperatingSystem;
class UOperatingSystemFile;

UCLASS(NotBlueprintable)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

protected:

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static FString VersionToString(const FVersion& Version, const bool bIgnorePatch = false);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (CompactNodeTitle = "=="))
	static bool Equal_Version(const FVersion& VersionOne, const FVersion& VersionTwo);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (CompactNodeTitle = "<"))
	static bool LessThan_Version(const FVersion& VersionOne, const FVersion& VersionTwo);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (CompactNodeTitle = ">"))
	static bool GreaterThan_Version(const FVersion& VersionOne, const FVersion& VersionTwo);

public:

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static bool IsUniqueIdValid(const FOperatingSystemUniqueId& TestID);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static FString UniqueIdToString(const FOperatingSystemUniqueId& TestID);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static bool IsOperatingSystemTagValid(const FGameplayTag& TestTag);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static int32 GetSize(const EOperatingSystemCommonSizes& Size);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemStatics)
	static FGenericError CreateGenericError(const FText ErrorCode, const FText ErrorDescription);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemStatics, meta = (AdvancedDisplay = 4))
	static FOperatingSystemNotification CreateNotification(const FText Title, const FText Description, const EOperatingSystemNotificationCategory NotificationCategory, const EOperatingSystemNotificationType Verbosity, TSoftObjectPtr<UTexture2D> Icon, const FText Code);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (CompactNodeTitle = "MB => B"))
	static double ConvertMB_ToBytes(const float SizeInMB);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (CompactNodeTitle = "GB => B"))
	static double ConvertGB_ToBytes(const float SizeInGB);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (CompactNodeTitle = "GB => MB"))
	static float ConvertGB_ToMB(const float SizeInGB);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (CompactNodeTitle = "MB => GB"))
	static float ConvertMB_ToGB(const float SizeInMB);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (CompactNodeTitle = "B => GB"))
	static float ConvertBytes_ToGB(const double SizeInBytes);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (CompactNodeTitle = "B => MB"))
	static float ConvertBytes_ToMB(const double SizeInBytes);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (Categories = "OperatingSystem.Hardware.Type"))
	static UOperatingSystemBaseHardware* FindHardwareByTag(const AOperatingSystemDeviceActor* TargetDevice, const FGameplayTag HardwareTag);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (Categories = "OperatingSystem.Hardware.CPU.Socket"))
	static bool GetCpuSocketName(const FGameplayTag SocketTag, FText& OutValue);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemStatics)
	static void ShutdownOperatingSystem(UOperatingSystem* TargetOS);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemStatics)
	static void RestartOperatingSystem(UOperatingSystem* TargetOS);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemStatics)
	static bool AddNotification(UOperatingSystem* TargetOperatingSystem, const FOperatingSystemNotification& Notification);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemStatics, meta = (AdvancedDisplay = 3))
	static bool AddNotificationFromError(UOperatingSystem* TargetOperatingSystem, const FGenericError& Error, const EOperatingSystemNotificationCategory NotificationCategory, const EOperatingSystemNotificationType Verbosity = EOperatingSystemNotificationType::Error);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemStatics)
	static UOperatingSystemFile* OpenFile(UOperatingSystemFile* TargetFile, FGenericError& OutError);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static bool IsUserValid(const FOperatingSystemUser& TestUser);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (CompactNodeTitle = "=="))
	static bool UsersEqual(const FOperatingSystemUser& Lhs, const FOperatingSystemUser& Rhs);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (CompactNodeTitle = "!="))
	static bool UsersNotEqual(const FOperatingSystemUser& Lhs, const FOperatingSystemUser& Rhs);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static bool IsNotificationValid(const FOperatingSystemNotification& TestNotification);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (Categories = "OperatingSystem.Directory"))
	static bool GetSpecialDirectoryName(const FGameplayTag DirectoryTag, FText& OutDirectoryName);

	/**
	* public
	* static UOperatingSystemStatics::GetCpuSpeedAsText
	* Returns the CPU speed as FText.
	* @param CpuSpeedInGHz [const float&] CPU Speed in GHz.
	* @param bUseGHZ [const bool] If true return value will use GHz. If false, it will be MHz.
	* @return [FText] CPU Speed as FText.
	**/
	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static FText GetCpuSpeedAsText(const float& CpuSpeedInGHz, const bool bUseGHZ = true);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static FText GetSizeAsText(const EOperatingSystemCommonSizes Size);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static FText GenerateRandomErrorCode();

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static FText GetTimeAsText(const FDateTime& DateTime, const bool bShowSeconds = false, const EOperatingSystemTimeSeparator Separator = EOperatingSystemTimeSeparator::Colon);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static FText GetDateAsText(const FDateTime& DateTime, const EOperatingSystemDateSeparator Separator = EOperatingSystemDateSeparator::Dash);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static FString RegexExpression(const FString& TargetString, const FString RegexPattern);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemStatics)
	static EOperatingSystemPasswordStrength DeterminePasswordStrength(const FString& Input);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemStatics, meta = (WorldContext = "WorldContextObject", Categories = "OperatingSystem.Devices"))
	static AOperatingSystemDeviceActor* FindDeviceActorByTag(const UObject* WorldContextObject, const FGameplayTag TestTag);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemStatics, meta = (WorldContext = "WorldContextObject", Categories = "OperatingSystem.Devices"))
	static void FindDeviceActorsByTag(const UObject* WorldContextObject, const FGameplayTag TestTag, TArray<AOperatingSystemDeviceActor*>& OutDeviceActors);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemStatics, meta = (WorldContext = "WorldContextObject", Categories = "OperatingSystem.Devices", Keywords = "get messenger"))
	static UOperatingSystemDeviceMessenger* FindMessengerForDevice(const UObject* WorldContextObject, const FGameplayTag TestTag);
	
	UFUNCTION(BlueprintCallable, Category = OperatingSystemStatics, meta = (Keywords = "get messenger"))
	static UOperatingSystemDeviceMessenger* FindMessengerFromOperatingSystem(const UOperatingSystem* TargetOS);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics, meta = (WorldContext = "WorldContextObject", Keywords = "find, database"))
	static UOperatingSystemUserManager* GetUserManager(const UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category = OperatingSystemStatics)
	static bool IsProgramClassCompatibleWithOS(const TSubclassOf<UOperatingSystemBaseProgram> ProgramClass, const UOperatingSystem* TargetOS, FGenericError& OutError);
	
	static FString GetPathDelimiter(const UOperatingSystem* TargetOS);
};
