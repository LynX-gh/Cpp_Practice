#include<iostream>
#include<cstdlib>

using namespace std;

// Pattern : /ABCD /123 /EF /4

int main()
{
	int p1 = 1;
	char p2 = 'A';
	int number;
	cout << "Enter the number of rows of the series : ";
	cin >> number;
	for (int i = number; i > 0; i--)
	{
		for (int j = number; j > 0; j--)
		{
			if ((i % 2 != 0) && (j <= i))
			{
				cout << p1;
				p1++;
			}
			else if ((i % 2 == 0) && (j <= i))
			{
				cout << p2;
				p2++;
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	system("pause");
}
