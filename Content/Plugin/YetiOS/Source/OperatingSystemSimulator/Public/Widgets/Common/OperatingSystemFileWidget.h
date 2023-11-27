// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystemWindowWidgetBase.h"
#include "OperatingSystemFileWidget.generated.h"

class UOperatingSystemFile;

/**
 * 
 */
UCLASS(Abstract)
class UOperatingSystemFileWidget : public UOperatingSystemWindowWidgetBase
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemFileWidget)
	TWeakObjectPtr<UOperatingSystemFile> ParentFile;

public:

	UOperatingSystemFileWidget();

	UE_NODISCARD static UOperatingSystemFileWidget* CreateFileWidget(UOperatingSystemFile* OwningFile, const TSoftClassPtr<UOperatingSystemFileWidget>& WidgetSoftClass);
};
