#include "ItemPurchaseUI.h"

// Description: ���� ����
// Parameters: item_list - ���Ÿ��, cloth - �ǸŸ��, itemname: ������ �̸�
string ItemPurchaseUI::selectPurchase(ItemPurchaseList* item_list, SellingClothesCollection cloth, string itemname)
{
	return item_purchase.purchaseItem(item_list, cloth, itemname);
}