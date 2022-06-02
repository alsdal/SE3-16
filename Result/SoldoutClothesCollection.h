#ifndef LIST_SOLDOUTOUT_CLOTHES_COLLECTION_H
#define LIST_SOLDOUTOUT_CLOTHES_COLLECTION_H
#include <iostream>
#define MAX_NUMBER_OF_CLOTEHS  3

#include "Clothes.h"
#include "SellingClothesCollection.h"

class SoldoutClothesCollection
{
private:
    Clothes* memberSoldoutClothes[MAX_NUMBER_OF_CLOTEHS];
public:
    int clothesNum;
    string getSoldoutClothes(SellingClothesCollection sellingClothesCollection);
};

string SoldoutClothesCollection::getSoldoutClothes(SellingClothesCollection sellingClothesCollection){
    for(int i = 0; i<sellingClothesCollection.clothesNum; i++){
        if(sellingClothesCollection.memberSellingClothes[i]->getamount() == 0){
            memberSoldoutClothes[clothesNum++] = sellingClothesCollection.memberSellingClothes[i];
        }
    }

    string str;
    //앞에 판매자 ID, 뒤에 만족도 붙이기
    for(int i = 0; i<clothesNum; i++){
        str += memberSoldoutClothes[i]->getClothesDetail();
        str += memberSoldoutClothes[i]->getSatisfaction();
        str += '\n';
    }
    return str;
}




#endif