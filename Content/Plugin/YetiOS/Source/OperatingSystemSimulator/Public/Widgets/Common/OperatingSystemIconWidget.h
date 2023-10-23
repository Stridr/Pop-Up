// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "CommonButtonBase.h"
#include "OperatingSystemIconWidget.generated.h"

class UOperatingSystem;

/**
 * 
 */
UCLASS()
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemIconWidget : public UCommonButtonBase
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemWidgetBase)
	TWeakObjectPtr<UOperatingSystem> ParentOS;

public:

	UOperatingSystemIconWidget();
};
