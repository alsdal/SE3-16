#ifndef PRINT_SOLD_STATISTICS_H
#define PRINT_SOLD_STATISTICS_H
#include <iostream>
#include <string>

#include "SellingStatistics.h"

using namespace std;

// Class : PrintSoldStatistics
// Description: 판매 통계 Control 클래스
// Author: Hyebin Cho
class PrintSoldStatistics
{
private:
    SellingStatistics sellingStatistics;
public:
    string getSellingStatistics(SellingClothesCollection sellingClothesCollection);
};


#endif