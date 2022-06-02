#ifndef REGISTER_SELLING_CLOTHES_UI_H
#define REGISTER_SELLING_CLOTHES_UI_H
#include <iostream>
#include <string>

#include "RegisterSellingClothes.h"
#include "SellingClothesCollection.h"


using namespace std;

class RegisterSellingClothesUI
{
private:
    RegisterSellingClothes registerSellingClothes;
public:
//메인에서 넘겨줘야함
    RegisterSellingClothesUI(void){}
    ~RegisterSellingClothesUI(void){}
    Clothes* addSellingClothes(string ClothesName, string clothesCompanyName, int price, int amount, string SellerID );
    void showRegistPage(){};
};

Clothes* RegisterSellingClothesUI::addSellingClothes(string ClothesName, string clothesCompanyName, int price, int amount, string SellerID ){
    return registerSellingClothes.addSellingClothes(ClothesName, clothesCompanyName, price,  amount, SellerID);
    
}
#endif