#include "ItemSearchUI.h"

// Description: ������ �̸� �˻�
// Parameters: cloth - �ǸŸ��, name - ������ �̸�
string ItemSearchUI::inputItemName(SellingClothesCollection cloth, string name)
{
	return item_search.searchItem(cloth, name);
}