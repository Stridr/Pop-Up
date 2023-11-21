// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/ItemBase.h"
#include "Components/InventoryComponent.h"


void UItemBase::ResetItemFlags()
{
	bIsCopy=false;
	bIsPickup=false;
}

UItemBase::UItemBase() : bIsCopy(false),bIsPickup(false)
{
}

UItemBase* UItemBase::CreateItemCopy() const
{
	UItemBase* ItemCopy = NewObject<UItemBase>(StaticClass());

	ItemCopy->ID= this->ID;
	ItemCopy->Quantity= this->Quantity;
	ItemCopy->ItemType= this->ItemType;
	ItemCopy->TextData= this->TextData;
	ItemCopy->ItemNumericData= this->ItemNumericData;
	ItemCopy->AssetData= this->AssetData;
	ItemCopy->bIsCopy=true;

	return ItemCopy;
}

void UItemBase::SetQuantity(const int32 NewQuantity)
{
	if(NewQuantity != Quantity)
	{
		Quantity = FMath::Clamp(NewQuantity,0,ItemNumericData.bIsStackable ? ItemNumericData.MaxStackSize: 1);

		if(OwningInventory)
		{
			if(Quantity<=0)
			{
				OwningInventory->RemoveSingleInstanceOfItem(this);
			}
		}
	}
}

void UItemBase::Use(APopUpPlayerController* Character)
{
}
