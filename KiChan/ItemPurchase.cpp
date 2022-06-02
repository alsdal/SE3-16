#include <stdio.h>
#include <string.h>
#include "ItemPurchase.h"
#include "ItemPurchaseList.h"


string ItemPurchase::purchaseItem(ItemPurchaseList* item_list, SellingClothesCollection cloth, string itemname)
{
	Clothes new_cloth;

	for (int i = 0; i < 3; i++)
	{
		if (itemname == cloth.memberSellingClothes[i]->getClothesName())
		{
			string sellerID = cloth.memberSellingClothes[i]->getSellerID();
			string clothName = cloth.memberSellingClothes[i]->getClothesName();
			string companyName = cloth.memberSellingClothes[i]->getCompanyName();
			int price = cloth.memberSellingClothes[i]->getPrice();
			int amount = cloth.memberSellingClothes[i]->getamount();

			new_cloth = Clothes(clothName, companyName, price, amount, sellerID);

			item_list->addItem(&new_cloth);

			string detail = sellerID + " " + clothName;

			return detail;
		}
	}
	return 0;
}