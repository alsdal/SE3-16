#ifndef LIST_SOLDOUTOUT_CLOTHES_COLLECTION_H
#define LIST_SOLDOUTOUT_CLOTHES_COLLECTION_H
#include <iostream>
#define MAX_NUMBER_OF_CLOTEHS  3

#include "./Clothes.h"
#include "..\Entity\SellingClothesCollection.h"

class SoldoutClothesCollection
{
private:
    Clothes* memberSoldoutClothes[MAX_NUMBER_OF_CLOTEHS];
    int clothesNum;
public:
    void getSoldoutClothes(SellingClothesCollection sellingClothesCollection);
};

void SoldoutClothesCollection::getSoldoutClothes(SellingClothesCollection sellingClothesCollection){
    for(int i = 0; i<sellingClothesCollection.clothesNum; i++){
        if(sellingClothesCollection.memberSellingClothes[i]->getamount() == 0){
            memberSoldoutClothes[clothesNum++] = sellingClothesCollection.memberSellingClothes[i];
        }
    }

    for(int i = 0; i<clothesNum; i++){
        memberSoldoutClothes[i]->getClothesDetail();
    }
}




#endif