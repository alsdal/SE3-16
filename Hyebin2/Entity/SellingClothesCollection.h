#ifndef SELLINGCLOTHESCOLLECTION_H
#define SELLINGCLOTHESCOLLECTION_H
#include <iostream>
#include <string>

#include "Clothes.h"

#define MAX_NUMBER_OF_CLOTEHS  3
using namespace std;


class SellingClothesCollection
{
    private:
    public:
        int clothesNum;
        Clothes* memberSellingClothes[MAX_NUMBER_OF_CLOTEHS];
        Clothes* addNewClothesMember(string clothesName, string clothesCompanyName, int price, int amount);
        void getClothes(SellingClothesCollection sellingClothesCollection);
        

};

Clothes* SellingClothesCollection::addNewClothesMember(string clothesName, string clothesCompanyName, int price, int amount) {
    Clothes *newclothes = new Clothes(clothesName,clothesCompanyName,price, amount);
    memberSellingClothes[clothesNum++] = newclothes;
    return *(this->memberSellingClothes);
}

void SellingClothesCollection::getClothes(SellingClothesCollection sellingClothesCollection)
{
    for (int i = 0; i < sellingClothesCollection.clothesNum; i++) {
        sellingClothesCollection.memberSellingClothes[i]->getClothesDetail();
    }
}

#endif