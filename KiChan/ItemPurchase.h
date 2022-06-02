#pragma once
#include <stdio.h>
#include <string>
#include "SellingClothesCollection.h"
#include "ItemPurchaseList.h"

class ItemPurchase
{
private:

public:
	string purchaseItem(ItemPurchaseList* item_list, SellingClothesCollection cloth, string itemname);

};