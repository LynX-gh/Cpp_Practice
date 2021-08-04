#include<iostream>
#include<cstdlib>

using namespace std;

//	Define Class named point which represents 2-D Point, i.e P(x, y). 
//	Define Default Constructor to initialize both data member value 5. 
//	Define Necessary Function and Write a program to test class Point.

class Point
{
	int x, y;
public:
	Point() { x = y = 5; }
	void get_coord();
};

void Point::get_coord()
{
	cout << "( " << x << ", " << y << " )";
}

int main()
{
	Point x1;
	cout << "\nThe co-ordinates of x1 are : ";
	x1.get_coord();
	cout << endl;
	system("pause");
	return 0;
}