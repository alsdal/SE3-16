#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include "ItemPurchase.h"

using namespace std;

class ItemPurchaseUI
{
private:
	ItemPurchase item_purchase;
	
public:
	string selectPurchase(ItemPurchaseList* item_list, SellingClothesCollection cloth, string itemname);
};