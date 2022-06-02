#include <iostream>
#include <string>

#include "ListSellingClothes.h"
#include "SellingClothesCollection.h"
#include "ListSellingClothesUI.h"

using namespace std;


// Function : string showSellingClothesList(SellingClothesCollection sellingClothesCollection)
// Description: 판매중인 상품 리스트 확인
// Parameters :   SellingClothesCollection sellingClothesCollection - 판매중 상품 collection
// Return Value :  판매중인 상품
string ListSellingClothesUI::showSellingClothesList(SellingClothesCollection sellingClothesCollection){
    return listSellingClothes.getSellingClothesList(sellingClothesCollection);
}
