// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/InventoryPanel.h"

#include "Character/PlayerCharacter.h"
#include "Components/InventoryComponent.h"
#include "Items/ItemBase.h"
#include "Inventory/ItemDragDropOperation.h"
#include "Player/PopUpPlayerController.h"


void UInventoryPanel::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	PlayerCharacter = Cast<APopUpPlayerController>(GetOwningPlayer());
	if(PlayerCharacter)
	{
		InventoryReference=PlayerCharacter->GetInventory();
		if(InventoryReference)
		{
			InventoryReference->OnInventoryUpdated.AddUObject(this, &UInventoryPanel::RefreshInventory);
			SetInfoText();
		}
	}
}
void UInventoryPanel::SetInfoText() const
{
	const FString WeightInfoValue{
	FString::SanitizeFloat(InventoryReference->GetInventoryTotalWeight()) + "/"
	+ FString::FromInt(InventoryReference->GetWeightCapacity())
	};
	const FString CapacityInfoValue{
		FString::FromInt(InventoryReference->GetInventoryContents().Num()) + "/"
		+FString::FromInt(InventoryReference->GetWeightCapacity())
	};
	WeightInfo->SetText(FText::FromString(WeightInfoValue));
	CapacityInfo->SetText(FText::FromString(CapacityInfoValue));
}

void UInventoryPanel::RefreshInventory()
{
	if(InventoryReference && InventorySlotClass)
	{
		InventoryWrapBox->ClearChildren();
		for(UItemBase* const& InventoryItem : InventoryReference->GetInventoryContents())
		{
			UInventoryItemSlot* ItemSlot = CreateWidget<UInventoryItemSlot>(this ,InventorySlotClass);
			ItemSlot->SetItemReference(InventoryItem);

			InventoryWrapBox->AddChildToWrapBox(ItemSlot);
		}
		SetInfoText();
	}
}

bool UInventoryPanel::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
	UDragDropOperation* InOperation)
{
	const UItemDragDropOperation* ItemDragDrop = Cast<UItemDragDropOperation>(InOperation);
	if(ItemDragDrop->SourceItem && InventoryReference)
	{
		return true;
	}
	return false;
}
