#ifndef SELLINGCLOTHES_H
#define SELLINGCLOTHES_H
#include <iostream>
#include <string>

#include "clothes.h"

using namespace std;


class SellingClothes : public Clothes
{
private:
    int amount;
public:
    void addNewClothes(string clothesName, string clothesCompanyName, int price, int amount);
};

#endif