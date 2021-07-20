#include<iostream>
#include<cstdlib>

using namespace std;

// Pattern : **** *** ** *

int main()
{
	int number;
	cout << "Enter the number of rows of the series : ";
	cin >> number;
	for (int i = number; i > 0; i--)
	{
		for (int j = number; j > 0; j--)
		{
			if (j <= i)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	system("pause");
}