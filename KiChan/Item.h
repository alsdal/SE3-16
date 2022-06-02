// 헤더 선언
#include <iostream>
#include <string.h>

// 상수 선언
#define MAX_STRING 32

using namespace std;

static int num_purchase = 0;

class Item 
{
private:
	string sellerID;
	string itemName;
	string brandName;
	int price;
	int quantity;
	int numEvaluation;
	float averageSatisfaction;

public:
	Item()
	{
		sellerID = ' ';
		itemName = ' ';
		brandName = ' ';
		price = 0;
		quantity = 0;
		numEvaluation = 0;
		averageSatisfaction = 0;
	}

	Item(string userID, string name, string brand, 
		int item_price, int item_quantity)
	{
		sellerID = userID;
		itemName = name;
		brandName = brand;
		price = item_price;
		quantity = item_quantity;
		numEvaluation = 0;
		averageSatisfaction = 0;
	}

	string itemCall();
	string itemSpecific();
	int satisfactionEvaluate(int num);

	~Item() {};
};
