#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>

using namespace std;

class Date
{
public:
	Date(int d = 1, int m = 1, int y = 2023);
	Date(const Date& oth);
	~Date();
	void setDate(int d = 1, int m = 1, int y = 2023); //Setlerken month dayse bakýlmalý yanlýþ setlenmemeli
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void increaseDay(); // çalýþtýðýnda günü 1 artýrcak tabi gün 1 artýnca sonraki aya yada yýla geçme iþlemi kontrol
	void compareDate(const Date& othDate); // Gelen tarihle kendi tarihin karþýlaþtýracak
	void displayDate(); //tarih yazýlacak ama string karþýlýðý dikkate alýnacak
private:
	int year, month, day;
	const int monthDays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	const string monthString[12] = { "January","February","March","April,","May","June","July","August","September","October","November","December" };

};

Date::Date(int d, int m, int y)
{
	setDate(d, m, y);
}

Date::Date(const Date& oth)
{
	year = oth.year;
	month = oth.month;
	day = oth.day;
}

Date::~Date()
{
	cout << "Date destructed" << endl;
}

void Date::setDate(int d, int m, int y)
{
	setMonth(m); setDay(d); setYear(y);
}

void Date::setDay(int d)
{
	if (0 < d && d < monthDays[month - 1])
	{
		day = d;
	}
	else
		cout << "Wrong info" << endl;
}

void Date::setMonth(int m)
{
	if (0 < m && m < 13)
	{
		month = m;
	}
	else
		cout << "Wrong info" << endl;
}

void Date::setYear(int y)
{
	if (2022 < y)
	{
		year = y;
	}
	else
		cout << "Wrong info" << endl;
}


int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return year;
}

void Date::increaseDay()
{
	cout << "changed" << endl;
}
