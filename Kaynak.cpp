#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>
#include "Inheritance.h"
#include "Multiple Inheritance.h"
#include "Person.h"
#include "dynamicMemory.h"

using namespace std;


int main()
{
	//srand(time(NULL));
	Example obj1(3, 3), obj2(4, 5);
	obj1.addExample(obj2);
	obj1.print();
	


	
	
	

	








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