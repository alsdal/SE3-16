#ifndef LISTOFSELLINGCLOTHES_H
#define LISTOFSELLINGCLOTHES_H
#include <iostream>
#include <string>

#include "SellingClothesCollection.h"

using namespace std;

class ListOfSellingClothes
{ 
    private:
        SellingClothesCollection memberOfSellingClothesCollection;
    public:
        void showListOfSellingClothes();
};


#endif