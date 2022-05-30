#ifndef CLOTHES_H
#define CLOTHES_H
#include <iostream>
#include <string>

using namespace std;

class Clothes
{
private:
    string clothesCompanyName;
    int price;
public:
    string clothesName;
    int amount;
    int satisfaction = 0; // 일단 이렇게 해놓음
    Clothes(string clothesName, string clothesCompanyName, int price, int amount){
        this->clothesName = clothesName;
        this->clothesCompanyName = clothesCompanyName;
        this->price = price;
        this->amount = amount;
    }
    int getPrice(){return this->price;};
    int getSatisfaction(){return this->satisfaction;};
    string getClothesDetail();
};


#endif