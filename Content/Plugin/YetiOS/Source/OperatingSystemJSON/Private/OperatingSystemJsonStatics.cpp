// Copyright 2023 - Satheesh (ryanjon2040). All Rights Reserved.

#include "OperatingSystemJsonStatics.h"
#include "Runtime/Core/Public/HAL/PlatformFileManager.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/Misc/Paths.h"

static const FString SAVE_FILE_EXTENSION = ".prog";

bool UOperatingSystemJsonStatics::DoesFileExists(const FString& BaseFileNameWithoutExtension)
{
	return FPlatformFileManager::Get().GetPlatformFile().FileExists(*Internal_GetSaveSlotName(BaseFileNameWithoutExtension));
}

TSharedPtr<FJsonObject> UOperatingSystemJsonStatics::ReadJson(const FString& BaseFileNameWithoutExtension)
{
	FString JsonString;
	if (!Internal_ReadFromFile(BaseFileNameWithoutExtension, JsonString))
	{
		return nullptr;
	}

	TSharedPtr<FJsonObject> JsonObject;
	if (!FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(JsonString), JsonObject))
	{
		return nullptr;
	}

	return JsonObject;
}

bool UOperatingSystemJsonStatics::WriteJson(const FString& BaseFileNameWithoutExtension, TSharedRef<FJsonObject> JsonObject)
{
	FString JsonString;

	if (!FJsonSerializer::Serialize(JsonObject, TJsonWriterFactory<>::Create(&JsonString)))
	{
		return false;
	}

	return Internal_WriteToFile(BaseFileNameWithoutExtension, JsonString);
}

bool UOperatingSystemJsonStatics::Internal_ReadFromFile(const FString& BaseFileNameWithoutExtension, FString& OutContent)
{
	const FString SaveFile = Internal_GetSaveSlotName(BaseFileNameWithoutExtension);	
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveFile))
	{
		return false;
	}

	return FFileHelper::LoadFileToString(OutContent, *SaveFile);
}

bool UOperatingSystemJsonStatics::Internal_WriteToFile(const FString& BaseFileNameWithoutExtension, const FString& ContentToWrite)
{
	return FFileHelper::SaveStringToFile(ContentToWrite, *Internal_GetSaveSlotName(BaseFileNameWithoutExtension));
}

FString UOperatingSystemJsonStatics::Internal_GetSaveSlotName(const FString& BaseFileName)
{
	const auto FileNameWithExtension = BaseFileName + SAVE_FILE_EXTENSION;
	return FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("SaveGames"), FileNameWithExtension);
}
