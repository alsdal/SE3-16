#ifndef PRINT_SOLD_STATISTICS_UI_H
#define PRINT_SOLD_STATISTICS_UI_H
#include <iostream>
#include <string>

#include "PrintSoldStatistics.h"


using namespace std;


class PrintSoldStatisticsUI
{
private:
    PrintSoldStatistics printSoldStatistics;
public:
    string getSoldStatistics(SellingClothesCollection sellingClothesCollection);
};

string PrintSoldStatisticsUI::getSoldStatistics(SellingClothesCollection sellingClothesCollection){
    return printSoldStatistics.getSellingStatistics(sellingClothesCollection);
}



#endif