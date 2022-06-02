#ifndef SELLING_STATISTICS_H
#define SELLING_STATISTICS_H
#include <iostream>
#include <string>

#include "SellingClothesCollection.h"


using namespace std;

// Class : SellingStatistics
// Description: 판매통계 클래스
// Author: Hyebin Cho
//
class SellingStatistics
{
private:
    SellingClothesCollection sellingClothesCollection;
public:
    string getSellingStatistics(SellingClothesCollection sellingClothesCollection);
};


#endif