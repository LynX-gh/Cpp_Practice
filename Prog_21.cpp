#include<iostream>
#include<cstdlib>

using namespace std;

// Define a Class rectangle with two data members length and breadth. Use a parameterized constructor to initialize the values and create a copy of the object using the copy constructor and display the area of the rectangle.

class Rectangle
{
	float length, breadth;
public:
	Rectangle(float, float);
	Rectangle(const Rectangle&);
	void Area();
};

Rectangle::Rectangle(float x, float y)
{
	length = x;
	breadth = y;
}

Rectangle::Rectangle(const Rectangle &R)
{
	length = R.length;
	breadth = R.breadth;
}

void Rectangle::Area()
{
	cout << "\nThe area of the rectangle = " << length * breadth << endl;
}

int main()
{
	float a, b;
	cout << "Enter the length and breadth of the rectangle :";
	cin >> a >> b;
	Rectangle r1(a, b);
	Rectangle r2 = r1;
	r2.Area();
	system("pause");
	return 0;
}