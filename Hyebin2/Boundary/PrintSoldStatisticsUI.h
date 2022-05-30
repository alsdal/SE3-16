#ifndef PRINT_SOLD_STATISTICS_UI_H
#define PRINT_SOLD_STATISTICS_UI_H
#include <iostream>
#include <string>

#include "../Control/PrintSoldStatistics.h"


using namespace std;


class PrintSoldStatisticsUI
{
private:
    PrintSoldStatistics printSoldStatistics;
public:
    void getSoldStatistics(SellingClothesCollection sellingClothesCollection);
};

void PrintSoldStatisticsUI::getSoldStatistics(SellingClothesCollection sellingClothesCollection){
    printSoldStatistics.getSellingStatistics(sellingClothesCollection);
}



#endif