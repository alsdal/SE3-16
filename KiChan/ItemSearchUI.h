#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include "ItemSearch.h"

using namespace std;

class ItemSearchUI
{
private:
	ItemSearch item_search;

public:
	string inputItemName(SellingClothesCollection cloth, string name);
};