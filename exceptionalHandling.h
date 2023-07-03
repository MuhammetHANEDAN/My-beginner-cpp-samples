#include <iostream>
#include <cassert>

using namespace std;

class paydaSýfýr
{
private:
	string message;
public:
	paydaSýfýr()
	{
		message = "Payda 0 olamaz";
	}
	string what()
	{
		return message;
	}
};
