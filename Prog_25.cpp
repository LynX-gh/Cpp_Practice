#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

//	Define a class complex with real and imaginary as two data member, add necessary constructors and member function to initialize and display data of class. Class should overload the + operator to add two complex objects and return the results. Invoke the statements like C3 = C1 + C2 in main().

class Complex
{
	float real, imag;
public:
	Complex()
	{
		real = 1;
		imag = 1;
	}
	Complex(float x, float y)
	{
		real = x;
		imag = y;
	}
	Complex operator +(Complex c)
	{
		Complex temp;
		temp.real = real + c.real;
		temp.imag = imag + c.imag;
		return temp;
	}
	void Display()
	{
		cout << "\n" << real << " + " << imag << "i" << endl;
	}
};

int main()
{
	float real, imag;
	cout << "Enter 2 numbers : ";
	cin >> real >> imag;
	Complex c1(5, 5);
	Complex c2(real, imag);
	c2 = c1 + c2;
	c2.Display();
	system("pause");
	return 0;
}