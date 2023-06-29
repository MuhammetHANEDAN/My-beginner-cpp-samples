#include <iostream>
using namespace std;

class Employee 
{
public:
	string empName, empSurname;
	double empSalary;
	Employee(string name, string surname, double salary);
	Employee();
	virtual ~Employee()
	{
		cout << "Employee destructor worked" << endl;
	}
	virtual void displayInformation() 
	{
		cout << "Name:" << empName << endl;
		cout << "Surname:" << empSurname << endl;
		cout << "Salary:" << empSalary << endl;
	}
};
Employee::Employee(string name, string surname, double salary) 
{
	empName = name;
	empSurname = surname;
	empSalary = salary;
}


class Manager :public Employee {
public:
	string mngDepartment;
	Manager(string name, string surname, double salary, string department) :Employee(name, surname, salary) 
	{
		mngDepartment = department;
	};
	~Manager()
	{
		cout << "Manager destructor worked" << endl;
	}
	void displayInformation() 
	{
		Employee::displayInformation();
		cout << "Department:" << mngDepartment << endl;
	}
	void increaseSalary() 
	{
		empSalary += 200;
	}
};



class Person {
public:
	virtual void printInfo() 
	{
		cout << "Name:" << personName << endl;
	}
	Person(string name) 
	{
		personName = name;
	}
private:
	string personName;
};

class Man :public Person 
{
public:
	void printInfo() 
	{
		Person::printInfo();
		cout << "Surname:" << personSurname << endl;
	}
	Man(string name = "", string surname = "") :Person(name)
	{
		personSurname = surname;
	}
private:
	string personSurname;
};

void print(Employee &employeType) 
{
	employeType.displayInformation();
}
void print2(Employee* employeeType)
{
	employeeType->displayInformation();
}
void print3(Employee employeeType)
{
	employeeType.displayInformation();
}


class firstClass 
{
public:
	virtual void print() = 0;
};

class secondClass :public firstClass 
{
public:
	void print() 
	{
		cout << "Second class print function worked." << endl;
	}
};

class Animal
{
public:
	virtual void talk() = 0;
	virtual ~Animal()
	{
		cout << "Animal destructor worked" << endl;
	}
	virtual void ömer()
	{
		cout << "Ben kucuk bir omer" << endl;
	}
};

class Dog :public Animal
{
public:
	~Dog()
	{
		cout << "Dog destructor worked" << endl;
	}
	void talk()
	{
		cout << "hav hav" << endl;
	}
	void ömer()
	{
		cout << "Omer kOpek aldi" << endl;
	}
};

class Cat :public Animal
{
public:
	~Cat()
	{
		cout << "Cat destructor worked" << endl;
	}
	void talk()
	{
		cout << "Meov" << endl;
	}
	void ömer()
	{
		cout << "Omer kedi aldi" << endl;
	}
};

class Duck :public Animal
{
public:
	~Duck()
	{
		cout << "Duck destructor worked" << endl;
	}
	void talk()
	{
		cout << "Vak vak vak" << endl;
	}
	void ömer()
	{
		cout << "Omer ordek aldi" << endl;
	}
};