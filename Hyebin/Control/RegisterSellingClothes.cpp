#include "RegisterSellingClothes.h"
#include "../Entity/SellingClothesCollection.h"
#include <iostream>


using namespace std;

void RegisterSellingClothes::addSellingClothes(string ClothesName, string clothesCompanyName, int price, int amount){
    SellingClothesCollection sellingClothesCollection;
    sellingClothesCollection.addNewClothesMember(ClothesName, clothesCompanyName,  price,  amount);
}