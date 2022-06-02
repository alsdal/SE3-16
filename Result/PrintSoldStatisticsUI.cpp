#include <iostream>
#include <string>

#include "PrintSoldStatistics.h"
#include "PrintSoldStatisticsUI.h"

using namespace std;

// Function : string getSoldStatistics(SellingClothesCollection sellingClothesCollection)
// Description: 판매 통계 확인
// Parameters :   SellingClothesCollection sellingClothesCollection - 판매중 상품 collection
// Return Value :  판매 통계
string PrintSoldStatisticsUI::getSoldStatistics(SellingClothesCollection sellingClothesCollection){
    return printSoldStatistics.getSellingStatistics(sellingClothesCollection);
}
