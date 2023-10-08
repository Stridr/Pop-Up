// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GlobalMessenger.h"
#include "Modules/ModuleManager.h"

GLOBALMESSENGER_API extern TSharedPtr<FGlobalMessenger> GMessenger;

class FGlobalMessengerModule : public IModuleInterface
{
    
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
