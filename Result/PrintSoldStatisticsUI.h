#ifndef PRINT_SOLD_STATISTICS_UI_H
#define PRINT_SOLD_STATISTICS_UI_H
#include <iostream>
#include <string>

#include "PrintSoldStatistics.h"


using namespace std;

// Class : PrintSoldStatisticsUI
// Description: 판매통계  UI
// Author: Hyebin Cho
//
class PrintSoldStatisticsUI
{
private:
    PrintSoldStatistics printSoldStatistics;
public:
    string getSoldStatistics(SellingClothesCollection sellingClothesCollection);
};



#endif