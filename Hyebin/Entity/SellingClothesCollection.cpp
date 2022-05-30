#include "SellingClothesCollection.h"
#include "Clothes.h"
#include <iostream>

using namespace std;

void SellingClothesCollection::addNewClothesMember(string ClothesName, string clothesCompanyName, int price, int amount){
    Clothes* newClothes;
    newClothes = new Clothes( ClothesName, clothesCompanyName,  price, amount);
    this->memberSellingClothes[clothesNum++] = newClothes;
}

void SellingClothesCollection::removeSellingClothes(Clothes* clothes){
    for(int i = 0; i<clothesNum; i++){
        if(memberSellingClothes[i]->clothesName == clothes->clothesName){
            memberSellingClothes[i] = memberSellingClothes[i+1];
            break;    
        }
    }
}