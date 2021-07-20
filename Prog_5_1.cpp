#include<iostream>
#include<cstdlib>

using namespace std;

// Pattern : 1 12 123 1234

int main()
{
	int number;
	cout << "Enter the number of rows of the series : ";
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << endl;
	}
	system("pause");
}