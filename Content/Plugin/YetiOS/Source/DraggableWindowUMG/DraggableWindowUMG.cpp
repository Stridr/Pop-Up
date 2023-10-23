// Copyright 2020 YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "DraggableWindowUMG.h"

#define LOCTEXT_NAMESPACE "FDraggableWindowUMGModule"

void FDraggableWindowUMGModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FDraggableWindowUMGModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDraggableWindowUMGModule, DraggableWindowUMG)