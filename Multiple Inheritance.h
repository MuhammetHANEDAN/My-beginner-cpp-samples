#include <iostream>

using namespace std;


class AClass
{
public:
	int x;
	AClass()
	{
		cout << "AClass constructor worked" << endl;
	}
	AClass(int mainX)
	{
		x = mainX;
		cout << "AClass constructor worked" << endl;
	}
	~AClass()
	{
		cout << "AClass destructor worked" << endl;
	}
};


class BClass
{
public:
	int y, z;
	BClass()
	{
		cout << "BClass constructor worked" << endl;
	}
	BClass(int mainY)
	{
		y = mainY;
		cout << "BClass constructor worked" << endl;
	}
	~BClass()
	{
		cout << "BClass destructor worked" << endl;
	}
};

class CClass:public AClass,public BClass //Multipled Class
{
public:
	int z;
	CClass()
	{
		cout << "CClass constructor worked" << endl;
	}
	CClass(int c1,int c2,int c3):BClass(c3),AClass(c2)
	{
		z = c1;
		cout << "CClass constructor worked" << endl;
	}
	~CClass()
	{
		cout << "CClass destructor worked" << endl;
	}
	void print() { cout <<"X = "<< x << endl <<"Y = "<< y << endl <<"Z = "<< z << endl;; }
};