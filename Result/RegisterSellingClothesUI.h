#ifndef REGISTER_SELLING_CLOTHES_UI_H
#define REGISTER_SELLING_CLOTHES_UI_H
#include <iostream>
#include <string>

#include "RegisterSellingClothes.h"
#include "SellingClothesCollection.h"


using namespace std;

// Class : RegisterSellingClothesUI
// Description: 판매 등록 UI
// Author: Hyebin Cho
//
class RegisterSellingClothesUI
{
private:
    RegisterSellingClothes registerSellingClothes;
public:
    RegisterSellingClothesUI(void){}
    ~RegisterSellingClothesUI(void){}
    Clothes* addSellingClothes(string ClothesName, string clothesCompanyName, int price, int amount, string SellerID );
    void showRegistPage(){};
};

#endif