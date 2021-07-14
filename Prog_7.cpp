#define	_USE_MATH_DEFINES
#include<cmath>
#include<iostream>
#include<stdlib.h>

using namespace std;

// 7.Write a program to find an area of circle using function with no argument and no return value

void area_cir();

int main()
{
	area_cir();
	system("pause");
	return 0;
}

void area_cir()
{
	float radi, area;
	cout << "Enter the radius of the circle to find area :";
	cin >> radi;
	area = M_PI * radi * radi;
	cout << "The area of the circle is = " << area << endl;
}