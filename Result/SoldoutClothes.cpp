#include <iostream>
#include "SoldoutClothesCollection.h"
#include "SellingClothesCollection.h"
#include "SoldoutClothes.h"


// Function : string listSoldoutClothes(SellingClothesCollection sellingClothesCollection)
// Description: 판매완료의류 가져오기
// Parameters : SellingClothesCollection sellingClothesCollection - 판매 collection
// Return Value :  판매완료 의류
string SoldoutClothes::listSoldoutClothes(SellingClothesCollection sellingClothesCollection){
    return soldoutClothesCollection.getSoldoutClothes(sellingClothesCollection);
}