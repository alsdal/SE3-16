#ifndef CLOTHES_H
#define CLOTHES_H
#include <iostream>
#include <string>

using namespace std;

class Clothes
{
private:
    string clothesName;
    string clothesCompanyName;
    int price;
public:
    void getClothesDetail();
};


#endif