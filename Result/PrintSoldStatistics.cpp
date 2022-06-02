#include <iostream>
#include <string>

#include "SellingStatistics.h"
#include "PrintSoldStatistics.h"

using namespace std;

// Function : string getSellingStatistics(SellingClothesCollection sellingClothesCollection)
// Description: 판매 통계 가져오기
// Parameters : SellingClothesCollection sellingClothesCollection - 판매 collection
// Return Value :  판매 통계
string PrintSoldStatistics::getSellingStatistics(SellingClothesCollection sellingClothesCollection){
    return sellingStatistics.getSellingStatistics(sellingClothesCollection);
}