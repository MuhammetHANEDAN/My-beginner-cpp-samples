#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>
#include "Inheritance.h"

using namespace std;


int main()
{

	derivedClass obj1; /* Base classtan miras aldýgýmýz için onun fonksiyonlarýne eriþebiþiyoruz
	x deðiþkeninide aldýk ama protected oldugu için mainden eriþememiz normal yani obj1.x yapamýyoruz*/
	obj1.setXValue(5);
	obj1.print(); // X=5 degerini verdi
	
	

	








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