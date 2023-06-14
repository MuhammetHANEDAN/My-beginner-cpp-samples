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
	Matrix addMatrix(Matrix& othMatrix);
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
	
	matrix = new int* [row];
	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[col];
	}

	cout << "Matrix created" << endl;
}

Matrix::~Matrix()
{
	for (int i = 0; i < row; i++)
	{
		delete[]matrix[i];
	}
	delete[] matrix;	
	cout << "Matrix destroyed" << endl;
}
Matrix::Matrix(const Matrix& oth)
{
	row = oth.row;
	col = oth.col;

	matrix = new int* [row];
	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[col];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			matrix[i][j] = oth.matrix[i][j];
	}
	cout << "Matrix copied to target" << endl;
}

int Matrix::getRowNumber()
{
	return row;
}

int Matrix::getColumnNumber()
{
	return col;
}

void Matrix::setValue(int r, int c, int value)  //Gelen degerler indexe göredir 
{
	matrix[r][c] = value;
	cout << "Value set completed" << endl;
}

void Matrix::randomSet()
{
	srand(time(NULL));
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}
}


void Matrix::identityMatrixSet()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == j)
			{
				matrix[i][j] = 1;
			}
			else
			{
				matrix[i][j] = 0;
			}
		}
	}
}

void Matrix::display()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << " " << endl;
	}
	cout << " " << endl;
}

Matrix Matrix::addMatrix(Matrix& oth)
{
	if (row != oth.row || col != oth.col)
	{
		cout << "row and col number should be equal" << endl;
		return  *this;
	}
	
	Matrix result(row, col);
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			result.matrix[i][j] = matrix[i][j] + oth.matrix[i][j];
		}
	}
	return result;
	
}