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
        string getSellingClothesList(SellingClothesCollection sellingClothesCollection);
};


string ListSellingClothes::getSellingClothesList(SellingClothesCollection sellingClothesCollection){
    return sellingClothes.listSellingClothes(sellingClothesCollection);
}

#endif