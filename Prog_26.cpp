#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

/*	Declare a class called bird having two private data members called name and weight. Define following functions :
	- default constructor for reading data members from keyboard
	- Overloaded constructor with two arguments to be used for initialization of data members.
	- display function to display data members.
	- overloaded member operator >= to compare weight of two bird objects, returning false if weight of first bird object is less than that of second & true otherwise.
*/

class Bird
{
	char name[20];
	float weight;
public:
	Bird();
	Bird(const char*, float);
	void Display();
	bool operator >=(Bird&);
};

Bird::Bird()
{
	cout << "Enter the name : ";
	cin >> name;
	cout << "Enter the weight : ";
	cin >> weight;
}

Bird::Bird(const char a[], float b)
{
	strcpy_s(name, a);
	weight = b;
}

void Bird::Display()
{
	cout << "\n" << name << " weighs " << weight << " kg";
}

bool Bird::operator>=(Bird& b)
{
	if (weight >= b.weight)
		return true;
	else
		return false;
}

int main()
{
	Bird b1, b2;
	cout << "b1 >= b2  " << (b1 >= b2 ? "True" : "False") << endl;
	system("pause");
	return 0;
}