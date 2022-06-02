#include "ItemSearchUI.h"

string ItemSearchUI::inputItemName(SellingClothesCollection cloth, string name)
{
	return item_search.searchItem(cloth, name);
}