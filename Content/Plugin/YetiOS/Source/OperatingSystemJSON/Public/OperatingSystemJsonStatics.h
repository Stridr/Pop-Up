// Copyright 2023 - Satheesh (ryanjon2040). All Rights Reserved.

#pragma once

#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OperatingSystemJsonStatics.generated.h"

UCLASS()
class OPERATINGSYSTEMJSON_API UOperatingSystemJsonStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	static bool DoesFileExists(const FString& BaseFileNameWithoutExtension);

	static TSharedPtr<FJsonObject> ReadJson(const FString& BaseFileNameWithoutExtension);
	static bool WriteJson(const FString& BaseFileNameWithoutExtension, TSharedRef<FJsonObject> JsonObject);

	template<typename T>
	static bool ReadStructFromJson(const FString& BaseFileNameWithoutExtension, T& OutStruct)
	{
		const TSharedPtr<FJsonObject> JsonObject = ReadJson(BaseFileNameWithoutExtension);
		if (!JsonObject.IsValid())
		{
			return false;
		}

		if (!FJsonObjectConverter::JsonObjectToUStruct<T>(JsonObject.ToSharedRef(), &OutStruct))
		{
			return false;
		}

		return true;
	}

	template<typename T>
	static bool WriteStructToJson(const FString BaseFileNameWithoutExtension, const T& InStruct)
	{
		const TSharedPtr<FJsonObject> JsonObject = FJsonObjectConverter::UStructToJsonObject(InStruct);
		if (!JsonObject.IsValid())
		{
			return false;
		}

		return WriteJson(BaseFileNameWithoutExtension, JsonObject.ToSharedRef());
	}

private:

	static bool Internal_ReadFromFile(const FString& BaseFileNameWithoutExtension, FString& OutContent);
	static bool Internal_WriteToFile(const FString& BaseFileNameWithoutExtension, const FString& ContentToWrite);
	static FString Internal_GetSaveSlotName(const FString& BaseFileName);
};
