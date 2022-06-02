#include "ItemPurchaseUI.h"

string ItemPurchaseUI::selectPurchase(ItemPurchaseList* item_list, SellingClothesCollection cloth, string itemname)
{
	return item_purchase.purchaseItem(item_list, cloth, itemname);
}