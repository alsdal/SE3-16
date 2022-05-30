#ifndef SOLDCLOTHESCOLLECTION_H
#define SOLDCLOTHESCOLLECTION_H
#include <iostream>
#include <string>

#include "Clothes.h"
#include "SellingClothesCollection.h"

#define MAX_NUMBER_OF_CLOTEHS  100
using namespace std;


class SoldClothesCollection
{
    private:
        Clothes *memberSoldClothes[MAX_NUMBER_OF_CLOTEHS];
    public:
            int clothesNum = 0;
        SoldClothesCollection(){
            *this->memberSoldClothes = NULL; //이렇게 초기화 하는게 맞나 헷갈린다.
        }
        void addSoldClothesMember();
        Clothes *findFirst(){
            Clothes *firstClothes = this->memberSoldClothes[0];
            return firstClothes;
        }
        Clothes* getNext(Clothes *clothes){
            Clothes *nextCloth;
            nextCloth = clothes + 1;
            return nextCloth;
        };
        

};


#endif