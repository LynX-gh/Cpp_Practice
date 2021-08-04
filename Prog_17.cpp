#include<iostream>
#include<cstdlib>

using namespace std;
class A;
class B;

//	WAP to find out the sum of two private data members x and y of two classes A and B using a common friend function. 
//	Assume that the prototype for both the classes will be void sum (A, B);

class A
{
	int x;
public:
	A() { x = 20; }
	void friend sum(A a, B b);
};

class B
{
	int y;
public:
	B() { y = 30; }
	void friend sum(A a, B b);
};

void sum(A a, B b)
{
	cout << "\nThe sum of A.x and B.y = " << a.x + b.y << endl;
}

int main()
{
	A a1;
	B b1;
	sum(a1, b1);
	system("pause");
	return 0;
}