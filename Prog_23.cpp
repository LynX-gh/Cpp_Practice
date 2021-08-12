#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;

//	Write a program to highlight the concept of constructor overloading and count the number of objects created for that class.

class Complex
{
	float x, y;
public:
	static int ObjectCount;
	Complex();
	Complex(float);
	Complex(float, float);
	void display();
};

int Complex::ObjectCount = 0;

Complex::Complex()
{
	ObjectCount++;
	x = 0;
	y = 0;
}

Complex::Complex(float a)
{
	ObjectCount++;
	x = a;
	y = 0;
}

Complex::Complex(float a, float b)
{
	ObjectCount++;
	x = a;
	y = b;
}

void Complex::display()
{
	cout << "Complex Number = " << x << " + " << y << " i ";
}

int main()
{
	int num;
	float a, b;
	cout << "Enter the number of objects to make with default constructor : ";
	cin >> num;
	vector<Complex> c;
	for (int i = 0; i < num; i++)
	{
		c.push_back(Complex());
	}
	cout << "Enter the number of objects to make with primary constructor : ";
	cin >> num;
	cout << "Enter a number : ";
	cin >> a;
	for (int i = 0; i < num; i++)
	{
		c.push_back(Complex(a));
	}
	cout << "Enter the number of objects to make with secondary constructor : ";
	cin >> num;
	cout << "Enter another number : ";
	cin >> b;
	for (int i = 0; i < num; i++)
	{
		c.push_back(Complex(a, b));
	}
	cout << "\nTotal number of objects created = " << Complex::ObjectCount << endl;
	system("pause");
	return 0;
}