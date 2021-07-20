#include<iostream>
#include<cstdlib>

using namespace std;

// WAP to display factorial of a no using a function

float fact(int a);

int main()
{
	int no;
	cout << "Enter the number to find factorial : ";
	cin >> no;
	cout << "The factorial is = " << fact(no) << endl;
	system("pause");
	return 0;
}

float fact(int a)
{
	float ans;
	if (a > 1)
		ans = a * fact(a - 1);
	else
		return 1;
	return ans;
}