// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Inventory/ItemDataStructs.h"
#include "ItemBase.generated.h"

class APlayerCharacter;
class UInventoryComponent;

UCLASS()
class POPUP_API UItemBase : public UObject
{
	GENERATED_BODY()

public:
	UItemBase();

	UPROPERTY()
	UInventoryComponent* OwningInventory;

	UPROPERTY(VisibleAnywhere, Category="Item")
	int32 Quantity;

	UPROPERTY(VisibleAnywhere, Category="Item")
	FName ID;

	UPROPERTY(VisibleAnywhere, Category="Item")
	FItemTextData TextData;

	UPROPERTY(VisibleAnywhere, Category="Item")
	FItemNumericData ItemNumericData;

	UPROPERTY(VisibleAnywhere, Category="Item")
	FItemAssetData AssetData;

	bool bIsCopy;
	bool bIsPickup;

	void ResetItemFlags();

	UItemBase* CreateItemCopy() const;

	UFUNCTION(Category="Item")
	FORCEINLINE float isFullItemStack() const { return Quantity == ItemNumericData.MaxStackSize; };

	UFUNCTION(Category="Item")
	void SetQuantity(const int32 NewQuantity);

	UFUNCTION(Category="Item")
	virtual void Use(APlayerCharacter* Character);

protected:
	bool operator==(const FName& OtherID) const
	{
		return this->ID == OtherID;
	}
};
