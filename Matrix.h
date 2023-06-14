#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

class Matrix 
{
private:
	int row, col;
	int** matrix;
public:
	Matrix(int r = 5, int c = 5);
	~Matrix();
	Matrix(const Matrix& oth);
	int getRowNumber();
	int getColumnNumber();
	void setValue(int r, int c, int value);
	void randomSet();
	void identityMatrixSet();
	void display();
	void addMatrix(Matrix& othMatrix);
};


Matrix::Matrix(int r, int c) 
{
	while (!(r > 0 && c > 0))
	{
		cout << "Wrong array infos please enter again" << endl;
		cin >> r; cin >> c;
	}
	row = r;
	col = c;
	cout << "Matrix created" << endl;
}

Matrix::~Matrix()
{
	cout << "Matrix destroyed" << endl;
}
