#ifndef LIST_SOLDOUT_CLOTHES_H
#define LIST_SOLDOUT_CLOTHES_H
#include <iostream>
#include "../Entity/SoldoutClothes.h"
#include "..\Entity\SellingClothesCollection.h"

class ListSoldoutClothes
{
private:
    SoldoutClothes soldoutClothes;
public:
    void showSoldoutList(SellingClothesCollection sellingClothesCollection);
};

void ListSoldoutClothes::showSoldoutList(SellingClothesCollection sellingClothesCollection){
    soldoutClothes.listSoldoutClothes( sellingClothesCollection);
}

#endif