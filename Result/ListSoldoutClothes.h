#ifndef LIST_SOLDOUT_CLOTHES_H
#define LIST_SOLDOUT_CLOTHES_H
#include <iostream>
#include "SoldoutClothes.h"
#include "SellingClothesCollection.h"

// Class : ListSoldoutClothes
// Description: 판매완료 상품 확인 Control 클래스
// Author: Hyebin Cho
class ListSoldoutClothes
{
private:
    SoldoutClothes soldoutClothes;
public:
    string showSoldoutList(SellingClothesCollection sellingClothesCollection);
};

#endif