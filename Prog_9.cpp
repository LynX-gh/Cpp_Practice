#include<iostream>
#include<stdlib.h>

using namespace std;

/*	9. Write a program to check whether the number is prime or not using 
		a) a function with argument but no return value
		b) a function with argumentand return value.
*/

void prime_a(int a);
int prime_b(int a);

int main()
{
	int number;
	cout << "Enter a value to check for prime : ";
	cin >> number;
	cout << "\nUsing Prime_A : ";
	prime_a(number);
	cout << "\nUsing Prime_B : ";
	int check = prime_b(number);
	if (check == 1)
		cout << number << "  Is not Prime" << endl;
	else
		cout << number << "  Is Prime" << endl;
	system("pause");
	return 0;
}

void prime_a(int a)
{
	int temp = 0;
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			temp = 1;
		}
	}
	if (temp == 1)
		cout << a << "  Is not Prime" << endl;
	else
		cout << a << "  Is Prime" << endl;
}

int prime_b(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return 1;
		}
	}
	return 0;
}
