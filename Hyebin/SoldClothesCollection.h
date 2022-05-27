#ifndef SOLDCLOTHESCOLLECTION_H
#define SOLDCLOTHESCOLLECTION_H
#include <iostream>
#include <string>


#include "SoldClothes.h"

#define MAX_NUMBER_OF_CLOTEHS  100
class SoldClothesCollection
{
private:
    SoldClothes *memberSoldClothes[MAX_NUMBER_OF_CLOTEHS];
public:
    SoldClothes *findFirst();
    SoldClothes *getNext();
};


using namespace std;


#endif