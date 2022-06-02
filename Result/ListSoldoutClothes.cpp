#include <iostream>
#include "SoldoutClothes.h"
#include "SellingClothesCollection.h"
#include "ListSoldoutClothes.h"


// Function : string showSoldoutList(SellingClothesCollection sellingClothesCollection)
// Description: 판매완료 의류 정보
// Parameters : SellingClothesCollection sellingClothesCollection - 판매 collection
// Return Value :  판매 완료 의류 정보
string ListSoldoutClothes::showSoldoutList(SellingClothesCollection sellingClothesCollection){
    return soldoutClothes.listSoldoutClothes( sellingClothesCollection);
}
