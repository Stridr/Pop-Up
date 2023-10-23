// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "OperatingSystemTypes.h"
#include "UObject/Object.h"
#include "OperatingSystemBaseHardware.generated.h"

UCLASS(Abstract, Blueprintable, NotBlueprintType)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemBaseHardware : public UObject
{
	GENERATED_BODY()

protected:

	/** Name of this hardware. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemHardware)
	FText Name;

	/** Which company made this? */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemHardware)
	FText MadeBy;

	/** A model number. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemHardware)
	FText ModelNumber;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemHardware, meta = (Categories = "OperatingSystem.Hardware.Type"))
	FGameplayTag HardwareTag;

	UPROPERTY()
	bool bHasBlueprintValidateFunction;

public:

	UOperatingSystemBaseHardware();

protected:

	bool Validate(FGenericError& OutError) const;
	virtual bool OnValidate(FGenericError& OutError) const;

	UFUNCTION(BlueprintNativeEvent, Category = OperatingSystemHardware, DisplayName = "On Validate")
	bool K2_OnValidate(FGenericError& OutError) const;

private:
	// Child classes must not override this. Purposefully set to private.
	bool K2_OnValidate_Implementation(FGenericError& OutError) const;

public:

	UFUNCTION(BlueprintPure, Category = OperatingSystemHardware, meta = (Keywords = "display"))
	FText GetHardwareName() const { return Name; }

	UFUNCTION(BlueprintPure, Category = OperatingSystemHardware, meta = (Keywords = "manufacture, created"))
	FText GetHardwareMadeBy() const { return MadeBy; }

	UFUNCTION(BlueprintPure, Category = OperatingSystemHardware)
	FText GetModelNumber() const { return ModelNumber; }

	FORCEINLINE FString GetHardwareNameAsString() const { return Name.ToString(); }
	FORCEINLINE FGameplayTag GetHardwareTag() const { return HardwareTag; }
};
