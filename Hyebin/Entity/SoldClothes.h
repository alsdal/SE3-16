#ifndef SOLDCLOTHES_H
#define SOLDCLOTHES_H
#include <iostream>
#include <string>

#include "SoldClothesCollection.h"

using namespace std;

class SoldClothes
{
private:
    int totalSoldMoney;
    int averageSatisfaction;
    int sellAmount;
    SoldClothesCollection soldClothesCollection;
public:
    int getTotalMoney();
    float getAvgSatisfaction();
    void listSoldClothes();
};



#endif