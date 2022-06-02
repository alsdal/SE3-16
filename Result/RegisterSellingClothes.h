#ifndef REGISTER_SELLING_CLOTHES_H
#define REGISTER_SELLING_CLOTHES_H
#include <iostream>
#include "SellingClothesCollection.h"
using namespace std;

// Class : RegisterSellingClothes
// Description: 판매등록 Control 클래스
// Author: Hyebin Cho
//
class RegisterSellingClothes
{
    private:
        SellingClothesCollection sellingClothesCollection;
    public:
        RegisterSellingClothes(void){} 
        ~RegisterSellingClothes(void){}
        Clothes* addSellingClothes(string clothesName, string clothesCompanyName, int price, int amount, string SellerID );
};




#endif