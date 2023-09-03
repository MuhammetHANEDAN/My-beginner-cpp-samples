#pragma once

#include <iostream>

using namespace std;

class Item
{
private:
	string ItemName = "None";
	int ItemNumber = 0;
public:
	Item(string name, int);
	Item();
	string getItemName();
	int getItemNumber();
};
