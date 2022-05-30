#ifndef SELLINGSTATICS_H
#define SELLINGSTATICS_H
#include <iostream>
#include <string>

#include "SoldClothes.h"

using namespace std;

class SellingStatistics
{
    private:
        int totalSoldMoney;
        float averageSatisfaction;
    public:
        SellingStatistics(){
            SoldClothes *soldClothes;
            totalSoldMoney = soldClothes->getTotalMoney();
            averageSatisfaction = soldClothes->getAvgSatisfaction();
        }
        void getSellingStatics();
};


#endif