#ifndef REGISTER_SELLING_CLOTHES_H
#define REGISTER_SELLING_CLOTHES_H
#include <iostream>
#include "../Entity/SellingClothesCollection.h"
using namespace std;

class RegisterSellingClothes
{
    private:
        SellingClothesCollection sellingClothesCollection;
    public:
        Clothes* addSellingClothes(string clothesName, string clothesCompanyName, int price, int amount);
};


Clothes* RegisterSellingClothes::addSellingClothes(string clothesName, string clothesCompanyName, int price, int amount){
    return sellingClothesCollection.addNewClothesMember(clothesName,  clothesCompanyName, price, amount);
}


#endif