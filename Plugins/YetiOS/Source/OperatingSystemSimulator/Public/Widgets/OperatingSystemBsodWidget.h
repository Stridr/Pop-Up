// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystemTypes.h"
#include "Blueprint/UserWidget.h"
#include "OperatingSystemBsodWidget.generated.h"

class UOperatingSystem;

/**
 * 
 */
UCLASS(Abstract)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemBsodWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemBSOD)
	TObjectPtr<UOperatingSystem> ParentOS;

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemBSOD)
	FGenericError BsodError;
	
public:

	static UOperatingSystemBsodWidget* CreateBsodWidget(UOperatingSystem* OwningOS);

	void SetError(const FGenericError& NewError);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = OperatingSystemBSOD)
	void UpdateProgress(const float ProgressPercentage);

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemBSOD, DisplayName = "On BSOD Progress Changed")
	void K2_OnProgressChanged(const float& CurrentProgresPercentage);
};
