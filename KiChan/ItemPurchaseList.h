#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "SellingClothesCollection.h"

using namespace std;

class ItemPurchaseList
{
private:
	Clothes* purchasedItem[10];
	int satisfaction[10] = {0, };
	int purchase_num;

public:
	ItemPurchaseList(): purchase_num(0){}

	void addItem(Clothes *cloth);
	void setSatisfaction(int num);
	string callPurchaseList();
	string viewPurchaseSatisfaction(SellingClothesCollection sellingClothesCollection, string name, int num);

	~ItemPurchaseList() {};
};