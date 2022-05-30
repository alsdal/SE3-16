#include "SoldClothesCollection.h"
#include "SellingClothesCollection.h"
#include "Clothes.h"
#include <iostream>

using namespace std;

void SoldClothesCollection::addSoldClothesMember(){
    SellingClothesCollection *sellingCollection;
    Clothes *clothes = sellingCollection->findFirst();
    while(clothes != NULL){
        if(clothes->amount == 0){
            this->memberSoldClothes[clothesNum++] = clothes;
            sellingCollection->removeSellingClothes(clothes);
            break;
        }
        clothes = sellingCollection->getNext(clothes);
        
    }
}
