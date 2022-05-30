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
        void showSoldoutList(SellingClothesCollection sellingClothesCollection);
};


void ListSoldoutClothesUI::showSoldoutList(SellingClothesCollection sellingClothesCollection){
    listSoldoutClothes.showSoldoutList(sellingClothesCollection);
}

#endif