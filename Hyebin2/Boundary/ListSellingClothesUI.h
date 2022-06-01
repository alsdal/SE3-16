#ifndef LIST_SELLING_CLOTHES_UI_H
#define LIST_SELLING_CLOTHES_UI_H
#include <iostream>
#include <string>

#include "../Control/ListSellingClothes.h"
#include "../Entity/SellingClothesCollection.h"

using namespace std;

class ListSellingClothesUI
{
private:
    ListSellingClothes listSellingClothes;
public:
//메인에서 collection 받기
    string showSellingClothesList(SellingClothesCollection sellingClothesCollection);
};

string ListSellingClothesUI::showSellingClothesList(SellingClothesCollection sellingClothesCollection){
    return listSellingClothes.getSellingClothesList(sellingClothesCollection);
}


#endif