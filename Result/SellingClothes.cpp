#include <iostream>
#include <string>

#include "SellingClothesCollection.h"
#include "SellingClothes.h"

using namespace std;

// Function : string :listSellingClothes(SellingClothesCollection sellingClothesCollection)
// Description: 판매 의류정보 가져오기
// Parameters : SellingClothesCollection sellingClothesCollection - 판매 collection
// Return Value :  판매 의류 정보
string SellingClothes::listSellingClothes(SellingClothesCollection sellingClothesCollection){
    return sellingClothesCollection.getClothes(sellingClothesCollection);
}