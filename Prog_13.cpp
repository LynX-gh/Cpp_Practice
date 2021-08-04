#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
#include<cstdlib>

using namespace std;

// Write a C++ program to find volume of cube, cylinder and rectangle box using function overloading.

float vol(float s)
{
	return (s * s * s);
}

float vol(float r, float h)
{
	return (M_PI * r * r * h);
}

float vol(float l, float b, float h)
{
	return(l * b * h);
}

int main()
{
	int ch;
	float n1, n2, n3;
	cout << "Enter the shape no. \n\n1.Cube\n2.Cylinder\n3.Rectangle\n";
	cin >> ch;
	switch (ch) {
	case 1:	cout << "Enter the side :";
		cin >> n1;
		cout << "\nThe volume of the cube = " << vol(n1) << endl;
		break;
	case 2:	cout << "Enter the radius and height :";
		cin >> n1 >> n2;
		cout << "\nThe volume of the cylinder = " << vol(n1, n2) << endl;
		break;
	case 3:	cout << "Enter the length, breadth, and height :";
		cin >> n1 >> n2 >> n3;
		cout << "\nThe volume of the rectangle = " << vol(n1, n2, n3) << endl;
		break;
	default:
		cout << "Enter a correct value for the choice";
	}
	system("pause");
	return 0;
}