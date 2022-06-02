#include "SellingClothesCollection.h"

Clothes* SellingClothesCollection::addNewClothesMember(string clothesName, string clothesCompanyName, int price, int amount, string SellerID) {
    memberSellingClothes[0] = new Clothes(clothesName, clothesCompanyName, price, amount, SellerID);
    memberSellingClothes[0] -> setSellerID(SellerID);
    return  memberSellingClothes[0];
}

string SellingClothesCollection::getClothes(SellingClothesCollection sellingClothesCollection)
{
    string str;
    for (int i = 0; i < sellingClothesCollection.clothesNum; i++) {
        str += sellingClothesCollection.memberSellingClothes[i]->getClothesDetail();
        str += '\n';
    }
    return str;
}