#ifndef LIST_SELLING_CLOTHES_UI_H
#define LIST_SELLING_CLOTHES_UI_H
#include <iostream>
#include <string>

#include "ListSellingClothes.h"
#include "SellingClothesCollection.h"

using namespace std;

// Class : ListSellingClothesUI
// Description: 판매중인 상품 확인 UI
// Author: Hyebin Cho
//
class ListSellingClothesUI
{
private:
    ListSellingClothes listSellingClothes;
public:
    string showSellingClothesList(SellingClothesCollection sellingClothesCollection);
};


#endif