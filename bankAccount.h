#include <iostream>
#include <string.h>
using namespace std;


class bankAccount {
public:
	bankAccount(string name, string surname, int balance = 0, string phone_number = "");
	bankAccount(const bankAccount& oth);
	~bankAccount();
	bool controlNameSurname(string nameOrSurname);
	bool controlPhoneNumber(string phoneNumber);//Bir sýnýrý olsun cep telefonu gibi
	void displayProfile();
	void credit(int);
	void debit(int);
	void sendMoney(bankAccount& othAccount, int amount);
	void setPersonName(string name) { personName = name; };
	void setPersonSurname(string surname) { personSurname = surname; };
	void setPersonPhone(string phone) { personPhone = phone; };
	void setPersonBalance(int balance = 0);
	int getPersonBalance() const { return accountBalance; };
	string getPersonName()const { return personName; };
	string getPersonSurname() const { return personSurname; };
	string getPersonPhone() const { return personPhone; };

private:
	int accountBalance;
	string personName, personSurname, personPhone;
};

bankAccount::bankAccount(string name, string surname, int balance, string phone_number)
{
	while (!(controlNameSurname(name)))
	{
		cout << "Wrong name please enter name again" << endl;
		cin >> name;
	}
	while (!(controlNameSurname(surname)))
	{
		cout << "Wrong surname please enter surname again" << endl;
		cin >> surname;
	}
	while (!(controlPhoneNumber(phone_number)))
	{
		cout << "Wrong phone number please enter number again" << endl;
		cin >> phone_number;
	}
	personName = name;
	personSurname = surname;
	accountBalance = balance;
	personPhone = phone_number;
}

bankAccount::bankAccount(const bankAccount& oth)
{
	personName = oth.personName;
	personSurname = oth.personSurname;
	accountBalance = oth.accountBalance;
	personPhone = oth.personPhone;
}

bankAccount::~bankAccount()
{
	cout << "Bank account deleted" << endl;
}

bool bankAccount::controlNameSurname(string name) {
	for (unsigned i = 0; i < name.length(); i++) {
		if (!((name.at(i) >= 'A' && name.at(i) <= 'Z') || (name.at(i) >= 'a' && name.at(i) <= 'z'))) {
			return false;
		}
	}
	return true;

	/*bool bankAccount::controlNameSurname(string name)
	{
		for (unsigned i = 0; i < name.length(); i++)
		{
			if (!(name.at(i) >= 'A' && name.at(i) <= 'Z') || name.at(i) >= 'a' && name.at(i) <= 'z')
				return false;
		}
		return true;
	}*/

	/*bool bankAccount::controlPhoneNumber(string number)
	{
		for (unsigned i = 0; i < number.length(); i++)
		{
			if (!(number.at(i) >= '0' && number.at(i) <= '9') && number.length() == 11)
				return false;
		}
		return true;
	}*/
