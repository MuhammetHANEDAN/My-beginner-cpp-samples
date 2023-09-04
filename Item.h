#pragma once

#include <iostream>

using namespace std;

class Item
{
private:
	string ItemName = "None";
	int ItemNumber = 0;
	int sizeOfRenk = 1;
	int* ItemRenk = new int[sizeOfRenk];
public:
	Item();
	Item(string name, int);
	~Item();
	string getItemName();
	int getItemNumber();
	void setItemNumber(int _ItemNumber);
};
