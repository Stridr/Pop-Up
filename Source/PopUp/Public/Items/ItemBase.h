// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/ItemDataStructs.h"
#include "ItemBase.generated.h"

class APlayerCharacter;
class UInventoryComponent;
/**
 * 
 */
UCLASS()
class POPUP_API UItemBase : public UObject
{
	GENERATED_BODY()
	
public:
	/////////////////////////////////////
	///Properties & variables
	////////////////////////////////////

	//UPROPERTY()
	UInventoryComponent* OwningInventory;
	
	UPROPERTY(VisibleAnywhere,Category="Item")
	int32 Quantity;
	
	UPROPERTY(VisibleAnywhere,Category="Item")
	FName ID;
	
	UPROPERTY(VisibleAnywhere,Category="Item")
	EItemType ItemType;
	
	UPROPERTY(VisibleAnywhere,Category="Item")
	FItemTextData TextData;
	
	UPROPERTY(VisibleAnywhere,Category="Item")
	FItemNumericData ItemNumericData;
	
	UPROPERTY(VisibleAnywhere,Category="Item")
	FItemAssetData AssetData;

	bool bIsCopy;
	bool bIsPickup;
	
	
	/////////////////////////////////////
	///Functions
	////////////////////////////////////

	void ResetItemFlags();
	UItemBase();
	UItemBase* CreateItemCopy() const;
	
	UFUNCTION(Category="Item")
	FORCEINLINE float GetItemStackWeight() const {return Quantity * ItemNumericData.Weight;};
	
	UFUNCTION(Category="Item")
	FORCEINLINE float GetItemSingleWeight() const {return ItemNumericData.Weight;};
	
	UFUNCTION(Category="Item")
	FORCEINLINE float isFullItemStack() const {return Quantity == ItemNumericData.MaxStackSize;};
	
	UFUNCTION(Category="Item")
	void SetQuantity (const int32 NewQuantity);
	
	UFUNCTION(Category="Item")
	virtual  void Use(APlayerCharacter* Character);

protected:
	bool operator==(const FName& OtherID) const
	{
		return this-> ID == OtherID;
	}
	
};
