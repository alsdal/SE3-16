#include "SellingClothesCollection.h"


// Function : Clothes* addNewClothesMember(string clothesName, string clothesCompanyName, int price, int amount, string SellerID) 
// Description: 새로운 의류 추가
// Parameters : string ClothesName - 상품명
//              string clothesCompanyName - 제작회사명
//              int price - 가격
//              int amount - 수량
//              string SellerID - 판매자 ID
// Return Value :  Clohtes*
Clothes* SellingClothesCollection::addNewClothesMember(string clothesName, string clothesCompanyName, int price, int amount, string SellerID) 
{
    memberSellingClothes[0] = new Clothes(clothesName, clothesCompanyName, price, amount, SellerID);
    memberSellingClothes[0] -> setSellerID(SellerID);
    return  memberSellingClothes[0];
}


// Function : string getClothes(SellingClothesCollection sellingClothesCollection)
// Description: 의류정보 가져오기
// Parameters : SellingClothesCollection sellingClothesCollection - 판매 collection
// Return Value :  의류 정보
string SellingClothesCollection::getClothes(SellingClothesCollection sellingClothesCollection)
{
    string str;
    for (int i = 0; i < sellingClothesCollection.clothesNum; i++) {
        str += sellingClothesCollection.memberSellingClothes[i]->getClothesDetail();
        str += '\n';
    }
    return str;
}