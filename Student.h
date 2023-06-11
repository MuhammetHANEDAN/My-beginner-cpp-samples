#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>

using namespace std;

class Student
{
private:
	string studentName, studentSurname, studentID; // Member variables
public:
	Student(); //constructor
	Student(string, string, string); //constructor 3 parametreli
	Student(string); //constructor 1 parametreli
	~Student(); //destructor
	Student(const Student& oth); //copy constructor

	void displayInformation();  // Member functions 

	void setstudentName(string name)
	{
		studentName = name;
	}
	void setSurname(string surname)
	{
		studentSurname = surname;
	}
	void setID(string ID)
	{
		studentID = ID;
	}
	string getstudentName()
	{
		return studentName;
	}
	string getSurname()
	{
		return studentSurname;
	}
	string getID()
	{
		return studentID;
	}
};

void Student::displayInformation()
{
	cout << "Name : " << studentName << " Surname : " << studentSurname << endl;
	cout << "Studen ID = " << studentID << endl;
}

Student::Student() // parametresiz constructor
{
	cout << "constructor worked" << endl;
	//cout << "name surname id girini<" << endl;
	//cin >> studentName; cin >> studentSurname; cin >> studentID;
	//displayInformation();
}

Student::Student(string name, string surname, string ID) //3 parametreli contructor
{
	cout << "parametre cons worked" << endl;
	studentName = name;
	studentSurname = surname;
	studentID = ID;
	//displayInformation();
}

Student::Student(string name) // 1 parametreli contructor
{
	cout << "1 parametre cons worked" << endl;
	studentName = name;
	//cout << studentName << endl;
}

Student::~Student() // destructor
{
	cout << "destructor worked" << endl;
}

Student::Student(const Student& oth) // Copy constructor
{
	cout << "copy constructor worked" << endl;
	studentName = oth.studentName;
	studentSurname = oth.studentSurname;
	studentID = oth.studentID;
}