#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include "ItemPurchaseListView.h"

class ItemPurchaseListViewUI
{
private:
	ItemPurchaseListView purchaseListView;

public:
	string seleckPurchaseList(ItemPurchaseList* purchaseList);
	string inputSatisfaction(ItemPurchaseList* purchaseList, SellingClothesCollection sellingClothesCollection, string name, int num);
};