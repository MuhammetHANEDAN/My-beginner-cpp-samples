#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>
#include "Inheritance.h"

using namespace std;


int main()
{

	derivedClass obj1; /* Base classtan miras ald�g�m�z i�in onun fonksiyonlar�ne eri�ebi�iyoruz
	x de�i�keninide ald�k ama protected oldugu i�in mainden eri�ememiz normal yani obj1.x yapam�yoruz*/
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