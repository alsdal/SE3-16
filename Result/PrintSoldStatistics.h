#ifndef PRINT_SOLD_STATISTICS_H
#define PRINT_SOLD_STATISTICS_H
#include <iostream>
#include <string>

#include "SellingStatistics.h"



using namespace std;


class PrintSoldStatistics
{
private:
    SellingStatistics sellingStatistics;
public:
    string getSellingStatistics(SellingClothesCollection sellingClothesCollection);
};

string PrintSoldStatistics::getSellingStatistics(SellingClothesCollection sellingClothesCollection){
    return sellingStatistics.getSellingStatistics(sellingClothesCollection);
}

#endif