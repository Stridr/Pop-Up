// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "ViewportWorldSettings.h"
#include "ViewportWorldGameClient.h"
#include "Misc/MessageDialog.h"

UViewportWorldSettings::UViewportWorldSettings()
	: bEnableViewportWorlds(false)
	, ViewportGameClientClass(UViewportWorldGameClient::StaticClass())
{
}

#if WITH_EDITOR
void UViewportWorldSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UViewportWorldSettings, bEnableViewportWorlds) && bEnableViewportWorlds)
	{
		const FText WarningMessage = FText::FromString("Viewport worlds are now enabled.\n\nUse with caution as this is experimental and may not work well with all type of levels. Crashes may happen.");
		const FText Title = FText::FromString("Here be dragons");
#if OS_UNREAL_VERSION >= 503
		FMessageDialog::Open(EAppMsgType::Ok, WarningMessage, Title);
#else
		FMessageDialog::Open(EAppMsgType::Ok, WarningMessage, &Title);
#endif
	}
}
#endif

UClass* UViewportWorldSettings::GetViewportClientClass() const
{
	if (ViewportGameClientClass.IsNull())
	{
		return UViewportWorldGameClient::StaticClass();
	}

	return ViewportGameClientClass.LoadSynchronous();
}
