#include <iostream>

using namespace std;

class Person
{
private:
	string personName, personSurname;
	int personAge;
public:
	Person()
	{
		personName = "";
		personSurname = "";
		personAge = 0;
	}
	Person(string name, string surname, int age)
	{
		personName = name;
		personSurname = surname;
		personAge = age;
	}
	virtual ~Person()
	{
		cout << "Person destructed" << endl;
	}
	virtual void displayPerson();
	bool operator ==(Person& oth); // == operatorunu yaptýk
	void operator++(); // ++ operatorunu yaptýk
	friend void PersonFriend(const Person& othPerson)
	{
		cout << othPerson.personName << endl;
		cout << othPerson.personSurname << endl;
		cout << othPerson.personAge << endl;
	}
	friend bool operator!=(Person& firstobject, Person& secondobject)
	{
		return!(firstobject.personName == secondobject.personName && firstobject.personSurname == secondobject.personSurname);
	}
	friend ostream& operator<<(ostream&, const Person&);
	friend istream& operator>>(istream&, Person&);
};

void Person::displayPerson()
{
	cout << personName << endl;
	cout << personSurname << endl;
	cout << personAge << endl;
}

bool Person::operator==(Person& oth)
{
	return(personName == oth.personName && personSurname == oth.personSurname);
}

void Person::operator++()
{
	personAge = personAge + 1;
}

ostream& operator<<(ostream& osObject, const Person& personObject) {
	osObject << "Name:" << personObject.personName << endl
		<< "Surname:" << personObject.personSurname << endl
		<< "Age:" << personObject.personAge << endl;
	return osObject;
}
istream& operator>>(istream& isObject, Person& personObject) {
	isObject >> personObject.personName >> personObject.personSurname >> personObject.personAge;
	return isObject;
}