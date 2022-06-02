#include <stdio.h>
#include <string.h>
#include "ItemPurchaseListView.h"


// Description: ���Ÿ�� ���
// Parameters: purchaseList - ���Ÿ��
string ItemPurchaseListView::checkPurchaseList(ItemPurchaseList* purchaseList)
{
	return purchaseList -> callPurchaseList();
}

// Description: ���Ÿ����� �Է�
// Parameters: purchaseList - ���Ÿ��, sellingClothesCollection - �ǸŸ��, name - ������ �̸�, num - ���Ÿ�����
string ItemPurchaseListView::checkSatisfaction(ItemPurchaseList* purchaseList, SellingClothesCollection sellingClothesCollection, string name, int num)
{
	return purchaseList -> viewPurchaseSatisfaction(sellingClothesCollection, name, num);
}
