#ifndef REGISTER_SELLING_CLOTHES_UI_H
#define REGISTER_SELLING_CLOTHES_UI_H
#include <iostream>
#include <string>

#include "../Control/RegisterSellingClothes.h"

using namespace std;

class RegisterSellingClothesUI
{
public:
    void addSellingClothes(string ClothesName, string clothesCompanyName, int price, int amount);
    void showRegistPage(){};
};

void RegisterSellingClothesUI::addSellingClothes(string ClothesName, string clothesCompanyName, int price, int amount){
    RegisterSellingClothes registerSellingClothes;
    registerSellingClothes.addSellingClothes( ClothesName,  clothesCompanyName, price, amount);
}
#endif