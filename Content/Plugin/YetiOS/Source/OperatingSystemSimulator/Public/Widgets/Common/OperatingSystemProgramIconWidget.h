// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/Common/OperatingSystemIconWidget.h"
#include "OperatingSystemProgramIconWidget.generated.h"

class UOperatingSystemBaseProgram;

/**
 * 
 */
UCLASS(Abstract)
class UOperatingSystemProgramIconWidget : public UOperatingSystemIconWidget
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(Transient)
	TWeakObjectPtr<UOperatingSystemBaseProgram> ParentProgram;

public:

	UOperatingSystemProgramIconWidget();

	static UOperatingSystemProgramIconWidget* CreateIconWidget(TWeakObjectPtr<UOperatingSystemBaseProgram> OwningProgram);

	UFUNCTION(BlueprintPure, Category = OperatingSystemProgramIconWidget)
	OPERATINGSYSTEMSIMULATOR_API UOperatingSystemBaseProgram* GetParentProgram() const;
};
