// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "OperatingSystemProgramSettings.generated.h"

class UOperatingSystemBaseProgram;

/**
 * 
 */
UCLASS(Abstract)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemProgramSettings : public USaveGame
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	FName Identifier;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	FString SaveSlotName;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	int32 UserIndex;

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemProgramSettings)
	TWeakObjectPtr<UOperatingSystemBaseProgram> ParentProgram;

	uint8 bHasBlueprintCanSave : 1;
	uint8 bHasBlueprintPreSave : 1;

public:

	UOperatingSystemProgramSettings();

	static UOperatingSystemProgramSettings* CreateSettings(const TWeakObjectPtr<UOperatingSystemBaseProgram> OwningProgram,
	                                                       const TSoftClassPtr<UOperatingSystemProgramSettings>& SettingsSoftClass, FGenericError& OutError);

	template <class T>
	static T* CreateSettings(const TWeakObjectPtr<UOperatingSystemBaseProgram> OwningProgram,
		TSoftClassPtr<UOperatingSystemProgramSettings> SettingsSoftClass, FGenericError& OutError)
	{
		static_assert(TIsDerivedFrom<T, UOperatingSystemProgramSettings>::IsDerived, "Create settings can only be used to create Program Settings instances. Please make sure you are casting to a class derived from UOperatingSystemProgramSettings.");
		return Cast<T>(CreateSettings(OwningProgram, SettingsSoftClass, OutError));
	}

	static UOperatingSystemProgramSettings* LoadSettings(const TWeakObjectPtr<UOperatingSystemBaseProgram> OwningProgram);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemProgramSettings)
	static bool SaveSettings(UOperatingSystemBaseProgram* TargetProgram);

private:

	bool Internal_CanSave() const;
	bool Internal_SaveSettings();
	void Internal_SetSaveSlotName();

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemProgramSettings, DisplayName = CanSave)
	bool K2_CanSave() const;

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemProgramSettings, DisplayName = PreSave)
	void K2_PreSave();
};
