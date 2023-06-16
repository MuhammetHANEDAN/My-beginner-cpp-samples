#include <iostream>

using namespace std;


class AClass
{
public:
	AClass()
	{
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
	BClass()
	{
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
	CClass()
	{
		cout << "CClass constructor worked" << endl;
	}
	~CClass()
	{
		cout << "CClass destructor worked" << endl;
	}
};