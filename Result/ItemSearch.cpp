#include <stdio.h>
#include <string.h>
#include "ItemSearch.h"
#include <iostream>
#include <fstream>

using namespace std;

// ��ϵ� item�߿��� �̸��� �´� item�� ã��
// item�� ã�� �� �󼼳��� ȣ��
string ItemSearch::searchItem(SellingClothesCollection cloth, string name)
{
	string detail = "";
	for (int i = 0; i < 3; i++)
	{
		if (name == cloth.memberSellingClothes[i] -> getClothesName())
		{
			detail = cloth.memberSellingClothes[i] -> itemSpecific();
			
			return detail;
		}
	}
	return 0;
}