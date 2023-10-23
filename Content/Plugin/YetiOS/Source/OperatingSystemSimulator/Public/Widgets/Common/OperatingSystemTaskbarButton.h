// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystemTypes.h"
#include "OperatingSystemWidgetBase.h"
#include "OperatingSystemTaskbarButton.generated.h"

class UOperatingSystemBaseProgram;

UCLASS(Abstract)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemTaskbarButton : public UOperatingSystemWidgetBase
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemTaskbarButton)
	EOperatingSystemProgramViewState CurrentState;

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemTaskbarButton)
	TWeakObjectPtr<UOperatingSystemBaseProgram> ParentProgram;

public:

	UOperatingSystemTaskbarButton();

	static UOperatingSystemTaskbarButton* CreateTaskbarButton(UOperatingSystemBaseProgram* OwningProgram);
	
	bool ChangeTaskbarState(const EOperatingSystemProgramViewState NewState);

protected:
	
	UFUNCTION(BlueprintCallable, Category = OperatingSystemTaskbarButton)
	void ToggleState();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemTaskbarButton, DisplayName = OnCreated)
	void K2_OnCreated();

public:

	FORCEINLINE EOperatingSystemProgramViewState GetCurrentState() const { return CurrentState; }
};
