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
    int amount;
    int price;
public:
    int sellingNum = 1;
    int satisfaction = 0; // 일단 이렇게 해놓음
    Clothes(string clothesName, string clothesCompanyName, int price, int amount){
        this->clothesName = clothesName;
        this->clothesCompanyName = clothesCompanyName;
        this->price = price;
        this->amount = amount;
    }
    int getamount(){return this->amount;};
    int getPrice(){return this->price;};
    int getSatisfaction(){return this->satisfaction;};
    string getClothesDetail();
};

string Clothes::getClothesDetail(){
    string detail;
    detail = this->clothesName + " " + this->clothesCompanyName + " " + to_string(this->price) + " " + to_string(this->amount);
    return detail;
}



#endif