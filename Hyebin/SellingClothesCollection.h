#ifndef SELLINGCLOTHESCOLLECTION_H
#define SELLINGCLOTHESCOLLECTION_H
#include <iostream>
#include <string>

#include "SellingClothes.h"

#define MAX_NUMBER_OF_CLOTEHS  100
using namespace std;


class SellingClothesCollection
{
    private:
        SellingClothes *memberSellingClothes[MAX_NUMBER_OF_CLOTEHS];
    public:
        void addNewClothesMember();
        SellingClothes *findFirst();
        SellingClothes *getNext();
};

#endif