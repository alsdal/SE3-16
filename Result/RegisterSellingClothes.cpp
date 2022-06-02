#include <iostream>
#include "SellingClothesCollection.h"
#include "RegisterSellingClothes.h"

using namespace std;

// Function : Clothes* addSellingClothes(string clothesName, string clothesCompanyName, int price, int amount, string SellerID) 
// Description: 새로운 판매 의류 추가
// Parameters : string ClothesName - 상품명
//              string clothesCompanyName - 제작회사명
//              int price - 가격
//              int amount - 수량
//              string SellerID - 판매자 ID
// Return Value :  Clohtes*
Clothes* RegisterSellingClothes::addSellingClothes(string clothesName, string clothesCompanyName, int price, int amount, string SellerID ){
   return sellingClothesCollection.addNewClothesMember(clothesName,  clothesCompanyName, price, amount,SellerID);

}