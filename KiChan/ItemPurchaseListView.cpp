#include <stdio.h>
#include <string.h>
#include "ItemPurchaseListView.h"


string ItemPurchaseListView::checkPurchaseList(ItemPurchaseList* purchaseList)
{
	return purchaseList->callPurchaseList();
}

string ItemPurchaseListView::checkSatisfaction(ItemPurchaseList* purchaseList, SellingClothesCollection sellingClothesCollection, string name, int num)
{
	return purchaseList->viewPurchaseSatisfaction(sellingClothesCollection, name, num);
}
