#ifndef SELLINGCLOTHES_H
#define SELLINGCLOTHES_H
#include <iostream>
#include <string>

#include "SellingClothesCollection.h"


using namespace std;

// Class : SellingClothes
// Description: 판매중인 상품 클래스
// Author: Hyebin Cho
//
class SellingClothes
{
    private:
        SellingClothesCollection sellingClothesCollection;
    public:
        string listSellingClothes(SellingClothesCollection sellingClothesCollection);
};



#endif