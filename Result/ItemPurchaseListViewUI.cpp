#include "ItemPurchaseListViewUI.h"

// Description: 구매 만족도 출력
// Parameters: purchaseList - 구매목록
string ItemPurchaseListViewUI::selectPurchaseList(ItemPurchaseList* purchaseList)
{
	return purchaseListView.checkPurchaseList(purchaseList);
}

// Description: 구매만족도 입력
// Parameters: purchaseList - 구매목록, sellingClothesCollection - 판매목록, name - 아이템 이름, num - 구매만족도
string ItemPurchaseListViewUI::inputSatisfaction(ItemPurchaseList* purchaseList, SellingClothesCollection sellingClothesCollection, string name, int num)
{
	return purchaseListView.checkSatisfaction(purchaseList, sellingClothesCollection, name, num);
}