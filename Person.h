#include <iostream>

using namespace std;

class Person {
protected:
	string personName, personSurname;
public:
	Person(string name = "", string surname = "")
	{
		while(cont)
		personName = name;
		personSurname = surname;
	}
	~Person()
	{
		cout << "Person destructed" << endl;
	}
	bool controlName(string name)
	{
		for (unsigned i = 0; i < name.length(); i++)
		{
			if (name.at(i) >= 'A' && name.at(i) <= 'Z' || name.at(i) >= 'a' && name.at(i) <= 'z')
				return true;
		}
		return false;
	}
	string getPersonName()
	{
		return personName;
	}
	string getPersonSurname()
	{
		return personSurname;
	}
	void setPersonName(string name)
	{
		personName = name;
	}
	void setPersonSurname(string surname) 
	{
		personSurname = surname;
	}
	void print() 
	{
		cout << "Name:" << personName << endl;
		cout << "Surname:" << personSurname << endl;
	}
};

class Student :public Person {
private:
	int studentID, studentGrade;
	bool passOrFail;
public:
	Student();
	Student(string name, string surname, int ID) :Person(name, surname) {
		studentID = ID;
	}
	int getStudentID() { return studentID; };
	void setStudentID(int ID) { studentID = ID; };
	int getStudentGrade() { return studentGrade; };
	void setStudentGrade(int grade) { studentGrade = grade; };
	int getPassOrFail() { return passOrFail; };
	void setPassOrFail(bool passFail) { passOrFail = passFail; };
	void print() {
		Person print();
		cout << "Student id: " << studentID << endl;
		cout << "Student Grade: " << studentGrade << endl;
		if (passOrFail == true)
			cout << "-PASS-" << endl;
		else
			cout << "-FAIL-" << endl;
	}
};