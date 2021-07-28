#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

// Check if a number is an armstrong number or not

void armstrong(int a);

int main()
{
	int no;
	cout << "Enter the number to check : ";
	cin >> no;
	armstrong(no);
	system("pause");
	return 0;
}

void armstrong(int a)
{
	int temp = a, check = 0;
	while (temp > 0)
	{
		check += pow(temp % 10, 3);
		temp /= 10;
	}
	if (check == a)
		cout << "\n" << a << " Is an armstrong number" << endl;
	else
		cout << "\n" << a << " Is not an armstrong number" << endl;
}
