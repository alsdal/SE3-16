#ifndef LIST_SOLDOUT_CLOTHES_UI_H
#define LIST_SOLDOUT_CLOTHES_UI_H
#include <iostream>
#include "..\Control\ListSoldoutClothes.h"
#include "..\Entity\SellingClothesCollection.h"

using namespace std;

class ListSoldoutClothesUI
{
    private:
        ListSoldoutClothes listSoldoutClothes;
    public:
        string showSoldoutList(SellingClothesCollection sellingClothesCollection);
};


string ListSoldoutClothesUI::showSoldoutList(SellingClothesCollection sellingClothesCollection){
    return listSoldoutClothes.showSoldoutList(sellingClothesCollection);
}

#endif