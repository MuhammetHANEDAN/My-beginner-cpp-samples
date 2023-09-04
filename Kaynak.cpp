#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>
#include "templateConcept.h"
#include <cassert>
#include "exceptionalHandling.h"
#include "Item.h"
#include "upcastingDowncasting.h"



using namespace std;



int main()
{
	//srand(time(NULL));
	
	Animal* p;
	Dog dog1;
	p = &dog1;
	p->talk();
	
	
	

	
	


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