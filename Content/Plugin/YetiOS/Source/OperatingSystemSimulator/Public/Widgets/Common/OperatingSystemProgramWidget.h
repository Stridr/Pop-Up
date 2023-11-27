// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystemTypes.h"
#include "OperatingSystemWindowWidgetBase.h"
#include "OperatingSystemProgramWidget.generated.h"

class UOperatingSystemBaseProgram;

/**
 * 
 */
UCLASS(Abstract)
class UOperatingSystemProgramWidget : public UOperatingSystemWindowWidgetBase
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadOnly, Transient, Category = OperatingSystemProgramWidget)
	TWeakObjectPtr<UOperatingSystemBaseProgram> ParentProgram;

	uint8 bHasBlueprintOnSetFile : 1;
	uint8 bHasBlueprintOnOpenFile : 1;

public:

	UOperatingSystemProgramWidget();

	static UOperatingSystemProgramWidget* CreateProgramWidget(const TWeakObjectPtr<UOperatingSystemBaseProgram> TargetProgram, FGenericError& OutError);

	void SetFile();
	void OpenFile();

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemProgramWidget, DisplayName = OnSetFile)
	void K2_OnSetFile();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemProgramWidget, DisplayName = OnOpenFile)
	void K2_OnOpenFile();
};
