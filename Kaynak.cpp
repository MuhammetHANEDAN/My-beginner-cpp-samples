#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>
#include "Inheritance.h"
#include "Multiple Inheritance.h"
#include "Person.h"

using namespace std;


int main()
{
	srand(time(NULL));
	Student studentArray[] = { {"Muhammet","HANEDAN",53},{"Batuhan","KAYA",54},{"Ercan","Bayrakli",55} };
	
	for (unsigned i = 0; i < 3; i++)
	{
		studentArray[i].setStudentGrade(rand() % 100 + 1);
		studentArray[i].print();
	}

	
	
	

	








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