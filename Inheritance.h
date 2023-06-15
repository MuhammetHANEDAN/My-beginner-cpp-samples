#include <iostream>

using namespace std;

class baseClass 
{
protected:
	int x;
public:
	void setXValue(int mainX)
	{
		x = mainX;
	}
	int getXValue()
	{
		return x;
	}
	void print()
	{
		cout << "X = " << x << endl;
	}
};

class derivedClass : baseClass
{
public:
	int y;
	void setYValue(int mainY)
	{
		y = mainY;
	}
	int getYValue()
	{
		return y;
	}
	void print2()
	{
		cout << "Y =" << y << endl;
	}
};
