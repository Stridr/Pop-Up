// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "OperatingSystemEditorCommands.h"

#define LOCTEXT_NAMESPACE "OperatingSystemEditorCommands"

void FOperatingSystemEditorCommands::RegisterCommands()
{
	UI_COMMAND(SupportCommand, "Support", "Join Discord server for support.", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(DocumentationCommand, "Documentation", "Access Operating System Simulator documentation", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(MarketplaceCommand, "Marketplace", "Visit our Marketplace Page", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(YouTubeCommand, "YouTube", "Check out our tutorials and updates", EUserInterfaceActionType::Button, FInputChord());
}

TSharedRef<FUICommandList> FOperatingSystemEditorCommands::CreateCommands() const
{
	const TSharedPtr<FUICommandList> CommandList = MakeShareable(new FUICommandList);

#define MAP_URL(Name, URL)	CommandList->MapAction(Name##Command, FExecuteAction::CreateLambda([]() \
	{ \
		FPlatformProcess::LaunchURL(TEXT(URL), nullptr, nullptr); \
	}), FCanExecuteAction())

	MAP_URL(Support, "https://discord.yetitechstudios.com");
	MAP_URL(Documentation, "https://docs.yetitechstudios.com");
	MAP_URL(Marketplace, "https://www.unrealengine.com/marketplace/profile/YetiTech+Studios");
	MAP_URL(YouTube, "https://www.youtube.com/@yetitechstudios");

#undef MAP_URL

	return CommandList.ToSharedRef();
}

#undef LOCTEXT_NAMESPACE
