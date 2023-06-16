#include <iostream>

using namespace std;

class Person {
protected:
	string personName, personSurname;
public:
	Person(string name = "", string surname = "")
	{
		personName = name;
		personSurname = surname;
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
		Person::print();
		cout << "Student ID:" << studentID << endl;
		cout << "Student Grade:" << studentGrade << endl;
	}
};