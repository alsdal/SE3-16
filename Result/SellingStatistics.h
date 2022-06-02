#ifndef SELLING_STATISTICS_H
#define SELLING_STATISTICS_H
#include <iostream>
#include <string>

#include "SellingClothesCollection.h"


using namespace std;


class SellingStatistics
{
private:
    SellingClothesCollection sellingClothesCollection;
public:
    string getSellingStatistics(SellingClothesCollection sellingClothesCollection);
};

string SellingStatistics::getSellingStatistics(SellingClothesCollection sellingClothesCollection){
    string str;
    for(int i =0; i< sellingClothesCollection.clothesNum; i++){
        int sum = 0, avgSatisfaction = 0;
        int price = sellingClothesCollection.memberSellingClothes[i]->getPrice();
        int sellingAmount = sellingClothesCollection.memberSellingClothes[i]->sellingNum; 
        string clothesName = sellingClothesCollection.memberSellingClothes[i]->getClothesName();
        sum += price * sellingAmount;
        avgSatisfaction+= sellingClothesCollection.memberSellingClothes[i]->getSatisfaction(); 
        str +=  (clothesName + ' ' + to_string(sum) + ' ' + to_string(avgSatisfaction) + '\n');
    }
    return str;
}


#endif