#pragma once
#include <stdio.h>
#include <string.h>
#include "ItemPurchaseList.h"
#include "SellingClothesCollection.h"

class ItemPurchaseListView
{
private:
public:
	string checkPurchaseList(ItemPurchaseList* purchaseList);
	string checkSatisfaction(ItemPurchaseList* purchaseList, SellingClothesCollection sellingClothesCollection, string name, int num);
};