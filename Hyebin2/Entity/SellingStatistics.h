#ifndef SELLING_STATISTICS_H
#define SELLING_STATISTICS_H
#include <iostream>
#include <string>

#include "./SellingClothesCollection.h"


using namespace std;


class SellingStatistics
{
private:
    SellingClothesCollection sellingClothesCollection;
public:
    void getSellingStatistics(SellingClothesCollection sellingClothesCollection);
};

void SellingStatistics::getSellingStatistics(SellingClothesCollection sellingClothesCollection){
    int sum = 0, avgSatisfaction = 0;
    for(int i =0; i< sellingClothesCollection.clothesNum; i++){
        int price = sellingClothesCollection.memberSellingClothes[i]->getPrice();
        int sellingAmount = sellingClothesCollection.memberSellingClothes[i]->sellingNum;
        sum += price * sellingAmount;
        avgSatisfaction+= sellingClothesCollection.memberSellingClothes[i]->getSatisfaction();
    }
    avgSatisfaction = avgSatisfaction / sellingClothesCollection.clothesNum;
    cout << sum << " " << avgSatisfaction << endl;
}


#endif