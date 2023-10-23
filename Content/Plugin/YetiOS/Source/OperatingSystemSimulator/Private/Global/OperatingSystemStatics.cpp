// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Global/OperatingSystemStatics.h"
#include <regex>
#include "OperatingSystemTags.h"
#include "Devices/OperatingSystemDeviceActor.h"
#include "Core/OperatingSystem.h"
#include "Files/OperatingSystemFile.h"
#include "OperatingSystemMacros.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "Programs/OperatingSystemBaseProgram.h"
#include "Subsystems/OperatingSystemWorldSubsystem.h"

FString UOperatingSystemStatics::VersionToString(const FVersion& Version, const bool bIgnorePatch)
{
	return Version.ToString(bIgnorePatch);
}

bool UOperatingSystemStatics::Equal_Version(const FVersion& VersionOne, const FVersion& VersionTwo)
{
	return VersionOne == VersionTwo;
}

bool UOperatingSystemStatics::LessThan_Version(const FVersion& VersionOne, const FVersion& VersionTwo)
{
	return VersionOne < VersionTwo;
}

bool UOperatingSystemStatics::GreaterThan_Version(const FVersion& VersionOne, const FVersion& VersionTwo)
{
	return VersionOne > VersionTwo;
}

bool UOperatingSystemStatics::IsUniqueIdValid(const FOperatingSystemUniqueId& TestID)
{
	return TestID.IsValid();
}

FString UOperatingSystemStatics::UniqueIdToString(const FOperatingSystemUniqueId& TestID)
{
	return TestID.ToString();
}

bool UOperatingSystemStatics::IsOperatingSystemTagValid(const FGameplayTag& TestTag)
{
	return TestTag.IsValid() && TestTag != InvalidTag;
}

int32 UOperatingSystemStatics::GetSize(const EOperatingSystemCommonSizes& Size)
{
	if (Size == EOperatingSystemCommonSizes::None)
	{
		return 0;
	}

	return 1 << static_cast<uint8>(Size);
}

FGenericError UOperatingSystemStatics::CreateGenericError(const FText ErrorCode, const FText ErrorDescription)
{
	return FGenericError(ErrorCode, ErrorDescription);
}

FOperatingSystemNotification UOperatingSystemStatics::CreateNotification(const FText Title, const FText Description, 
	const EOperatingSystemNotificationCategory NotificationCategory, 
	const EOperatingSystemNotificationType Verbosity, 
	TSoftObjectPtr<UTexture2D> Icon, const FText Code)
{
	FOperatingSystemNotification NewNotification(Title, Description, Code, NotificationCategory);
	NewNotification.Level = Verbosity;
	NewNotification.Icon = Icon;
	return NewNotification;
}

double UOperatingSystemStatics::ConvertMB_ToBytes(const float SizeInMB)
{
	return FOperatingSystemSizeInMB(SizeInMB).SizeInBytes;
}

double UOperatingSystemStatics::ConvertGB_ToBytes(const float SizeInGB)
{
	return FOperatingSystemSizeInGB(SizeInGB).SizeInBytes;
}

float UOperatingSystemStatics::ConvertGB_ToMB(const float SizeInGB)
{
	return SizeInGB * 1000.f;
}

float UOperatingSystemStatics::ConvertMB_ToGB(const float SizeInMB)
{
	return SizeInMB / 1000.f;
}

float UOperatingSystemStatics::ConvertBytes_ToGB(const double SizeInBytes)
{
	return SizeInBytes / 1.e+9;
}

float UOperatingSystemStatics::ConvertBytes_ToMB(const double SizeInBytes)
{
	return SizeInBytes / 1.e+6;
}

UOperatingSystemBaseHardware* UOperatingSystemStatics::FindHardwareByTag(const AOperatingSystemDeviceActor* TargetDevice, const FGameplayTag HardwareTag)
{
	if (!IsValid(TargetDevice))
	{
		return nullptr;
	}

	return TargetDevice->GetHardwareByTag(HardwareTag);
}

bool UOperatingSystemStatics::GetCpuSocketName(const FGameplayTag SocketTag, FText& OutValue)
{
	if (!IsOperatingSystemTagValid(SocketTag))
	{
		return false;
	}

	static const FString TagStart = "OperatingSystem.Hardware.CPU.";
	FString TagString = SocketTag.ToString();
	if (!TagString.StartsWith(TagStart))
	{
		return false;
	}

	TagString = TagString.Replace(*TagStart, TEXT("")).Replace(TEXT("."), TEXT(" "));
	OutValue = FText::FromString(TagString);
	return true;
}

void UOperatingSystemStatics::ShutdownOperatingSystem(UOperatingSystem* TargetOS)
{
	TargetOS->GetParentDevice()->DeviceSessionEnd(false);
}

void UOperatingSystemStatics::RestartOperatingSystem(UOperatingSystem* TargetOS)
{
	TargetOS->GetParentDevice()->DeviceSessionEnd(true);
}

bool UOperatingSystemStatics::AddNotification(UOperatingSystem* TargetOperatingSystem, const FOperatingSystemNotification& Notification)
{
	if (IsValid(TargetOperatingSystem))
	{
		return TargetOperatingSystem->AddNotification(Notification);
	}

	return false;
}

bool UOperatingSystemStatics::AddNotificationFromError(UOperatingSystem* TargetOperatingSystem, const FGenericError& Error, const EOperatingSystemNotificationCategory NotificationCategory, const EOperatingSystemNotificationType Verbosity /*= EOperatingSystemNotificationType::Error*/)
{
	if (IsValid(TargetOperatingSystem))
	{
		return TargetOperatingSystem->AddNotification(Error, NotificationCategory, Verbosity);
	}

	return false;
}

UOperatingSystemFile* UOperatingSystemStatics::OpenFile(UOperatingSystemFile* TargetFile, FGenericError& OutError)
{
	if (!IsValid(TargetFile))
	{
		OutError = MAKE_ERROR("ERR_FILE", "Target file was null");
		return nullptr;
	}

	auto ProxyFile = UOperatingSystemFile::CreateRuntimeFile(TargetFile);
	ProxyFile->OpenFile(OutError);
	if (OutError.IsValid())
	{
		ProxyFile->MarkAsGarbage();
		ProxyFile = nullptr;
	}

	return ProxyFile;
}

bool UOperatingSystemStatics::IsUserValid(const FOperatingSystemUser& TestUser)
{
	return TestUser.IsValid();
}

bool UOperatingSystemStatics::UsersEqual(const FOperatingSystemUser& Lhs, const FOperatingSystemUser& Rhs)
{
	return Lhs == Rhs;
}

bool UOperatingSystemStatics::UsersNotEqual(const FOperatingSystemUser& Lhs, const FOperatingSystemUser& Rhs)
{
	return Lhs != Rhs;
}

bool UOperatingSystemStatics::IsNotificationValid(const FOperatingSystemNotification& TestNotification)
{
	return TestNotification.IsValid();
}

bool UOperatingSystemStatics::GetSpecialDirectoryName(const FGameplayTag DirectoryTag, FText& OutDirectoryName)
{
	OutDirectoryName = FText();
	if (!IsOperatingSystemTagValid(DirectoryTag))
	{
		return false;
	}

	if (DirectoryTag == DirOther_Tag)
	{
		return false;
	}

	if (DirectoryTag == DirRoot_Tag)
	{
		OutDirectoryName = INVTEXT("/");
		return true;
	}

#define TAG_CHK(Name) if (DirectoryTag == Dir##Name##_Tag) { OutDirectoryName = FText::FromString(PREPROCESSOR_TO_STRING(Name)); }

	TAG_CHK(Desktop)
	TAG_CHK(Documents)
	TAG_CHK(Downloads)
	TAG_CHK(Home)
	TAG_CHK(Music)
	TAG_CHK(Pictures)
	TAG_CHK(Videos)

#undef TAG_CHK

	return !OutDirectoryName.IsEmptyOrWhitespace();
}

FText UOperatingSystemStatics::GetCpuSpeedAsText(const float& CpuSpeedInGHz, const bool bUseGHZ /*= true*/)
{
	FFormatNamedArguments Args;
	Args.Add("Speed", FText::AsNumber(bUseGHZ ? CpuSpeedInGHz : CpuSpeedInGHz * 1000.f, &FNumberFormattingOptions::DefaultNoGrouping()));
	Args.Add("SpeedName", FText::FromString(bUseGHZ ? "GHz" : "MHz"));
	return FText::Format(INVTEXT("{Speed} {SpeedName}"), Args);
}

FText UOperatingSystemStatics::GetSizeAsText(const EOperatingSystemCommonSizes Size)
{
	return FText::AsNumber(1 << static_cast<uint8>(Size));
}

FText UOperatingSystemStatics::GenerateRandomErrorCode()
{
	static uint8 MaxArraySize = 16;
	static TArray<FString> CodeArray;
	CodeArray.Reserve(MaxArraySize);
	CodeArray.Emplace("0");
	CodeArray.Emplace("1");
	CodeArray.Emplace("2");
	CodeArray.Emplace("3");
	CodeArray.Emplace("4");
	CodeArray.Emplace("5");
	CodeArray.Emplace("6");
	CodeArray.Emplace("7");
	CodeArray.Emplace("8");
	CodeArray.Emplace("9");
	CodeArray.Emplace("A");
	CodeArray.Emplace("B");
	CodeArray.Emplace("C");
	CodeArray.Emplace("D");
	CodeArray.Emplace("E");
	CodeArray.Emplace("F");

	FString StopCode = "0x0";
	uint8 Counter = 0;
	while (Counter < MaxArraySize)
	{
		const int32 RandomIndex = FMath::RandRange(0, CodeArray.Num() - 1);
		StopCode += CodeArray[RandomIndex];
		Counter++;
	}

	return FText::FromString(StopCode);
}

FText UOperatingSystemStatics::GetTimeAsText(const FDateTime& DateTime, const bool bShowSeconds,
	const EOperatingSystemTimeSeparator Separator)
{
	const FString SeparatorString = Separator == EOperatingSystemTimeSeparator::Colon ? ":" : ".";
	FString MyTime = FString::Printf(TEXT("%s%s%s"), *INT_TO_STRING(DateTime.GetHour()), *SeparatorString, *INT_TO_STRING(DateTime.GetMinute()));
	if (bShowSeconds)
	{
		MyTime += FString::Printf(TEXT("%s%s"), *SeparatorString, *INT_TO_STRING(DateTime.GetSecond()));
	}

	return FText::FromString(MyTime);
}

FText UOperatingSystemStatics::GetDateAsText(const FDateTime& DateTime, const EOperatingSystemDateSeparator Separator)
{
	FString SeparatorString = "-";
	switch (Separator)
	{
		case EOperatingSystemDateSeparator::Slash:
			SeparatorString = "/";
			break;
		case EOperatingSystemDateSeparator::Period:
			SeparatorString = ".";
			break;
		case EOperatingSystemDateSeparator::Comma:
			SeparatorString = ",";
			break;
		default: ;
	}
	
	const auto MyDate = FString::Printf(TEXT("%s%s%s%s%s"), *INT_TO_STRING(DateTime.GetDay()), *SeparatorString, *INT_TO_STRING(DateTime.GetMonth()), *SeparatorString, *INT_TO_STRING(DateTime.GetYear()));
	return FText::FromString(MyDate);
}

FString UOperatingSystemStatics::RegexExpression(const FString& TargetString, const FString RegexPattern)
{
	const std::string SearchString = TCHAR_TO_UTF8(*TargetString);
	const std::regex TargetRegexPattern(TCHAR_TO_UTF8(*RegexPattern));
	std::smatch RegexMatch;
	std::regex_search(SearchString, RegexMatch, TargetRegexPattern);

	return RegexMatch.str().c_str();
}

EOperatingSystemPasswordStrength UOperatingSystemStatics::DeterminePasswordStrength(const FString& Input)
{
	if (Input.Len() <= 3)
	{
		// Don't bother continuing.
		return EOperatingSystemPasswordStrength::Weak;
	}
	
	static TSet<FString> LowerChars = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };
	static TSet<FString> SpecialChars = { "~", "`", "!", "@", "#", "$", "%", "^", "&", "*", "(", ")", "-", "_", "+", "=", "{", "}", "[", "]", "|", "\\", ";", "\"", "'", "<", ",", ">", ".", "?", "/" };

	bool bHasLower = false;
	bool bHasUpper = false;
	bool bHasDigit = false;
	bool bHasSpecial = false;

	const auto Length = Input.Len();

	// Check for lower characters
	for (int i = 0; i < Length; ++i)
	{
		const FString Letter = Input.Mid(i, 1);
		for (const auto& It : LowerChars)
		{
			if (It.Equals(Letter, ESearchCase::CaseSensitive))
			{
				bHasLower = true;
				break;
			}
		}

		if (bHasLower)
		{
			break;
		}
	}

	// Check for upper characters
	for (int i = 0; i < Length; ++i)
	{
		const FString Letter = Input.Mid(i, 1);
		for (const auto& It : LowerChars)
		{
			if (It.ToUpper().Equals(Letter, ESearchCase::CaseSensitive))
			{
				bHasUpper = true;
				break;
			}
		}

		if (bHasUpper)
		{
			break;
		}
	}

	// Check for digits
	for (int i = 0; i < Length; ++i)
	{
		const FString Letter = Input.Mid(i, 1);
		if (Letter.IsNumeric())
		{
			bHasDigit = true;
			break;
		}
	}

	// Check for special characters
	for (int i = 0; i < Length; ++i)
	{
		const FString Letter = Input.Mid(i, 1);
		if (SpecialChars.Contains(Letter))
		{
			bHasSpecial = true;
			break;
		}
	}

	if (bHasLower && bHasUpper && bHasDigit && bHasSpecial && Length >= 8)
	{
		return EOperatingSystemPasswordStrength::Strong;
	}

	if ((bHasLower || bHasUpper) && bHasSpecial && Length >= 6)
	{
		return EOperatingSystemPasswordStrength::Moderate;
	}

	return EOperatingSystemPasswordStrength::Weak;
}

AOperatingSystemDeviceActor* UOperatingSystemStatics::FindDeviceActorByTag(const UObject* WorldContextObject, const FGameplayTag TestTag)
{
	return UOperatingSystemWorldSubsystem::Get(WorldContextObject)->FindDeviceActorByTag(TestTag);
}

void UOperatingSystemStatics::FindDeviceActorsByTag(const UObject* WorldContextObject, const FGameplayTag TestTag, TArray<AOperatingSystemDeviceActor*>& OutDeviceActors)
{
	UOperatingSystemWorldSubsystem::Get(WorldContextObject)->FindDeviceActorsByTag(TestTag, OutDeviceActors);
}

UOperatingSystemDeviceMessenger* UOperatingSystemStatics::FindMessengerForDevice(const UObject* WorldContextObject,
	const FGameplayTag TestTag)
{
	auto Device = UOperatingSystemWorldSubsystem::Get(WorldContextObject)->FindDeviceActorByTag(TestTag);
	if (IsValid(Device))
	{
		return Device->GetDeviceMessenger();
	}

	return nullptr;
}

UOperatingSystemDeviceMessenger* UOperatingSystemStatics::FindMessengerFromOperatingSystem(const UOperatingSystem* TargetOS)
{
	if (IsValid(TargetOS) && IsValid(TargetOS->GetParentDevice().Get()))
	{
		return TargetOS->GetParentDevice()->GetMessenger();
	}

	return nullptr;
}

UOperatingSystemUserManager* UOperatingSystemStatics::GetUserManager(const UObject* WorldContextObject)
{
	const auto WorldSubsystem = UOperatingSystemWorldSubsystem::Get(WorldContextObject);
	return WorldSubsystem->GetUserManager();
}

bool UOperatingSystemStatics::IsProgramClassCompatibleWithOS(const TSubclassOf<UOperatingSystemBaseProgram> ProgramClass, const UOperatingSystem* TargetOS, FGenericError& OutError)
{
	auto CDO = ProgramClass.GetDefaultObject();
	CDO->IsCompatibleWithOS(TargetOS, OutError);
	return !OutError.IsValid();
}

FString UOperatingSystemStatics::GetPathDelimiter(const UOperatingSystem* TargetOS)
{
	return TargetOS->IsUnix() ? "/" : "\\";
}
