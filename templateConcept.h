#include <iostream>

using namespace std;

template <class Type>
class Number
{
private:
	Type data;
public:
	Number(Type mainData = 0)
	{
		data = mainData;
	}
	Type getData()
	{
		return data;
	}
};