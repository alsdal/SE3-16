#include <iostream>
#include "SellingClothes.h"
#include "ListSellingClothes.h"

using namespace std;

// Function : string getSellingClothesList(SellingClothesCollection sellingClothesCollection)
// Description: 판매의류정보 가져오기
// Parameters : SellingClothesCollection sellingClothesCollection - 판매 collection
// Return Value :  판매 의류 정보
string ListSellingClothes::getSellingClothesList(SellingClothesCollection sellingClothesCollection){
    return sellingClothes.listSellingClothes(sellingClothesCollection);
}
