#include<iostream>
#include<cstdlib>

using namespace std;

//	Write a program to highlight the concept of constructor overloading along with the default arguments in the constructor.

class mean
{
	int x, y, z;
public:
	mean();
	mean(int a, int b, int c);
	float get_mean();
};

mean::mean()
{
	x = 10;
	y = 20;
	z = 30;
}

mean::mean(int a, int b = 20, int c = 30)
{
	x = a;
	y = b;
	z = c;
}

float mean::get_mean()
{
	float m = float(x + y + z) / 3;
	return m;
}

int main()
{
	mean mean1;
	mean mean2(11, 41);
	mean mean3(50, 60, 80);
	cout << "\nMean 1 : " << mean1.get_mean() << "\nMean 2 : " << mean2.get_mean() << "\nMean 3 : " << mean3.get_mean() << endl;
	system("pause");
	return 0;
}