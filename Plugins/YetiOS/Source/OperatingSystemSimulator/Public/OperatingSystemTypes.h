// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include <string>

#if OS_UNREAL_VERSION >= 503
#include "Runtime/Launch/Resources/Version.h"
#else
#include "Launch/Resources/Version.h"
#endif

#include "Engine/Texture2D.h"
#include "UObject/SoftObjectPtr.h"
#include "OperatingSystemTypes.generated.h"

UENUM(BlueprintType)
enum class EOperatingSystemProgramViewState : uint8
{
	Focused,
	NotFocused,
	Minimized,
	MinimizedAndNotFocused,
	None
};

UENUM()
enum class EOperatingSystemPasswordStrength : uint8
{
	Strong,
	Moderate,
	Weak
};

UENUM(BlueprintType)
enum class EOperatingSystemSizeMethod : uint8
{
	Bytes,
	MB,
	GB
};

UENUM(BlueprintType)
enum class EOperatingSystemNotificationType : uint8
{
	None,
	Info,
	Warning,
	Error,
	Verbose,
	VeryVerbose
};

UENUM(BlueprintType)
enum class EOperatingSystemTerminalMessageType : uint8
{
	Normal,
	Warning,
	Error
};

UENUM(BlueprintType)
enum class EOperatingSystemNotificationCategory : uint8
{
	None,
	Device,
	OperatingSystem,
	Application
};

UENUM(BlueprintType)
enum class EOperatingSystemDeviceState : uint8
{
	/** No state */
	None,

	/** Very first stage. Think of this as powering on. */
	Starting,

	/** Powering up BIOS. Checks for hardware's, compatibility etc. */
	BIOS,

	/** Device running state. Can be Operating System installation, loading, desktop, programs etc. */
	Running,

	/** Device is restarting. */
	Restarting,

	/** Device is shutting down. */
	ShuttingDown,

	/** Device is in Blue Screen state. No interaction should be allowed at this stage. */
	BSOD
};

UENUM()
enum class EOperatingSystemCommonSizes : uint8
{
	None		= 0,
	Size64		= 6,
	Size128		= 7,
	Size256		= 8,
	Size512		= 9,
	Size1024	= 10,
	Size2048	= 11,
	Size4096	= 12,
	Size8192	= 13,
	Size16384	= 14,
	Size32768	= 15
};

UENUM()
enum class EOperatingSystemDateSeparator : uint8
{
	Slash		UMETA(DisplayName = "/"),
	Dash		UMETA(DisplayName = "-"),
	Period		UMETA(DisplayName = "."),
	Comma		UMETA(DisplayName = ",")
};

UENUM()
enum class EOperatingSystemTimeSeparator : uint8
{
	Colon		UMETA(DisplayName = ":"),
	Period		UMETA(DisplayName = "."),
};

USTRUCT(BlueprintType)
struct OPERATINGSYSTEMSIMULATOR_API FGenericError
{
	GENERATED_BODY()

	/** Typically an error code like ERR_SOMETHING_HAPPENED or 0x77000111 etc. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GenericError)
	FText ErrorCode;

	/** Optional exception description. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GenericError)
	FText ErrorExceptionDescription;

private:
	
	UPROPERTY(BlueprintReadOnly, Category = GenericError, meta = (AllowPrivateAccess = true))
	bool bIsValid;

public:
	
	FORCEINLINE bool IsValid() const { return bIsValid; }

	FORCEINLINE void Reset()
	{
		ErrorCode = ErrorExceptionDescription = FText();
		bIsValid = false;
	}

	FGenericError()
		: ErrorCode(FText())
		, ErrorExceptionDescription(FText())
		, bIsValid(false)
	{
	}

	FGenericError(const FText& ErrorCode)
		: ErrorCode(ErrorCode)
		, ErrorExceptionDescription(FText())
		, bIsValid(!ErrorCode.IsEmptyOrWhitespace())
	{
		ensureMsgf(bIsValid, TEXT("ErrorCode was empty. Make sure you set ErrorCode."));
	}

	FGenericError(const FText& ErrorCode, const FText& ErrorExceptionDescription)
		: ErrorCode(ErrorCode)
		, ErrorExceptionDescription(ErrorExceptionDescription)
		, bIsValid(!ErrorCode.IsEmptyOrWhitespace() && !ErrorExceptionDescription.IsEmptyOrWhitespace())
	{
		ensureMsgf(bIsValid, TEXT("ErrorCode or ErrorExceptionDescription was empty. Make sure you set them."));
	}
};

USTRUCT(BlueprintType)
struct OPERATINGSYSTEMSIMULATOR_API FOperatingSystemUser
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = User)
	FText Username;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = User)
	FText Password;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = User)
	FText Email;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = User)
	FText FirstName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = User)
	FText LastName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = User, meta = (DisplayThumbnail = true, AllowedClasses = "Texture, MaterialInterface"))
	TSoftObjectPtr<UObject> Icon;

	FORCEINLINE bool IsValid() const
	{
		return !Username.IsEmptyOrWhitespace();
	}

	FORCEINLINE bool operator==(const FOperatingSystemUser& Other) const
	{
		return Username.EqualTo(Other.Username) && Password.EqualTo(Other.Password) && Email.EqualTo(Other.Email) && FirstName.EqualTo(Other.FirstName) && LastName.EqualTo(Other.LastName);
	}

	friend uint32 GetTypeHash(const FOperatingSystemUser& Other)
	{
		return GetTypeHash(Other.Username.ToString()) ^ GetTypeHash(Other.Password.ToString()) ^ GetTypeHash(Other.Email.ToString()) ^ GetTypeHash(Other.FirstName.ToString()) ^ GetTypeHash(Other.LastName.ToString());
	}

	FOperatingSystemUser()
		: Username(FText())
		, Password(FText())
		, Email(FText())
		, FirstName(FText())
		, LastName(FText())
		, Icon(nullptr)
	{
	}

	FOperatingSystemUser(const FText& Username)
		: Username(Username)
		, Password(FText())
		, Email(FText())
		, FirstName(FText())
		, LastName(FText())
		, Icon(nullptr)
	{
	}

	FOperatingSystemUser(const FText& Username, const UObject* Icon)
		: Username(Username)
		, Password(FText())
		, Email(FText())
		, FirstName(FText())
		, LastName(FText())
		, Icon(Icon)
	{
	}

	FOperatingSystemUser(const FText& Username, const FText& Password)
		: Username(Username)
		, Password(Password)
		, Email(FText())
		, FirstName(FText())
		, LastName(FText())
		, Icon(nullptr)
	{
	}

	FOperatingSystemUser(const FText& Username, const FText& Password, const UObject* Icon)
		: Username(Username)
		, Password(Password)
		, Email(FText())
		, FirstName(FText())
		, LastName(FText())
		, Icon(Icon)
	{
	}

	FOperatingSystemUser(const FString& Username)
		: FOperatingSystemUser(FText::FromString(Username))
	{
	}

	FOperatingSystemUser(const FString& Username, const UObject* Icon)
		: FOperatingSystemUser(FText::FromString(Username), Icon)
	{
	}

	FOperatingSystemUser(const FString& Username, const FString& Password)
		: FOperatingSystemUser(FText::FromString(Username), FText::FromString(Password))
	{
	}

	FOperatingSystemUser(const FString& Username, const FString& Password, const UObject* Icon)
		: FOperatingSystemUser(FText::FromString(Username), FText::FromString(Password), Icon)
	{
	}
};

USTRUCT(BlueprintType)
struct OPERATINGSYSTEMSIMULATOR_API FOperatingSystemRangeTime
{
	GENERATED_BODY()

private:
	/** Min time (in seconds) to calculate time. Must be >= 0 and <= MaxTime */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InstallationTime, meta = (ForceUnits = "Seconds", AllowPrivateAccess = true))
	float MinTime;
	
	/** Max time (in seconds) to calculate time. Must be > 0 and >= MinTime */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InstallationTime, meta = (ForceUnits = "Seconds", AllowPrivateAccess = true))
	float MaxTime;

public:
	
	FORCEINLINE bool IsValid() const { return MinTime >= 0.f && MaxTime > UE_KINDA_SMALL_NUMBER && MinTime <= MaxTime; }
	FORCEINLINE float GetTime(const float FallbackTime = 1.f) const
	{
		if (IsValid())
		{
			return FMath::FRandRange(MinTime, MaxTime);
		}

		return FallbackTime > UE_KINDA_SMALL_NUMBER ? FallbackTime : 1.f;
	}

	FOperatingSystemRangeTime()
		: MinTime(0.f)
		, MaxTime(1.f)
	{
	}

	FOperatingSystemRangeTime(const float& MinTime, const float& MaxTime)
		: MinTime(MinTime)
		, MaxTime(MaxTime)
	{
	}
};

USTRUCT(BlueprintType)
struct OPERATINGSYSTEMSIMULATOR_API FVersion
{
	GENERATED_BODY();

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Version", meta = (AllowPrivateAccess = "true"))
	uint8 Major;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Version", meta = (AllowPrivateAccess = "true"))
	int32 Minor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Version", meta = (AllowPrivateAccess = "true"))
	int32 Patch;

public:

	FORCEINLINE bool IsValid() const
	{
		if (Major > 0)
		{
			return true;
		}

		if (Minor > 0)
		{
			return true;
		}

		if (Patch > 0)
		{
			return true;
		}

		return false;
	}

	FORCEINLINE const FString ToString() const
	{
		return ToString(false);
	}

	FORCEINLINE const FString ToString(const bool bIgnorePatch) const
	{
		if (bIgnorePatch)
		{
			return FString::Printf(TEXT("%i.%i"), Major, Minor);
		}

		return FString::Printf(TEXT("%i.%i.%i"), Major, Minor, Patch);
	}

	FORCEINLINE bool operator==(const FVersion& Other) const
	{
		return Internal_IsSameVersion(*this, Other);
	}

	FORCEINLINE bool operator<(const FVersion& Other) const
	{
		return Internal_IsVersionOneSmaller(*this, Other);
	}

	FORCEINLINE bool operator>(const FVersion& Other) const
	{
		return Internal_IsVersionTwoSmaller(*this, Other);
	}

private:

	static FORCEINLINE bool Internal_IsSameVersion(const FVersion& VersionOne, const FVersion& VersionTwo)
	{
		return Internal_VersionCompare(VersionOne, VersionTwo) == 0;
	}

	static FORCEINLINE bool Internal_IsVersionOneSmaller(const FVersion& VersionOne, const FVersion& VersionTwo)
	{
		return Internal_VersionCompare(VersionOne, VersionTwo) < 0;
	}

	static FORCEINLINE bool Internal_IsVersionTwoSmaller(const FVersion& VersionOne, const FVersion& VersionTwo)
	{
		return Internal_VersionCompare(VersionOne, VersionTwo) > 0;
	}

	static FORCEINLINE_DEBUGGABLE const int32 Internal_VersionCompare(const FVersion& VersionOne, const FVersion& VersionTwo)
	{
		const std::string v1 = std::string(TCHAR_TO_UTF8(*VersionOne.ToString()));
		const std::string v2 = std::string(TCHAR_TO_UTF8(*VersionTwo.ToString()));
		int32 vnum1 = 0, vnum2 = 0;

		for (int32 i = 0, j = 0; (i < v1.length() || j < v2.length());)
		{
			while (i < v1.length() && v1[i] != '.')
			{
				vnum1 = vnum1 * 10 + (v1[i] - '0');
				i++;
			}

			while (j < v2.length() && v2[j] != '.')
			{
				vnum2 = vnum2 * 10 + (v2[j] - '0');
				j++;
			}

			if (vnum1 > vnum2)
			{
				return 1;
			}

			if (vnum2 > vnum1)
			{
				return -1;
			}

			vnum1 = vnum2 = 0;
			i++;
			j++;
		}

		return 0;
	}

public:

	FVersion()
		: Major(1)
		, Minor(0)
		, Patch(0)
	{
	}

	FVersion(const uint8 Major)
		: Major(Major)
		, Minor(0)
		, Patch(0)
	{
	}

	FVersion(const uint8 Major, const uint8 Minor)
		: Major(Major)
		, Minor(Minor)
		, Patch(0)
	{
	}

	FVersion(const uint8 Major, const uint8 Minor, const uint8 Patch)
		: Major(Major)
		, Minor(Minor)
		, Patch(Patch)
	{
	}
};

USTRUCT(BlueprintType)
struct OPERATINGSYSTEMSIMULATOR_API FOperatingSystemNotification
{
	GENERATED_BODY()

	/** A title for the notification. Something that makes sense. */
	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemNotification)
	FText Title;

	/** A short description of this notification. Typically less than 255 characters but recommended to keep it under 100 characters.. */
	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemNotification)
	FText Description;

	/** A code like ERR_SOMETHING, ACCESS_DENIED, 0x000FFFD456D or anything like that. */
	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemNotification)
	FText Code;

	/** Local date and time on this computer. This will be according to your computer's time zone and daylight saving settings. */
	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemNotification)
	FText TimeStamp;

	/** An optional icon. */
	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemNotification)
	TSoftObjectPtr<UTexture2D> Icon;

	/** What type of notification is this? */
	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemNotification)
	EOperatingSystemNotificationType Level;

	/** What generated this notification? */
	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemNotification)
	EOperatingSystemNotificationCategory Category;

	FORCEINLINE bool IsValid() const
	{
		FDateTime OutTime;
		if (!FDateTime::Parse(TimeStamp.ToString(), OutTime))
		{
			return false;
		}
		
		return !Title.IsEmptyOrWhitespace() && Level != EOperatingSystemNotificationType::None && Category != EOperatingSystemNotificationCategory::None;
	}

	FORCEINLINE bool IsWarning() const { return Level == EOperatingSystemNotificationType::Warning; }
	FORCEINLINE bool IsError() const { return Level == EOperatingSystemNotificationType::Error; }

	FOperatingSystemNotification()
		: Title(FText())
		, Description(FText())
		, Code(FText())
		, TimeStamp(FText())
		, Icon(nullptr)
		, Level(EOperatingSystemNotificationType::None)
		, Category(EOperatingSystemNotificationCategory::None)
	{
	}

	FOperatingSystemNotification(const FText& Title, const EOperatingSystemNotificationCategory& Category)
		: Title(Title)
		, Description(FText())
		, Code(FText())
		, TimeStamp(FText::AsCultureInvariant(FDateTime::Now().ToString()))
		, Icon(nullptr)
		, Level(EOperatingSystemNotificationType::Info)
		, Category(Category)
	{
	}

	FOperatingSystemNotification(const FText& Title, const EOperatingSystemNotificationCategory& Category, const EOperatingSystemNotificationType& Verbosity)
		: Title(Title)
		, Description(FText())
		, Code(FText())
		, TimeStamp(FText::AsCultureInvariant(FDateTime::Now().ToString()))
		, Icon(nullptr)
		, Level(Verbosity)
		, Category(Category)
	{
	}

	FOperatingSystemNotification(const FText& Title, const FText& Desciption, const EOperatingSystemNotificationCategory& Category)
		: Title(Title)
		, Description(Desciption)
		, Code(FText())
		, TimeStamp(FText::AsCultureInvariant(FDateTime::Now().ToString()))
		, Icon(nullptr)
		, Level(EOperatingSystemNotificationType::Info)
		, Category(Category)
	{
	}

	FOperatingSystemNotification(const FText& Title, const FText& Desciption, const FText& Code, const EOperatingSystemNotificationCategory& Category)
		: Title(Title)
		, Description(Desciption)
		, Code(Code)
		, TimeStamp(FText::AsCultureInvariant(FDateTime::Now().ToString()))
		, Icon(nullptr)
		, Level(EOperatingSystemNotificationType::Info)
		, Category(Category)
	{
	}
};

USTRUCT(BlueprintType)
struct FOperatingSystemUniqueId
{
	GENERATED_BODY()

private:
	
	TOptional<FString> UniqueId;

public:

	FOperatingSystemUniqueId() 
		: UniqueId(TOptional<FString>())
	{
	}

	FOperatingSystemUniqueId(const FString& UniqueId)
		: UniqueId(UniqueId)
	{
	}
	
	static FORCEINLINE FOperatingSystemUniqueId GenerateNewId()
	{
		const FDateTime UTC = FDateTime::UtcNow();
		return FString::Printf(TEXT("%i%i%i%i%i%i%i"), UTC.GetYear(), UTC.GetMonth(), UTC.GetDay(), UTC.GetHour(), UTC.GetMinute(), UTC.GetSecond(), UTC.GetMillisecond());
	}

	FORCEINLINE bool IsValid() const { return UniqueId.IsSet(); }
	FORCEINLINE bool GetID(FString& OutID) const 
	{
		if (UniqueId.IsSet())
		{
			OutID = UniqueId.GetValue();
			return true;
		}

		OutID = "";
		return false;
	}

	FORCEINLINE FString ToString() const
	{
		FString OutID;
		if (GetID(OutID))
		{
			return OutID;
		}

		return "";
	}

	FORCEINLINE bool operator==(const FOperatingSystemUniqueId& Other) const
	{
		if (UniqueId.IsSet() && Other.UniqueId.IsSet())
		{
			return UniqueId.GetValue() == Other.UniqueId.GetValue();
		}

		return false;
	}
};

struct FOperatingSystemSizeInMB
{
	const double SizeInBytes;

	static FORCEINLINE double GetValue(const double& TestSizeInBytes) { return TestSizeInBytes / 1000000; }

	FOperatingSystemSizeInMB()
		: SizeInBytes(0)
	{
	}

	FOperatingSystemSizeInMB(const double Size)
		: SizeInBytes(Size * 1000000)
	{
	}
};

struct FOperatingSystemSizeInGB
{
	const double SizeInBytes;

	static FORCEINLINE double GetValue(const double& TestSizeInBytes) { return TestSizeInBytes / 1000000000; }

	FOperatingSystemSizeInGB()
		: SizeInBytes(0)
	{
	}
	
	FOperatingSystemSizeInGB(const double Size)
		: SizeInBytes(Size * 1000000000)
	{
	}
};

USTRUCT()
struct FOperatingSystemFilesSaveLoad
{
	GENERATED_BODY()

	UPROPERTY()
	FString ClassPath;

	UPROPERTY()
	FString Name;

	UPROPERTY()
	FString Extension;

	FOperatingSystemFilesSaveLoad() = default;
};

USTRUCT()
struct FOperatingSystemDirectoriesSaveLoad
{
	GENERATED_BODY()

	UPROPERTY()
	FString SaveLoad_Path;

	UPROPERTY()
	FString SaveLoad_Name;

	UPROPERTY()
	FString SaveLoad_DirectoryClass;

	UPROPERTY()
	TArray<FOperatingSystemFilesSaveLoad> SaveLoad_Files;
};

USTRUCT()
struct FOperatingSystemPartitionSaveLoad
{
	GENERATED_BODY()

	UPROPERTY()
	FString SaveLoad_DiskName;

	UPROPERTY()
	FString SaveLoad_DiskLetter;

	UPROPERTY()
	double SaveLoad_TotalSizeInBytes;
	
	UPROPERTY()
	double SaveLoad_FreeSpaceInBytes;

	UPROPERTY()
	bool bSaveLoad_IsSystemPartition;

	UPROPERTY()
	FString SaveLoad_PartitionID;

	UPROPERTY()
	TArray<FOperatingSystemDirectoriesSaveLoad> SaveLoad_Directories;

	FOperatingSystemPartitionSaveLoad()
		: SaveLoad_DiskName("")
		, SaveLoad_DiskLetter("")
		, SaveLoad_TotalSizeInBytes(0)
		, SaveLoad_FreeSpaceInBytes(0)
		, bSaveLoad_IsSystemPartition(false)
		, SaveLoad_PartitionID("")
		, SaveLoad_Directories({})
	{
	}
};

USTRUCT()
struct FOperatingSystemProgramSaveLoad
{
	GENERATED_BODY()

	UPROPERTY()
	FString ClassPath;

	UPROPERTY()
	FString PartitionID;

	FOperatingSystemProgramSaveLoad() = default;
};

USTRUCT()
struct FOperatingSystemSaveLoad
{
	GENERATED_BODY()

	UPROPERTY()
	FVersion SaveLoad_Version;

	UPROPERTY()
	uint8 bIsStartingForTheFirstTime : 1;

	UPROPERTY()
	uint8 bAutoLogin : 1;

	UPROPERTY()
	TArray<FOperatingSystemUser> SaveLoad_Users;

	UPROPERTY()
	FString SaveLoad_PartitionID;

	UPROPERTY()
	FString SaveLoad_OperatingSystemName;

	UPROPERTY()
	FString SaveLoad_OperatingSystemID;

	UPROPERTY()
	FString SaveLoad_DeviceName;

	UPROPERTY()
	TArray<FOperatingSystemProgramSaveLoad> InstalledPrograms;

	FOperatingSystemSaveLoad() 
		: SaveLoad_Version({})
		, bIsStartingForTheFirstTime(false)
		, bAutoLogin(false)
		, SaveLoad_Users({})
		, SaveLoad_PartitionID("")
		, SaveLoad_OperatingSystemName("")
		, SaveLoad_OperatingSystemID("")
		, SaveLoad_DeviceName("")
	{
	}
};

USTRUCT()
struct FOperatingSystemDeviceSaveLoad
{
	GENERATED_BODY()

	UPROPERTY()
	uint8 bSaveLoad_OperatingSystemInstalled : 1;

	UPROPERTY()
	FOperatingSystemSaveLoad SaveLoad_OperatingSystem;

	UPROPERTY()
	TArray<FOperatingSystemPartitionSaveLoad> SaveLoad_Partitions;

	FOperatingSystemDeviceSaveLoad() 
		: bSaveLoad_OperatingSystemInstalled(false)
		, SaveLoad_OperatingSystem({})
		, SaveLoad_Partitions({})
	{
	}
};
