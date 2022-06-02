#ifndef SOLDOUTOUT_CLOTHES_H
#define SOLDOUTOUT_CLOTHES_H
#include <iostream>
#include "SoldoutClothesCollection.h"
#include "SellingClothesCollection.h"

// Class : SoldoutClothes
// Description: 판매완료 상품 클래스
// Author: Hyebin Cho
//
class SoldoutClothes
{
private:
    SoldoutClothesCollection soldoutClothesCollection;
public:
    string listSoldoutClothes(SellingClothesCollection sellingClothesCollection);
};


#endif