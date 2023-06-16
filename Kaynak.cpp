#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>
#include "Inheritance.h"

using namespace std;


int main()
{
	
	derivedClass obj1(3, 5);
	derivedClass obj2(obj1);
	cout << obj2.getXValue() << endl;
	cout << obj2.getYValue() << endl;
	
	
	

	








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