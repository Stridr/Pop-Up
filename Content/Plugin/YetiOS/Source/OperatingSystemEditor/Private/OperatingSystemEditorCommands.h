// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Framework/Commands/Commands.h"

class FOperatingSystemEditorCommands final : public TCommands<FOperatingSystemEditorCommands>
{
public:

	TSharedPtr<FUICommandInfo> SupportCommand;
	TSharedPtr<FUICommandInfo> DocumentationCommand;
	TSharedPtr<FUICommandInfo> MarketplaceCommand;
	TSharedPtr<FUICommandInfo> YouTubeCommand;

	FOperatingSystemEditorCommands()
		: TCommands(TEXT("YetiTechStudiosOperatingSystemSimulator"), INVTEXT("Operating System Simulator Commands"), NAME_None, FAppStyle::GetAppStyleSetName())
	{
	}
	
	virtual void RegisterCommands() override;

	TSharedRef<FUICommandList> CreateCommands() const;
};
