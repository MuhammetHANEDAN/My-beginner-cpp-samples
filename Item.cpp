#include "Item.h"

Item::Item()
{

}

Item::Item(string name, int number)
{
	ItemName = name;
	ItemNumber = number;
}


string Item::getItemName()
{
	return Item::ItemName;
}

int Item::getItemNumber()
{
	return ItemNumber;
}