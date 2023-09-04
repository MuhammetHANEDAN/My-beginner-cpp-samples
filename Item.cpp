#include "Item.h"

Item::Item()
{
	cout << "No parameter construction worked" << endl;
}

Item::Item(string name, int number)
{
	ItemName = name;
	ItemNumber = number;
	cout << "2 parameter constructor worked" << endl;
}

Item::~Item()
{
	cout << "Destructor worked" << endl;
	delete[] ItemRenk;
}


string Item::getItemName()
{
	return Item::ItemName;
}

int Item::getItemNumber()
{
	return ItemNumber;
}

void Item::setItemNumber(int _ItemNumber)
{
	ItemNumber = _ItemNumber;
}