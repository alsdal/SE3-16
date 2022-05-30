#ifndef SOLDOUTOUT_CLOTHES_H
#define SOLDOUTOUT_CLOTHES_H
#include <iostream>
#include "./SoldoutClothesCollection.h"
#include "..\Entity\SellingClothesCollection.h"

class SoldoutClothes
{
private:
    SoldoutClothesCollection soldoutClothesCollection;
public:
    void listSoldoutClothes(SellingClothesCollection sellingClothesCollection);
};

void SoldoutClothes::listSoldoutClothes(SellingClothesCollection sellingClothesCollection){
    soldoutClothesCollection.getSoldoutClothes(sellingClothesCollection);
}

#endif