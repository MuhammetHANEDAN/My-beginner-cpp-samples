#include <iostream>

using namespace std;

class baseClass 
{
private:
	int priavateX;
protected:
	int protectedX;
	int x;
	void setXValue(int mainX)
	{
		x = mainX;
	}
public:
	int publicX;
	int getXValue()
	{
		return x;
	}
	void print()
	{
		cout << "X = " << x << endl;
	}
};

class derivedClass :public baseClass
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
