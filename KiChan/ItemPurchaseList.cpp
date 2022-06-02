#include <stdio.h>
#include "ItemPurchaseList.h"


void ItemPurchaseList::addItem(Clothes* cloth)
{
	purchasedItem[purchase_num++] = cloth;
	purchasedItem[0]->itemSpecific();
}


// 구입한 아이템의 수만큼 아이템 상세내용 출력
string ItemPurchaseList::callPurchaseList()
{
	string detail = "";
	for (int i = 0; i < purchase_num; i++)
	{
		detail = this->purchasedItem[i]->itemSpecific();
		detail += detail;
	}
	return detail;
}

// SellingClothesCollection의 cloth의 evaluation값 변경
string ItemPurchaseList::viewPurchaseSatisfaction(ItemPurchaseList* item_list, SellingClothesCollection sellingClothesCollection, string name, int num)
{
	int satisfaction = 0;
	string output = "";
	for (int i = 0; i < purchase_num; i++)
	{
		if (name == purchasedItem[purchase_num]->getClothesName())
		{
			this -> satisfaction[purchase_num] = num;
		}
	}
	for (int j = 0; j < 3; j++)
	{
		if (name == sellingClothesCollection.memberSellingClothes[j]->getClothesName())
		{
			satisfaction = sellingClothesCollection.memberSellingClothes[j]->satisfactionEvaluate(num);
			output = sellingClothesCollection.memberSellingClothes[j]->getSellerID() + " " + sellingClothesCollection.memberSellingClothes[j]->getClothesName() + " " 
				+ to_string(sellingClothesCollection.memberSellingClothes[j]->getSatisfaction());
		}
	}
	
	return output;
	
}