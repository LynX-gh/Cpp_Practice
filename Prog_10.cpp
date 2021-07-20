#include<iostream>
#include<cstdlib>

using namespace std;

//	10. Write a Program to reverse of given numbers.  123------321

int rev(int a);

int main()
{
	int number, rev_no;
	cout << "Enter the number to reverse :";
	cin >> number;
	rev_no = rev(number);
	cout << "The reverse of " << number << " is : " << rev_no << endl;
	system("pause");
	return 0;
}

int rev(int a)
{
	int temp = a, rev = 0;
	while (temp > 0)
	{
		rev *= 10;
		rev += (temp % 10);
		temp /= 10;
	}
	return rev;
}