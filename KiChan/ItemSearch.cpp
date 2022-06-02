#include <stdio.h>
#include <string.h>
#include "ItemSearch.h"
#include <iostream>
#include <fstream>

using namespace std;

// 등록된 item중에서 이름과 맞는 item을 찾기
// item을 찾은 후 상세내용 호출
string ItemSearch::searchItem(SellingClothesCollection cloth, string name)
{
	string detail = "";
	for (int i = 0; i < 3; i++)
	{
		if (name == cloth.memberSellingClothes[i]->getClothesName())
		{
			detail = cloth.memberSellingClothes[i]->itemSpecific();
			
			return detail;
		}
	}
	return 0;
}