#include<iostream>
#include<cstdlib>

using namespace std;

// 8. Write a program to illustrate the concept of namespace with two function name as setprice() having data members as productcode & price ensuring that they don’t collide.

namespace one {
	void setprice(int productcode, int price);
}

namespace two {
	void setprice(int productcode, int price);
}


int main()
{
	int a = 10, b = 20;
	cout << "Using Namespace one : " << endl;
	one::setprice(a, b);
	cout << "Using Namespace two : " << endl;
	two::setprice(a, b);
	system("pause");
}

void one::setprice(int productcode, int price)
{
	cout << "Product Code is : " << productcode << endl;
	cout << "Price is : " << price << endl;
}

void two::setprice(int productcode, int price)
{
	cout << "Price is : " << price << endl;
	cout << "Product Code is : " << productcode << endl;
}
