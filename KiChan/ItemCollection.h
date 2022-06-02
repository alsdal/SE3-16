#include <stdio.h>
#include <string.h>
#include "Item.h"

class ItemCollection
{
private:
	Item purchasedItem[3];
	int purchased_num = 0;
public:
	ItemCollection()
	{
		for( int i = 0; i < 3 ; i++)
		purchasedItem[i] = Item(0, 0, 0, 0, 0);
	}

	void findFirst();
	void getNext();
	void addItem();

	~ItemCollection() {};
};