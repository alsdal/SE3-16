#ifndef SELLINGCLOTHESCOLLECTION_H
#define SELLINGCLOTHESCOLLECTION_H
#include <iostream>
#include <string>

#include "Clothes.h"

#define MAX_NUMBER_OF_CLOTEHS  100
using namespace std;


class SellingClothesCollection
{
    private:
        Clothes *memberSellingClothes[MAX_NUMBER_OF_CLOTEHS];
        int clothesNum = 0;
    public:
        SellingClothesCollection(){
            *this->memberSellingClothes = NULL; //이렇게 초기화 하는게 맞나 헷갈린다.
        }
        void addNewClothesMember(string ClothesName, string clothesCompanyName, int price, int amount);
        void removeSellingClothes(Clothes* clothes);
        Clothes *findFirst(){
            Clothes *firstClothes = this->memberSellingClothes[0];
            return firstClothes;
        }
        Clothes* getNext(Clothes *clothes){
            Clothes *nextClothes;
            nextClothes = clothes + 1;
            return nextClothes;
        };

};




#endif