#include <iostream>
#include <string>

#include "RegisterSellingClothes.h"
#include "SellingClothesCollection.h"
#include "RegisterSellingClothesUI.h"


// Function : Clothes* addSellingClothes(string ClothesName, string clothesCompanyName, int price, int amount, string SellerID )
// Description: 판매 상품 추가
// Parameters : string ClothesName - 상품명
//              string clothesCompanyName - 제작회사명
//              int price - 가격
//              int amount - 수량
//              string SellerID - 판매자 ID
// Return Value :  Clohtes*
Clothes* RegisterSellingClothesUI::addSellingClothes(string ClothesName, string clothesCompanyName, int price, int amount, string SellerID ){
    return registerSellingClothes.addSellingClothes(ClothesName, clothesCompanyName, price,  amount, SellerID);
    
}