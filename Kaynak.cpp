#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>
#include "upcastingDowncasting.h"

using namespace std;


int main()
{
	//srand(time(NULL));
		
	Dog* dogAnimal = new Dog();
	Cat* catAnimal = new Cat();
	Duck* duckAnimal = new Duck();
	
	Animal* animalObject[] = { dogAnimal,catAnimal,duckAnimal };
	for (int i = 0; i < 3; i++)
	{
		animalObject[i]->talk();
		animalObject[i]->ömer();
		delete animalObject[i];
	}
	delete animalObject;








	/*cout << " " << endl;
	cout << "cikmak icin y devam etmek icin h basin" << endl;
	string cikis; cin >> cikis;
	if (cikis == "y") {
	}
	if (cikis == "h") {
		return main();
	}*/

	return 0;
}