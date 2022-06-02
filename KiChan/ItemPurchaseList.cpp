#include <stdio.h>
#include "ItemPurchaseList.h"


void ItemPurchaseList::addItem(Clothes* cloth)
{
	purchasedItem[purchase_num++] = cloth;
}


// ������ �������� ����ŭ ������ �󼼳��� ���
string ItemPurchaseList::callPurchaseList()
{
	string detail = "";
	string output = "";
	for (int i = 0; i < purchase_num; i++)
	{
		detail = this->purchasedItem[i]->itemSpecific();
		output += detail;
	}
	return output;
}

// SellingClothesCollection�� cloth�� evaluation�� ����
string ItemPurchaseList::viewPurchaseSatisfaction( SellingClothesCollection sellingClothesCollection, string name, int num)
{
	int average_satisfaction;
	string output = "";
	// ���� ��Ͽ��� ���Ÿ����� �Է��� ������ ���� ���
	for (int i = 0; i < purchase_num; i++)
	{
		if (name == purchasedItem[i]->getClothesName())
		{
			this -> satisfaction[i] = num;
			output = purchasedItem[i]->getSellerID() + " " + purchasedItem[i]->getClothesName() + " " + to_string(num);
		}
	}
	// �ǸŸ�Ͽ��� �Ǹ� ��ǰ�� ��ձ��Ÿ�����  ������Ʈ
	for (int j = 0; j < 3; j++)
	{
		if (name == sellingClothesCollection.memberSellingClothes[j]->getClothesName())
		{
			average_satisfaction = sellingClothesCollection.memberSellingClothes[j]->satisfactionEvaluate(num);
			break;
		}
	}
	
	return output;
	
}