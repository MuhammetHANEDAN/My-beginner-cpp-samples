#include <iostream>
#include "MeshComponent.h"

using namespace std;


class Item 
{
protected:
	string itemName;
	int itemNumber;
public:
	Item(string name,int number)
	{
		itemName = name;
		itemNumber = number;

	}
	string getItemName()
	{
		return itemName;
	}
	int getItemNumber()
	{
		return itemNumber;
	}
	void ItemF()
	{

	}
};

class Equippable : public Item
{
public:
	Equippable(string name,int number): Item(name, number)
	{

	}
	ItemMesh meshobject;
};

