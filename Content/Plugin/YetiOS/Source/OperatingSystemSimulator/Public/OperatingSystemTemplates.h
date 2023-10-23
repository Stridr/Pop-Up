// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"

template<class WidgetT>
UE_NODISCARD WidgetT* CreateFromSoftWidget(const UObject* WorldContextObject, TSoftClassPtr<WidgetT> SoftClass)
{
	if (SoftClass.IsNull())
	{
		ensure(false);
		return nullptr;
	}

	APlayerController* MyController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);
	return CreateWidget<WidgetT>(MyController, SoftClass.LoadSynchronous());
}
