// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FOperatingSystemEditorModule : public IModuleInterface
{
    TSharedPtr<FUICommandList> YetiTechCommandList;
    
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    OPERATINGSYSTEMEDITOR_API static void LogToMessageLog(const FString& Message);
    OPERATINGSYSTEMEDITOR_API static void WarningToMessageLog(const FString& Message);
    OPERATINGSYSTEMEDITOR_API static void ErrorToMessageLog(const FString& Message);

    OPERATINGSYSTEMEDITOR_API static void ToastNotification(const FString& Message, const float& ExpireDuration, const TOptional<FString>& Hyperlink = TOptional<FString>(), const TOptional<FString>& HyperlinkText = TOptional<FString>());

private:

    void Internal_CreateCommands();
    void Internal_CreateMenuBarEntry() const;
};
