#ifndef LISTOFSOLDCLOTHES_H
#define LISTOFSOLDCLOTHES_H
#include <iostream>
#include <string>

using namespace std;

#include "SoldClothesCollection.h"

class ListOfSoldClothes
{
private:
    int totalSoldMoney;
    float averageSatisfaction;
    SoldClothesCollection memberOfSoldClotheesCollection;
public:
    int getTotalMoney();
    float getSatisfaction();
    void showListOfSoldClothes();
};



#endif