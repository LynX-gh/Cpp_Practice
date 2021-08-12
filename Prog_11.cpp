#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

//	Write a C++ program to use scope resolution operators. When a class has a function prototype inside but the definition is outside of the class

class student
{
private:
	int id;
	char name[20];
public:
	void set_values(int a, char* user_name);
	void show_values();
};

void student::set_values(int a, char* user_name)
{
	id = a;
	strcpy_s(name, user_name);
}

void student::show_values()
{
	cout << "Name : " << name << " , ID : " << id << endl;
}

int main()
{
	student s1;
	int id;
	char name[20];
	cout << "Enter the id of the student :";
	cin >> id;
	cout << "Enter the name of the student :";
	cin >> name;
	s1.set_values(id, name);
	s1.show_values();
	system("pause");
	return 0;
}
