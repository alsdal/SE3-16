#ifndef SELLINGCLOTHESCOLLECTION_H
#define SELLINGCLOTHESCOLLECTION_H
#include <iostream>
#include <string>

#include "Clothes.h"

#define MAX_NUMBER_OF_CLOTEHS  3
using namespace std;


// Class : SellingClothesCollection
// Description: 판매중인 상품 Collection 클래스
// Author: Hyebin Cho
//
class SellingClothesCollection
{
    private:

    public:
        SellingClothesCollection(void){}

        int clothesNum;
        Clothes* memberSellingClothes[MAX_NUMBER_OF_CLOTEHS] = {};
        Clothes* addNewClothesMember(string clothesName, string clothesCompanyName, int price, int amount, string SellerID);
        string getClothes(SellingClothesCollection sellingClothesCollection);

        ~SellingClothesCollection(void){}
        
};



#endif