#ifndef CLOTHES_H
#define CLOTHES_H
#include <iostream>
#include <string>

using namespace std;


// Class : Clothes
// Description: 상품 클래스
// Author: Hyebin Cho
//
class Clothes
{
private:
    string clothesName;
    string clothesCompanyName;
    int amount;
    int price;
    string sellerID;
    int numEvaluation = 0;
    float satisfaction = 0;

public:
    int sellingNum = 1;

    Clothes(){
        clothesName = "";
        clothesCompanyName = "";
        amount = 0;
        price = 0;
        sellerID = "";
    }
    Clothes(string clothesName, string clothesCompanyName, int price, int amount, string userID){
        this->clothesName = clothesName;
        this->clothesCompanyName = clothesCompanyName;
        this->price = price;
        this->amount = amount;
        this->sellerID = userID;
    }
    void setSellerID(string sellerID){this->sellerID =sellerID;};
    void setClothesSatisfaction(float satisfaction){this->satisfaction = satisfaction;};
    string getSellerID(){return this->sellerID;};
    int getamount(){return this->amount;};
    int getPrice(){return this->price;};
    string getClothesName(){return this->clothesName;};
    float getSatisfaction(){return this->satisfaction;};
    string getCompanyName() { return this->clothesCompanyName; };
    string getClothesDetail();
    int satisfactionEvaluate(int num);
    string itemSpecific();

   ~Clothes(){}
};

#endif