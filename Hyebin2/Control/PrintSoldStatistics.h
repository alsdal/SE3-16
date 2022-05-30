#ifndef PRINT_SOLD_STATISTICS_H
#define PRINT_SOLD_STATISTICS_H
#include <iostream>
#include <string>

#include "../Entity/SellingStatistics.h"



using namespace std;


class PrintSoldStatistics
{
private:
    SellingStatistics sellingStatistics;
public:
    void getSellingStatistics(SellingClothesCollection sellingClothesCollection);
};

void PrintSoldStatistics::getSellingStatistics(SellingClothesCollection sellingClothesCollection){
    sellingStatistics.getSellingStatistics(sellingClothesCollection);
}

#endif