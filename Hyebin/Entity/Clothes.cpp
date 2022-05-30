#include "Clothes.h"
#include <iostream>

using namespace std;


string Clothes::getClothesDetail(){
    string detail;
    detail = this->clothesName + " " + this->clothesCompanyName + " " + to_string(this->price) + " " + to_string(this->amount);
    return detail;
}

