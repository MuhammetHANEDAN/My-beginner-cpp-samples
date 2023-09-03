#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>
#include "templateConcept.h"
#include <cassert>
#include "exceptionalHandling.h"
#include "FOR UE SAMPLES.H"


using namespace std;

void Staticsample()
{
	int static x = 5;
	x++;
	cout << x;
};

int main()
{
	//srand(time(NULL));
	
	Staticsample();
	Staticsample();
	Staticsample();
	
	

	
	


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