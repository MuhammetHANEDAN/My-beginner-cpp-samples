#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>
#include "templateConcept.h"
#include <cassert>
#include "exceptionalHandling.h"

using namespace std;



int main()
{
	//srand(time(NULL));
	
	float pay, payda, result;
	
	try
	{
		cout << "Enter pay" << endl;
		cin >> pay;
		cout << "Enter payda" << endl;
		cin >> payda;

		if (payda == 0)
		{
			throw paydaSýfýr();
		}
		else if (payda < 0)
		{
			throw payda;
		}
		else // 
		{
			throw 15;
		}

		result = pay / payda;
		cout << result;
	}
	catch (paydaSýfýr & oth)
	{
		cout << oth.what() << endl;
	}
	catch (float x) 
	{
		cout << x << " bu sayi 0 dan kucuktur" << endl;
	}
	catch (...)	
	{
		cout << "Default cahtch worked" << endl;
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