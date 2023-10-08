// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Widgets/Common/OperatingSystemIconWidget.h"
#include "OperatingSystemFileIconWidget.generated.h"

class UOperatingSystemFile;

/**
 * 
 */
UCLASS(Abstract)
class UOperatingSystemFileIconWidget : public UOperatingSystemIconWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemFileIcon)
	TWeakObjectPtr<UOperatingSystemFile> ParentFile;
	
public:

	UOperatingSystemFileIconWidget();

	UE_NODISCARD static UOperatingSystemFileIconWidget* CreateIconWidget(UOperatingSystemFile* OwningFile, const TSoftClassPtr<UOperatingSystemFileIconWidget>& IconClass);
};
