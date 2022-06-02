#include <stdio.h>
#include "ItemPurchaseList.h"


// Description: 구매목록에 아이템 추가
// Parameters: cloth - 아이템
void ItemPurchaseList::addItem(Clothes* cloth)
{
	purchasedItem[purchase_num++] = cloth;
}

// Description: 구매만족도 입력
// Parameters: num - 구매만족도
void ItemPurchaseList::setSatisfaction(int num)
{
	this -> satisfaction[purchase_num] = num;
}


// Description: 구입한 아이템의 수만큼 아이템 상세내용 출력
// Parameters: 
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

// Description: 구매만족도 입력과 평균구매만족도 업데이트 
//				판매자ID, 아이템이름, 구매만족도 출력
// Parameters: sellingClothesCollection - 판매목록, name - 아이템 이름, num - 구매만족도
string ItemPurchaseList::viewPurchaseSatisfaction( SellingClothesCollection sellingClothesCollection, string name, int num)
{
	int average_satisfaction;
	string output = "";
	
	for (int i = 0; i < purchase_num; i++)
	{
		if (name == purchasedItem[i] -> getClothesName())
		{
			setSatisfaction(num);
			output = purchasedItem[i] -> getSellerID() + " " + purchasedItem[i] -> getClothesName() + " " + to_string(num);
		}
	}
	// 판매목록에서 판매 물품의 평균구매만족도 업데이트
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