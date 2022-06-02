#include "ItemSearchUI.h"

// Description: 아이템 이름 검색
// Parameters: cloth - 판매목록, name - 아이템 이름
string ItemSearchUI::inputItemName(SellingClothesCollection cloth, string name)
{
	return item_search.searchItem(cloth, name);
}