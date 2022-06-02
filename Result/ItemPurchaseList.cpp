#include <stdio.h>
#include "ItemPurchaseList.h"


void ItemPurchaseList::addItem(Clothes* cloth)
{
	purchasedItem[purchase_num++] = cloth;
}

void ItemPurchaseList::setSatisfaction(int num)
{
	this -> satisfaction[purchase_num] = num;
}


// 구입한 아이템의 수만큼 아이템 상세내용 출력
string ItemPurchaseList::callPurchaseList()
{
	string detail = "";
	string output = "";
	for (int i = 0; i < purchase_num; i++)
	{
		detail = this -> purchasedItem[i] -> itemSpecific();
		output += detail;
	}
	return output;
}

// SellingClothesCollection의 cloth의 evaluation값 변경
string ItemPurchaseList::viewPurchaseSatisfaction( SellingClothesCollection sellingClothesCollection, string name, int num)
{
	int average_satisfaction;
	string output = "";
	// 구매 목록에서 구매만족도 입력후 아이템 내용 출력
	for (int i = 0; i < purchase_num; i++)
	{
		if (name == purchasedItem[i] -> getClothesName())
		{
			setSatisfaction(num);
			output = purchasedItem[i] -> getSellerID() + " " + purchasedItem[i] -> getClothesName() + " " + to_string(num);
		}
	}
	// 판매목록에서 판매 물품의 평균구매만족도  업데이트
	for (int j = 0; j < 3; j++)
	{
		if (name == sellingClothesCollection.memberSellingClothes[j] -> getClothesName())
		{
			average_satisfaction = sellingClothesCollection.memberSellingClothes[j]->satisfactionEvaluate(num);
			break;
		}
	}
	
	return output;
	
}