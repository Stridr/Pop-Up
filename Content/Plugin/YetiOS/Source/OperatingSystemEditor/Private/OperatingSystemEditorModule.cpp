// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "OperatingSystemEditorModule.h"
#include "LevelEditor.h"
#include "MessageLogModule.h"
#include "OperatingSystemEditorCommands.h"
#include "OperatingSystemLogs.h"
#include "Editor/EditorPerformanceSettings.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Logging/MessageLog.h"
#include "Widgets/Notifications/SNotificationList.h"

#define LOCTEXT_NAMESPACE "FOperatingSystemEditorModule"

DEFINE_OS_LOG(EditorModule);

static const FName OsMessageLogName = FName("OperatingSystemSimulator");

void FOperatingSystemEditorModule::StartupModule()
{
    OS_LOG(EditorModule, "Operating System Editor Module started.");

    Internal_CreateCommands();
    
    auto& MessageLogModule = FModuleManager::LoadModuleChecked<FMessageLogModule>(FName("MessageLog"));
    FMessageLogInitializationOptions Options;
    Options.bShowPages = true;
    Options.bAllowClear = true;
    Options.bShowFilters = true;
    MessageLogModule.RegisterLogListing(OsMessageLogName, LOCTEXT("OperatingSystemSimulatorEditorLogLabel", "Operating System Simulator"), Options);

    FEditorDelegates::BeginPIE.AddLambda([this](const bool bIsSimulating)
    {
        if (GetDefault<UEditorPerformanceSettings>()->bThrottleCPUWhenNotForeground)
        {
            WarningToMessageLog("Please disable 'Use Less CPU when in Background' setting from Editor Preferences -> Performance");
            ToastNotification("Incompatible setting found. Check documentation", 5.f, FString("https://docs.yetitechstudios.com/docs/operating-system-simulator/basic-tutorial/prerequisites"), FString("Open documentation..."));
        } 
    });

    if (GetDefault<UEditorPerformanceSettings>()->bThrottleCPUWhenNotForeground)
    {
        ToastNotification("Incompatible setting found. Check documentation", 5.f, FString("https://docs.yetitechstudios.com/docs/operating-system-simulator/basic-tutorial/prerequisites"), FString("Open documentation..."));
    } 
    
    Internal_CreateMenuBarEntry();
}

void FOperatingSystemEditorModule::ShutdownModule()
{
    OS_LOG(EditorModule, "Operating System Editor Module shutdown.");
    FEditorDelegates::BeginPIE.RemoveAll(this);
    
    if (FModuleManager::Get().IsModuleLoaded(FName("MessageLog")))
    {
        auto& MessageLogModule = FModuleManager::GetModuleChecked<FMessageLogModule>(FName("MessageLog"));
        MessageLogModule.UnregisterLogListing(OsMessageLogName);
    }
}

void FOperatingSystemEditorModule::LogToMessageLog(const FString& Message)
{
    FMessageLog(OsMessageLogName).Info(FText::FromString(Message));
}

void FOperatingSystemEditorModule::WarningToMessageLog(const FString& Message)
{
    FMessageLog(OsMessageLogName).Open(EMessageSeverity::Info, true);
    FMessageLog(OsMessageLogName).Warning(FText::FromString(Message));
}

void FOperatingSystemEditorModule::ErrorToMessageLog(const FString& Message)
{
    FMessageLog(OsMessageLogName).Error(FText::FromString(Message));
}

void FOperatingSystemEditorModule::ToastNotification(const FString& Message, const float& ExpireDuration, const TOptional<FString>& Hyperlink, const TOptional<FString>& HyperlinkText)
{
    if (ExpireDuration < 1.f)
    {
        return;
    }
    
    FNotificationInfo Info(FText::FromString(Message));
    Info.ExpireDuration = ExpireDuration;

    if (Hyperlink.IsSet())
    {
        Info.Hyperlink = FSimpleDelegate::CreateLambda([=]()
        {
            FPlatformProcess::LaunchURL(*Hyperlink.GetValue(), nullptr, nullptr);
        });

        Info.HyperlinkText = FText::FromString(HyperlinkText.IsSet() ? HyperlinkText.GetValue() : "Read more...");
    }

    FSlateNotificationManager::Get().AddNotification(Info);
}

void FOperatingSystemEditorModule::Internal_CreateCommands()
{
    FOperatingSystemEditorCommands::Register();
    YetiTechCommandList = FOperatingSystemEditorCommands::Get().CreateCommands();
}

void FOperatingSystemEditorModule::Internal_CreateMenuBarEntry() const
{
    FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>(FName("LevelEditor"));
    auto static AddMenuExtension = [](FMenuBuilder& Builder)
    {
        Builder.BeginSection("Help", INVTEXT("Help"));
        Builder.AddMenuEntry(FOperatingSystemEditorCommands::Get().DocumentationCommand);
        Builder.AddMenuEntry(FOperatingSystemEditorCommands::Get().MarketplaceCommand);
        Builder.AddMenuEntry(FOperatingSystemEditorCommands::Get().SupportCommand);
        Builder.AddMenuEntry(FOperatingSystemEditorCommands::Get().YouTubeCommand);
        Builder.EndSection();
    };

    const TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
    MenuExtender->AddMenuBarExtension(FName("Help"), EExtensionHook::Before, YetiTechCommandList, FMenuBarExtensionDelegate::CreateStatic([](FMenuBarBuilder& Builder)
    {
        Builder.AddPullDownMenu(INVTEXT("YetiTech"), INVTEXT("YetiTech Studios Support and Documentation"), FNewMenuDelegate::CreateStatic(AddMenuExtension), FName("OperatingSystemSimulatorEditorMenu"));
    }));
    LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FOperatingSystemEditorModule, OperatingSystemEditor)
