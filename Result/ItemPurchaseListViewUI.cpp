#include "ItemPurchaseListViewUI.h"

string ItemPurchaseListViewUI::selectPurchaseList(ItemPurchaseList* purchaseList)
{
	return purchaseListView.checkPurchaseList(purchaseList);
}

string ItemPurchaseListViewUI::inputSatisfaction(ItemPurchaseList* purchaseList, SellingClothesCollection sellingClothesCollection, string name, int num)
{
	return purchaseListView.checkSatisfaction(purchaseList, sellingClothesCollection, name, num);
}