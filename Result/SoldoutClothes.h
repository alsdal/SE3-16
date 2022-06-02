#ifndef SOLDOUTOUT_CLOTHES_H
#define SOLDOUTOUT_CLOTHES_H
#include <iostream>
#include "SoldoutClothesCollection.h"
#include "SellingClothesCollection.h"

class SoldoutClothes
{
private:
    SoldoutClothesCollection soldoutClothesCollection;
public:
    string listSoldoutClothes(SellingClothesCollection sellingClothesCollection);
};

string SoldoutClothes::listSoldoutClothes(SellingClothesCollection sellingClothesCollection){
    return soldoutClothesCollection.getSoldoutClothes(sellingClothesCollection);
}

#endif