#include <iostream>
#define MAX_NUMBER_OF_CLOTEHS  100

#include "Clothes.h"
#include "SellingClothesCollection.h"
#include "SoldoutClothesCollection.h"


// Function : string getSoldoutClothes(SellingClothesCollection sellingClothesCollection)
// Description: 판매완료의류 가져오기
// Parameters : SellingClothesCollection sellingClothesCollection - 판매 collection
// Return Value :  판매 완료 의류 정보
string SoldoutClothesCollection::getSoldoutClothes(SellingClothesCollection sellingClothesCollection){
    for(int i = 0; i<sellingClothesCollection.clothesNum; i++){
        if(sellingClothesCollection.memberSellingClothes[i]->getamount() == 0){
            memberSoldoutClothes[clothesNum++] = sellingClothesCollection.memberSellingClothes[i];
        }
    }

    string str;
    for(int i = 0; i<clothesNum; i++){
        str += memberSoldoutClothes[i]->getClothesDetail();
        str += memberSoldoutClothes[i]->getSatisfaction();
        str += '\n';
    }
    return str;
}
