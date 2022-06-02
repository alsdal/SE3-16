#include <stdio.h>
#include <string.h>
#include "ItemPurchaseListView.h"


// Description: 구매목록 출력
// Parameters: purchaseList - 구매목록
string ItemPurchaseListView::checkPurchaseList(ItemPurchaseList* purchaseList)
{
	return purchaseList -> callPurchaseList();
}

// Description: 구매만족도 입력
// Parameters: purchaseList - 구매목록, sellingClothesCollection - 판매목록, name - 아이템 이름, num - 구매만족도
string ItemPurchaseListView::checkSatisfaction(ItemPurchaseList* purchaseList, SellingClothesCollection sellingClothesCollection, string name, int num)
{
	return purchaseList -> viewPurchaseSatisfaction(sellingClothesCollection, name, num);
}
