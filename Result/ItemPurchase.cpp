#include <stdio.h>
#include <string.h>
#include "ItemPurchase.h"
#include "ItemPurchaseList.h"

// Description: 아이템 구매시 구매목록에 아이템 추가 및 판매자ID, 아이템 이름 출력
// Parameters: item_list-구매목록, cloth-판매목록, itemname-상품이름
string ItemPurchase::purchaseItem(ItemPurchaseList* item_list, SellingClothesCollection cloth, string itemname)
{
	Clothes new_cloth;

	for (int i = 0; i < 3; i++)
	{
		if (itemname == cloth.memberSellingClothes[i] -> getClothesName())
		{
			string sellerID = cloth.memberSellingClothes[i] -> getSellerID();
			string clothName = cloth.memberSellingClothes[i] -> getClothesName();
			string companyName = cloth.memberSellingClothes[i] -> getCompanyName();
			int price = cloth.memberSellingClothes[i] -> getPrice();
			int amount = cloth.memberSellingClothes[i] -> getamount();
			amount -= 1;

			Clothes* new_cloth = new Clothes(clothName, companyName, price, amount, sellerID);

			item_list -> addItem(new_cloth);

			string detail = sellerID + " " + clothName + "\n";

			return detail;
		}
	}
	return 0;
}