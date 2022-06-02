#include <stdio.h>
#include "ItemPurchaseList.h"


// Description: ���Ÿ�Ͽ� ������ �߰�
// Parameters: cloth - ������
void ItemPurchaseList::addItem(Clothes* cloth)
{
	purchasedItem[purchase_num++] = cloth;
}

// Description: ���Ÿ����� �Է�
// Parameters: num - ���Ÿ�����
void ItemPurchaseList::setSatisfaction(int num)
{
	this -> satisfaction[purchase_num] = num;
}


// Description: ������ �������� ����ŭ ������ �󼼳��� ���
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

// Description: ���Ÿ����� �Է°� ��ձ��Ÿ����� ������Ʈ 
//				�Ǹ���ID, �������̸�, ���Ÿ����� ���
// Parameters: sellingClothesCollection - �ǸŸ��, name - ������ �̸�, num - ���Ÿ�����
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
	// �ǸŸ�Ͽ��� �Ǹ� ��ǰ�� ��ձ��Ÿ����� ������Ʈ
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