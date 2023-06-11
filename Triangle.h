#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>

using namespace std;

class Triangle
{
public:
	Triangle();
	Triangle(float a, float b, float c);
	~Triangle();
	Triangle(const Triangle& oth);
	bool isTriangle(float a, float b, float c);
	void setSides();
	void setSideA(float);
	float getSidesInfo() const;
	bool isEquilateral();
	bool isScalane();
	bool isIsosceles();
	float calculateArea();
private:
	float sideA, sideB, sideC;
};

Triangle::Triangle() //Default contructor
{
	cout << "Triangle created" << endl;
}

Triangle::Triangle(float a, float b, float c) //Parametreli constructor
{
	while (!(isTriangle(a, b, c)))
	{
		cout << "Pease enter the sides (a-b-c-)" << endl;
		cin >> a >> b >> c;
	}
	sideA = a;
	sideB = b;
	sideC = c;
	cout << "Triangle created" << endl;
	if (isEquilateral())
	{
		cout << "This is Equilateraltriangle" << endl;
	}
	else if (isIsosceles())
	{
		cout << "This is isoscelestriangle" << endl;
	}
	else if (isScalane())
	{
		cout << "This is scalanetringle" << endl;
	}
	cout << "area = " << calculateArea() << endl;
}

Triangle::~Triangle() //Destructor
{
	cout << "" << endl;
	cout << "Triangle destroyed" << endl;
}

Triangle::Triangle(const Triangle& oth) //Copy constructor
{
	sideA = oth.sideA;
	sideB = oth.sideB;
	sideC = oth.sideC;
	cout << "Triangle copied to target." << endl;
}

bool Triangle::isTriangle(float a, float b, float c) //Üçgen kontrolu fonksiyon
{
	if ((abs(b - c) < a && a < b + c) && (abs(a - c) < b && b < a + c) && (abs(b - a) < c && c < b + a))
	{
		return true;
	}
	else
	{
		cout << "Invalid side info" << endl;
		return false;
	}

}

void Triangle::setSideA(float newvalue) //My codes
{
	sideA = newvalue;
	cout << "sideA changed to newvalue = " << sideA << endl;

}

void Triangle::setSides() //My codes dýţardan deđer almadan setleyen kodlar
{
	string answer;
	float newvalue;
	cout << "Which side you wanna change ? Answer like side(A-B-C)" << endl;
	cin >> answer;
	if (answer == "sideA")
	{
		cout << "Enter new value of sideA" << endl;
		cin >> newvalue;
		while (!isTriangle(newvalue, sideB, sideC))
		{
			cout << "Invalid side info please enter new value" << endl;
			cin >> newvalue;
		}
		sideA = newvalue;
		cout << "sideA changed to = " << sideA << endl;
	}
	else if (answer == "sideB")
	{
		cout << "Enter new value of sideB" << endl;
		cin >> newvalue;
		while (!isTriangle(sideA, newvalue, sideC))
		{
			cout << "Invalid side info please enter new value" << endl;
			cin >> newvalue;
		}
		sideB = newvalue;
		cout << "sideB changed to = " << sideB << endl;
	}
	else if (answer == "sideC")
	{
		cout << "Enter new value of sideC" << endl;
		cin >> newvalue;
		while (!isTriangle(sideA, sideB, newvalue))
		{
			cout << "Invalid side info please enter new value" << endl;
			cin >> newvalue;
		}
		sideA = newvalue;
		cout << "sideC changed to = " << sideC << endl;
	}
	else
	{
		cout << "Wrong words please enter like side(A-B-C)" << endl;
		setSides();
	}


}
float Triangle::getSidesInfo() const
{
	cout << "whic side you want to get value? Answer like sideA" << endl;
	string side;
	cin >> side;
	if (side == "sideA")
	{
		return sideA;
	}
	else if (side == "sideB")
	{
		return sideB;
	}
	else if (side == "sideC")
	{
		return sideC;
	}

}

bool Triangle::isEquilateral() // Eţkenar üçgen kontrol fonksiyon
{
	return (sideA == sideB && sideB == sideC);
}

bool Triangle::isScalane() // Çeţitkenar üçgen kontrol foksiyon
{
	return (sideA != sideB != sideC);
}

bool Triangle::isIsosceles()
{
	return (sideA == sideB || sideA == sideC || sideB == sideC || sideC == sideB);
}

float Triangle::calculateArea()
{
	float area;
	if (isEquilateral())
	{
		area = pow(sideA, 2) * sqrt(3) / 4;
		return area;
	}
	else if (isIsosceles())
	{
		float side3;
		if (sideA == sideB)
		{
			side3 = sideC;
			area = sqrt(float(pow(sideA, 2)) - float(pow(side3 / 2, 2))) * side3 / 2;
			return area;
		}
		else if (sideA == sideC)
		{
			side3 = sideB;
			area = sqrt(float(pow(sideA, 2)) - float(pow(side3 / 2, 2))) * side3 / 2;
			return area;
		}
		else if (sideB == sideC)
		{
			side3 = sideA;
			area = sqrt(float(pow(sideB, 2)) - float(pow(side3 / 2, 2))) * side3 / 2;
			return area;
		}
	}
	else if (isScalane())
	{
		float s = (sideA + sideB + sideC) / 2;
		area = sqrt(s * (s - sideA) * (s - sideB) - (s - sideC));
		return area;
	}

}
