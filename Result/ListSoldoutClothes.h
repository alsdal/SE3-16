#ifndef LIST_SOLDOUT_CLOTHES_H
#define LIST_SOLDOUT_CLOTHES_H
#include <iostream>
#include "SoldoutClothes.h"
#include "SellingClothesCollection.h"

class ListSoldoutClothes
{
private:
    SoldoutClothes soldoutClothes;
public:
    string showSoldoutList(SellingClothesCollection sellingClothesCollection);
};

string ListSoldoutClothes::showSoldoutList(SellingClothesCollection sellingClothesCollection){
    return soldoutClothes.listSoldoutClothes( sellingClothesCollection);
}

#endif