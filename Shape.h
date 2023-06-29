#include <iostream>
using namespace std;
#define pi 3.14159265358979

class Shape {
private:
	double shapeArea;
	double shapeCircumference;
public:
	virtual ~Shape()
	{
		cout << "Shape destructor worked" << endl;
	}
	double getArea()const
	{
		return shapeArea;
	}
	double getCircumF()const
	{
		return shapeCircumference;
	}
	void setArea(double shape_area)
	{
		shapeArea = shape_area;
	}
	void setCircumF(double c_fr) 
	{
		shapeCircumference = c_fr;
	}
	virtual void calculateArea() = 0;
	virtual void calculatePerimeter() = 0;
	virtual void display() = 0;
};

class Circle :public Shape
{
private:
	double radius;
public:
	Circle(double r)
	{
		radius = r;
		cout << "Circle created" << endl;
	}
	~Circle()
	{
		cout << "Circle destructed" << endl;
	}
	void calculateArea()
	{
		double temp_area = pi * radius * radius;
		setArea(temp_area);
	}
	void calculatePerimeter()
	{
		double temp_perimeter = pi * 2 * radius;
		setCircumF(temp_perimeter);
	}
	void display()
	{
		cout << "Area = " << Shape::getArea() << endl;
		cout << "Perimeter = " << Shape::getCircumF() << endl;
	}
};

class Rectangle :public Shape
{
private:
	double width, height;
public:
	Rectangle(double w, double h)
	{
		width = w;
		height = h;
		cout << "Rectangle created" << endl;
	}
	~Rectangle()
	{
		cout << "Rectangle destructed" << endl;
	}
	void calculateArea()
	{
		double temp_area = width * height;
		setArea(temp_area);
	}
	void calculatePerimeter()
	{
		double temp_perimeter = 2 * width + 2 * height;
		setCircumF(temp_perimeter);
	}
	void display()
	{
		cout << "Area = " << Shape::getArea() << endl;
		cout << "Perimeter = " << Shape::getCircumF() << endl;
	}
};
