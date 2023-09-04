#pragma once

#include <iostream>

using namespace std;

class Animal
{
private:
	string AnimalName = "None";
public:
	int deneme = 0;
	Animal(string _Name)
	{
		AnimalName = _Name;
	}
	string getAnimalName()
	{
		return AnimalName;
	}
	
};

class Bird :public Animal
{
public:
	int BirdAge;
	static int birdSayisi;
	Bird(int _Age,string _Name):Animal (_Name)
	{
		BirdAge = _Age;
		birdSayisi++;
	}
	~Bird()
	{
		birdSayisi--;
	}
};


