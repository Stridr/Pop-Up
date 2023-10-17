// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "PopUp/ItemBase.h"
#include "ItemDragDropOperation.generated.h"


/**
 * 
 */
UCLASS()
class POPUP_API UItemDragDropOperation : public UDragDropOperation
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UItemBase* SourceItem;
	
	UPROPERTY()
	UInventoryComponent* SourceInventory;
	
};
