#include<iostream>
#include<cstdlib>

using namespace std;

//	Define a class matrix with an integer array of 3X3 as a data member.
// 	Define a friend function which adds two matrix objects and returns the resultant matrix object.

class Matrix
{
	int matrix_arr[3][3];
public:
	Matrix();
	Matrix(int[3][3]);
	void display();
	friend Matrix add_matrix(Matrix, Matrix);
};

Matrix::Matrix()
{
	cout << "\nEnter the values of Matrix :";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matrix_arr[i][j];
		}
	}
}

Matrix::Matrix(int m[3][3])
{
	memcpy(matrix_arr, m, 3 * 3 * sizeof(int));
}

void Matrix::display()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<"\t"<<matrix_arr[i][j];
		}
		cout << endl;
	}
}

Matrix add_matrix(Matrix m1, Matrix m2)
{
	int temp[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			temp[i][j] = m1.matrix_arr[i][j] + m2.matrix_arr[i][j];
		}
	}
	Matrix ans(temp);
	return ans;
}

int main()
{
	Matrix m1, m2;
	Matrix ans = add_matrix(m1, m2);
	cout << "\nThe addition of the 2 matrix is : \n" << endl;
	ans.display();
	system("pause");
	return 0;
}