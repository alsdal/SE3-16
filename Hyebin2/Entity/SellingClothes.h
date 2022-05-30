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
        void listSellingClothes(SellingClothesCollection sellingClothesCollection);
};


void SellingClothes::listSellingClothes(SellingClothesCollection sellingClothesCollection){
    sellingClothesCollection.getClothes(sellingClothesCollection);
    /*Clothes* clothes = sellingClothesCollection.findFirst();
    while(clothes != NULL){
        string detail = clothes->getClothesDetail();
        cout << " here" << endl;
        cout << "> " << detail << endl;
        clothes = sellingClothesCollection.getNext(clothes);
    }
    */
}

#endif