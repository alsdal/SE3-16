#ifndef LIST_SELLING_CLOTHES_H
#define LIST_SELLING_CLOTHES_H
#include <iostream>
#include "SellingClothes.h"

using namespace std;

// Class : ListSellingClothes
// Description: 판매중인 상품 확인 Control 클래스
// Author: Hyebin Cho
//
class ListSellingClothes
{
    private:
        SellingClothes sellingClothes;
    public:
        string getSellingClothesList(SellingClothesCollection sellingClothesCollection);
};


#endif