#pragma once


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"



DECLARE_MULTICAST_DELEGATE(FOnInventoryUpdated);
class UItemBase;

UENUM(BlueprintType)
enum class EItemAddResult : uint8
{
	//IAR= item add result
	
	IAR_NOItemAdded UMETA(DisplayName = "No item added"),
	IAR_PartialAmountItemAdded UMETA(DisplayName = "Partial amount of item added"),
	IAR_AllItemAdded UMETA(DisplayName = "all of item added") 
};

USTRUCT(BlueprintType)
struct FItemAddResult
{
	GENERATED_BODY()
	
	FItemAddResult() : ActualAmountAdded(0),
	OperationResult(EItemAddResult::IAR_NOItemAdded),
	ResultMessage(FText::GetEmpty())
	{};

	// Actual Amount of item that was added to the inventory 
	UPROPERTY(BlueprintReadOnly,Category= "Item Add Result")
	int32 ActualAmountAdded;
	// enum representing the end state of an add item operation
	UPROPERTY(BlueprintReadOnly,Category= "Item Add Result")
	EItemAddResult OperationResult;
	//informational message that can be passed with the result 
	UPROPERTY(BlueprintReadOnly,Category= "Item Add Result")
	FText ResultMessage;

	static FItemAddResult AddedNone(const FText& ErrorText)
	{
		FItemAddResult AddedNoneResult;
		AddedNoneResult.ActualAmountAdded=0;
		AddedNoneResult.OperationResult=EItemAddResult::IAR_NOItemAdded;
		AddedNoneResult.ResultMessage=ErrorText;
		return AddedNoneResult;
	};
	static FItemAddResult AddedPartial(const int32 PartialAmountAdded,const FText& ErrorText)
	{
		FItemAddResult AddedPartialResult;
		AddedPartialResult.ActualAmountAdded=0;
		AddedPartialResult.OperationResult=EItemAddResult::IAR_PartialAmountItemAdded;
		AddedPartialResult.ResultMessage=ErrorText;
		return AddedPartialResult;
		
	};
	static FItemAddResult AddedAll(const int32 AmountAdded,const FText& Message)
	{
		FItemAddResult AddedAllResult;
		AddedAllResult.ActualAmountAdded=0;
		AddedAllResult.OperationResult=EItemAddResult::IAR_AllItemAdded;
		AddedAllResult.ResultMessage=Message;
		return AddedAllResult;

	};
	
	
	
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class POPUP_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	/////////////////////////////////////
	///Properties & variables
	////////////////////////////////////
	FOnInventoryUpdated OnInventoryUpdated;



	
	/////////////////////////////////////
	///Functions
	////////////////////////////////////
	
	UInventoryComponent();
	
	UFUNCTION(Category="Inventory")
	FItemAddResult HandleAddItem(UItemBase* InputItem);

	
	UFUNCTION(Category="Inventory")
	UItemBase* FindMatchingItem(UItemBase* ItemIn)const;
	UFUNCTION(Category="Inventory")
	UItemBase* FindNextItemByID(UItemBase* ItemIn)const;
	UFUNCTION(Category="Inventory")
	UItemBase* FindNextPartialStack(UItemBase* ItemIn)const;

	
	
	UFUNCTION(Category="Inventory")
	void RemoveSingleInstanceOfItem(UItemBase* ItemToRemove);
	UFUNCTION(Category="Inventory")
	int32 RemoveAmountOfItem(UItemBase* ItemIn,int32 DesiredAmountToRemove);
	UFUNCTION(Category="Inventory")
	void SplitExistingStack(UItemBase* ItemIn,const int32 AmountToSplit);

	//getters
	UFUNCTION(Category="Inventory")
	FORCEINLINE float GetInventoryTotalWeight() const {return InventoryTotalWeight;};
	
	UFUNCTION(Category="Inventory")
	FORCEINLINE float GetWeightCapacity() const {return InventoryWeightCapacity;};
	
	UFUNCTION(Category="Inventory")
	FORCEINLINE int32 GetSlotsCapacity() const {return InventorySlotsCapacity;};
	
	UFUNCTION(Category="Inventory")
	FORCEINLINE TArray<UItemBase*>GetInventoryContents()const {return InventoryContents;};
	
	//Setters
	UFUNCTION(Category="Inventory")
	FORCEINLINE void SetSlotsCapacity(const int32 NewSlotsCapacity) {InventorySlotsCapacity = NewSlotsCapacity;};
	
	UFUNCTION(Category="Inventory")
	FORCEINLINE void SetWeightCapacity(const float NewWeightCapacity) {InventoryWeightCapacity = NewWeightCapacity;};
	

protected:

	/////////////////////////////////////
	///Properties & variables
	////////////////////////////////////
	UPROPERTY(VisibleAnywhere,Category= "Inventory")
	float InventoryTotalWeight;
	UPROPERTY(EditInstanceOnly,Category= "Inventory")
	int32 InventorySlotsCapacity;
	UPROPERTY(EditInstanceOnly,Category= "Inventory")
	float InventoryWeightCapacity;
	
	UPROPERTY(VisibleAnywhere,Category= "Inventory")
	TArray<TObjectPtr<UItemBase>> InventoryContents;
	


	
	/////////////////////////////////////
	///Functions
	////////////////////////////////////
	
	virtual void BeginPlay() override;

	FItemAddResult HandleNonStackableItem(UItemBase* ItemIn);
	int32 HandleStackableItems(UItemBase* ItemIn, int32 RequestedAddAmount);
	int32 CalculateWeightAddAmount(UItemBase* ItemIn, int32 RequestedAddAmount);
	int32 CalculateNumberForFullStack(UItemBase* StackableItem, int32 InitialRequestedAddAmount);

	void AddNewItem(UItemBase* Item, const int32 AmoutToAdd);
	
};
