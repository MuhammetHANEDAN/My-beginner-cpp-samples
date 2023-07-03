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
	Type operator+ (const Number& oth);
	void display()
	{
		cout << data << endl;
	}
};

template <class Type>
Type Number<Type>::operator+(const Number& oth)
{
	return data + oth.data;
}
