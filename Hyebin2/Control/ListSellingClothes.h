#ifndef LIST_SELLING_CLOTHES_H
#define LIST_SELLING_CLOTHES_H
#include <iostream>
#include "..\Entity\SellingClothes.h"

using namespace std;

class ListSellingClothes
{
    private:
        SellingClothes sellingClothes;
    public:
        void getSellingClothesList(SellingClothesCollection sellingClothesCollection);
};


void ListSellingClothes::getSellingClothesList(SellingClothesCollection sellingClothesCollection){
    sellingClothes.listSellingClothes(sellingClothesCollection);
}

#endif