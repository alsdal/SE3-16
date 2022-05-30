#include "SoldClothes.h"
#include "Clothes.h"
#include <iostream>

using namespace std;

int SoldClothes::getTotalMoney(){
    Clothes *clothes = soldClothesCollection.findFirst();
    int sum = 0;
    while(clothes != NULL){
        sum += clothes->getPrice();
        clothes = soldClothesCollection.getNext(clothes);
    }
    return sum;
}

float SoldClothes::getAvgSatisfaction(){
    Clothes *clothes = soldClothesCollection.findFirst();
    int sum = 0;
    while(clothes != NULL){
        sum += clothes->getSatisfaction();
        clothes = soldClothesCollection.getNext(clothes);
    }
    return sum/soldClothesCollection.clothesNum;
}

void SoldClothes::listSoldClothes(){
    Clothes *clothes = soldClothesCollection.findFirst();
    while(clothes != NULL){
        clothes->getClothesDetail();
        clothes = soldClothesCollection.getNext(clothes);
    }
}