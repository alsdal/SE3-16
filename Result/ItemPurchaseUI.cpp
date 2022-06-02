#include "ItemPurchaseUI.h"

// Description: 구매 선택
// Parameters: item_list - 구매목록, cloth - 판매목록, itemname: 아이템 이름
string ItemPurchaseUI::selectPurchase(ItemPurchaseList* item_list, SellingClothesCollection cloth, string itemname)
{
	return item_purchase.purchaseItem(item_list, cloth, itemname);
}