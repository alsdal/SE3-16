#include <iostream>
#include <string>
#include "SellingClothes.h"
#include "Clothes.h"
using namespace std;


void SellingClothes::listSellingClothes(){
    Clothes *clothes = sellingClothesCollection.findFirst();
    while(clothes != NULL){
        string detail = clothes->getClothesDetail();
        cout << "> " << detail << endl;
        clothes = sellingClothesCollection.getNext(clothes);
    }
}