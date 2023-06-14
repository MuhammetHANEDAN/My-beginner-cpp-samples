#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string.h>
#include "Matrix.h"

using namespace std;


int main()
{

	Matrix matrix(3, 3);
	matrix.randomSet();
	matrix.display();
	Matrix matrix2(4, 3);
	matrix2.randomSet();
	matrix2.display();
	Matrix result = matrix.addMatrix(matrix2);
	result.display();
	
	
	

	








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