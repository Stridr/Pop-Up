// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "UObject/Object.h"
#include "OperatingSystemTypes.h"
#include "OperatingSystemFile.generated.h"

class UOperatingSystemBaseProgram;
class UOperatingSystemFileIconWidget;
class UOperatingSystemFileWidget;
class IOperatingSystemExplorerInterface;

UCLASS(Abstract, Blueprintable, BlueprintType)
class UOperatingSystemFile : public UObject
{
	GENERATED_BODY()

protected:

	/** Name of this file without extension. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemFile)
	FText Name;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemFile)
	FText Extension;

	/** Obvious right? C'mon its just an Icon. What you need a tooltip for ¯\_(ツ)_/¯ */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemFile, meta = (DisplayThumbnail = "true", AllowedClasses = "Texture,MaterialInterface"))
	TSoftObjectPtr<UObject> IconObject;

	/** How much space does this file require on hard disk. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemFile, meta = (ForceUnits = "MB"))
	float SpaceRequiredInMB;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemFile, AdvancedDisplay)
	uint8 bIsDeletable : 1;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemFile, AdvancedDisplay)
	uint8 bIsMovable : 1;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemFile)
	TSoftClassPtr<UOperatingSystemBaseProgram> TargetProgramClass;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemFileWidgets)
	TSoftClassPtr<UOperatingSystemFileIconWidget> IconWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemFileWidgets)
	TSoftClassPtr<UOperatingSystemFileWidget> WidgetClass;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = OperatingSystemFileDebug)
	TWeakObjectPtr<UOperatingSystemBaseProgram> ParentProgram;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = OperatingSystemFileDebug)
	TObjectPtr<UOperatingSystemFileWidget> FileWidget;

	UPROPERTY(Transient)
	TScriptInterface<IOperatingSystemExplorerInterface> ParentExplorerInterface;

	UPROPERTY(Transient)
	bool bHasBlueprintOnOpen;

public:

	UOperatingSystemFile();

	UE_NODISCARD static UOperatingSystemFile* CreateFile(TScriptInterface<IOperatingSystemExplorerInterface> ExplorerInterface, const TSoftClassPtr<UOperatingSystemFile>& FileSoftClass, FGenericError& OutError);
	UE_NODISCARD static UOperatingSystemFile* CreateRuntimeFile(UOperatingSystemFile* ParentFile);

private:

	void Internal_Validate(FGenericError& OutError);

protected:

	OPERATINGSYSTEMSIMULATOR_API virtual void OnValidate(FGenericError& OutError) {}

	UFUNCTION(BlueprintCallable, Category = OperatingSystemFile)
	UOperatingSystemFileIconWidget* CreateIconWidget();

public:

	void OpenFile(FGenericError& OutError);
	void CloseFile();

	UFUNCTION(BlueprintPure, Category = OperatingSystemFile)
	FText GetFileName(const bool bWithExtension = true) const;

	UFUNCTION(BlueprintPure, Category = OperatingSystemFile)
	FText GetExtension() const { return Extension; }

	UFUNCTION(BlueprintPure, Category = OperatingSystemFile)
	bool IsSameFile(const UOperatingSystemFile* OtherFile) const;

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemFile, DisplayName = OnOpen)
	void K2_OnOpen();

public:

	FORCEINLINE TSoftObjectPtr<UObject> GetIconObject() const { return IconObject; }
	FORCEINLINE TScriptInterface<IOperatingSystemExplorerInterface> GetExplorerInterface() const { return ParentExplorerInterface; }
};
