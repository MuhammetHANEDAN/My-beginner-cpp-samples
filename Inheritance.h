#include <iostream>

using namespace std;

class baseClass 
{
public:
	int x;
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
	baseClass(int mainX=0) //Constructor
	{
		x = mainX;
		cout << "baseClass Constructor worked" << endl;
	}
	~baseClass() //Destructor
	{
		cout << "baseClass Destructor worked" << endl; 
	}
	baseClass(const baseClass& oth)
	{
		x = oth.x;
		cout << "baseClass copy-const. worked" << endl;
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
	void print()
	{
		cout << "X = " << x << endl;
		cout << "Y =" << y << endl;		
	}
	derivedClass(int mainX = 0, int mainY = 0):baseClass (mainX)
	{
		y = mainY;
		cout << "derivedClass Constructor worked" << endl;
	}
	~derivedClass() //Destructor
	{
		cout << "derivedClass Destructor worked" << endl;
	}
	derivedClass(const derivedClass& oth)
	{
		x = oth.x;
		y = oth.y;
		cout << "derivedClass copy-const. worked" << endl;
	}
};
