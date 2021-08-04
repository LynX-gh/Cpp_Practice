#include<iostream>
#include<cstdlib>

using namespace std;

// Write a program using a function with arguments to swap the values of a pair of integers using call by reference.

void swap(int* a, int* b);

int main()
{
	int n1 = 20, n2 = 30;
	cout << "Before Swapping :\n\ta = " << n1 << " , " << &n1 << "\n\tb = " << n2 << " , " << &n2 << endl;
	swap(n1, n2);
	cout << "After Swapping :\n\ta = " << n1 << " , " << &n1 << "\n\tb = " << n2 << " , " << &n2 << endl;
	system("pause");
	return 0;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}