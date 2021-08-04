#include<iostream>
#include<cstdlib>

using namespace std;

//	Write a menu driven C++ program using class to perform all arithmetic operation (+,-,*,/) (use inline function)

class Arithmetic
{
	int a, b;
public:
	Arithmetic();
	inline int sub();
	inline int add();
	inline int mult();
	inline int divi();
};

Arithmetic::Arithmetic()
{
	int n1, n2;
	cout << "Enter A : ";
	cin >> n1;
	cout << "Enter B : ";
	cin >> n2;
	a = n1;
	b = n2;
}

inline int Arithmetic::sub()
{
	return a - b;
}

inline int Arithmetic::add()
{
	return a + b;
}

inline int Arithmetic::mult()
{
	return a * b;
}

inline int Arithmetic::divi()
{
	return a / b;
}

int main()
{
	Arithmetic a1;
	while (1)
	{
		int ch;
		cout << "\nEnter the operation no. \n1.Add\t2.Subtract\t3.Multiply\t4.Divide\t5.Exit\n";
		cin >> ch;

		switch (ch) {
		case 1:			
			cout << "A + B = " << a1.add() << endl;
			break;
		case 2:			
			cout << "A - B = " << a1.sub() << endl;
			break;
		case 3:			
			cout << "A * B = " << a1.mult() << endl;
			break;
		case 4:
			cout << "A / B = " << a1.divi() << endl;
			break;
		case 5:
			system("pause");
			return 0;
		default:
			cout << "Enter a correct value for the choice";
		}
	}
}