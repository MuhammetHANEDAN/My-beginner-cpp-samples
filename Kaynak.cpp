#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>
#include "Shape.h"

using namespace std;


int main()
{
	//srand(time(NULL));
	Shape* shapeArray[] = { new Circle(5),new Rectangle(5,6) };
	for (int i = 0; i < 2; i++)
	{
		shapeArray[i]->calculateArea();
		shapeArray[i]->calculatePerimeter();
		shapeArray[i]->display();
		delete shapeArray[i];
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