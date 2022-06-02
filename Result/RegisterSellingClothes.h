#ifndef REGISTER_SELLING_CLOTHES_H
#define REGISTER_SELLING_CLOTHES_H
#include <iostream>
#include "SellingClothesCollection.h"
using namespace std;

class RegisterSellingClothes
{
    private:
        SellingClothesCollection sellingClothesCollection;
    public:
        RegisterSellingClothes(void){} 
        ~RegisterSellingClothes(void){}
        Clothes* addSellingClothes(string clothesName, string clothesCompanyName, int price, int amount, string SellerID );
};


Clothes* RegisterSellingClothes::addSellingClothes(string clothesName, string clothesCompanyName, int price, int amount, string SellerID ){
   return sellingClothesCollection.addNewClothesMember(clothesName,  clothesCompanyName, price, amount,SellerID);

}


#endif