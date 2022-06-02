#ifndef LIST_SOLDOUT_CLOTHES_UI_H
#define LIST_SOLDOUT_CLOTHES_UI_H
#include <iostream>
#include "ListSoldoutClothes.h"
#include "SellingClothesCollection.h"

using namespace std;

// Class : ListSoldoutClothesUI
// Description: 판매완료 상품 확인 UI
// Author: Hyebin Cho
//
class ListSoldoutClothesUI
{
    private:
        ListSoldoutClothes listSoldoutClothes;
    public:
        string showSoldoutList(SellingClothesCollection sellingClothesCollection);
};


#endif