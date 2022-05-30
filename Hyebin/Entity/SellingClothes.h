#ifndef SELLINGCLOTHES_H
#define SELLINGCLOTHES_H
#include <iostream>
#include <string>

#include "SellingClothesCollection.h"


using namespace std;


class SellingClothes
{
    private:
        SellingClothesCollection sellingClothesCollection;
    public:
        void listSellingClothes();
};

#endif