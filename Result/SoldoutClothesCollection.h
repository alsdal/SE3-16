#ifndef LIST_SOLDOUTOUT_CLOTHES_COLLECTION_H
#define LIST_SOLDOUTOUT_CLOTHES_COLLECTION_H
#include <iostream>
#define MAX_NUMBER_OF_CLOTEHS  100

#include "Clothes.h"
#include "SellingClothesCollection.h"

// Class : SoldoutClothesCollection
// Description: 판매완료 상품 Collection 클래스
// Author: Hyebin Cho
//
class SoldoutClothesCollection
{
private:
    Clothes* memberSoldoutClothes[MAX_NUMBER_OF_CLOTEHS];
public:
    int clothesNum;
    string getSoldoutClothes(SellingClothesCollection sellingClothesCollection);
};




#endif