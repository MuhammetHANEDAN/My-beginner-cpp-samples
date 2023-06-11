#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>

using namespace std;

class complexNumber
{
private:
	int real, imag;
public:
	complexNumber(int r = 0, int i = 0);
	~complexNumber();
	complexNumber(const complexNumber& oth);
	int getReal() const;
	int getImag() const;
	void setValue(int r, int i);
	void displayComplex();
	complexNumber addComplex(const complexNumber& oth);
	complexNumber substractComplex(complexNumber& oth);
	complexNumber multiply(const complexNumber& oth);
	void multiplyMinus();
};

complexNumber::complexNumber(int r, int i)
{
	real = r;
	imag = i;
	cout << "Complex number created" << endl;
	displayComplex();
}

complexNumber::~complexNumber()
{
	cout << "" << endl;
	cout << "Complexnumber destroyed" << endl;
}

complexNumber::complexNumber(const complexNumber& oth)
{
	real = oth.real;
	imag = oth.imag;
	cout << "Complex number copied to target" << endl;
}

int complexNumber::getReal() const
{
	return real;
}

int complexNumber::getImag() const
{
	return imag;
}

void complexNumber::displayComplex()
{
	imag >= 0 ? cout << real << "+" << imag << "i" << endl : cout << real << imag << "i" << endl;
}

void complexNumber::setValue(int r, int i)
{
	real = r;
	imag = i;
}

void complexNumber::multiplyMinus()
{
	real *= -1;
	imag *= -1;
}

complexNumber complexNumber::addComplex(const complexNumber& oth)
{
	complexNumber result;
	result.real = real + oth.real;
	result.imag = imag + oth.imag;
	return result;
}

complexNumber complexNumber::substractComplex(complexNumber& oth)
{
	complexNumber result;
	result.real = real - oth.real;
	result.imag = imag - oth.imag;
	return result;
}

complexNumber complexNumber::multiply(const complexNumber& oth)
{
	complexNumber result;
	result.real = real * oth.real - (imag * oth.imag);
	result.imag = real * oth.imag + imag * oth.real;
	return result;
}