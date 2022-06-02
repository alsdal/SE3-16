#include <iostream>
#include "ListSoldoutClothes.h"
#include "SellingClothesCollection.h"
#include "ListSoldoutClothesUI.h"

using namespace std;

// Function : string showSoldoutList(SellingClothesCollection sellingClothesCollection)
// Description: 판매완료 상품 리스트 확인
// Parameters :   SellingClothesCollection sellingClothesCollection - 판매중 상품 collection
// Return Value :  판매완료 상품
string ListSoldoutClothesUI::showSoldoutList(SellingClothesCollection sellingClothesCollection){
    return listSoldoutClothes.showSoldoutList(sellingClothesCollection);
}
