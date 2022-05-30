#ifndef REGISTER_SELLING_CLOTHES_UI_H
#define REGISTER_SELLING_CLOTHES_UI_H
#include <iostream>
#include <string>

#include "../Control/RegisterSellingClothes.h"
#include "../Entity/SellingClothesCollection.h"

using namespace std;

class RegisterSellingClothesUI
{
private:
    RegisterSellingClothes registerSellingClothes;
public:
//메인에서 넘겨줘야함
    Clothes* addSellingClothes(string ClothesName, string clothesCompanyName, int price, int amount );
    void showRegistPage(){};
};

Clothes* RegisterSellingClothesUI::addSellingClothes(string ClothesName, string clothesCompanyName, int price, int amount ){
    return registerSellingClothes.addSellingClothes(ClothesName, clothesCompanyName, price,  amount);
    
}
#endif