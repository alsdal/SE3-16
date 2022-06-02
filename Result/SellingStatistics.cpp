#include <iostream>
#include <string>

#include "SellingClothesCollection.h"
#include "SellingStatistics.h"


using namespace std;

// Function : string getSellingStatistics(SellingClothesCollection sellingClothesCollection)
// Description: 판매 통계 가져오기
// Parameters : SellingClothesCollection sellingClothesCollection - 판매 collection
// Return Value :  판매 통계 정보
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
