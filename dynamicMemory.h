#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>

using namespace std;


class Example 
{
public:
	Example(int mainX,int mainY) 
	{
		x = mainX;
		y = mainY;
		cout << "Constructor work." << endl;
	}
	~Example() 
	{
		cout << "Destructor work." << endl;
	}
	int x, y;
	void print();
	Example addExample(Example& oth)
	{
		x = x+oth.x;
		y = y+oth.y;
		return *this;
	}
};
void Example::print() 
{
	cout << "X value:" << x << " Y value:" << y << endl;
}