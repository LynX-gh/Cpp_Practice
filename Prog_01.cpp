#include<iostream>
#include<cstdlib>

using namespace std;

// WAP to calculate the percentage of 5 subjects in C++

int main()
{
	int marks[5];
	float avg = 0;
	char name[20];
	cout << "Enter the name of student : ";
	cin >> name;
	cout << "Enter the marks of the 5 subjects : ";
	for (int i = 0; i < 5; i++)
	{
		cin >> marks[i];
		avg += marks[i];
	}
	avg /= 5;
	cout << "\nThe percentage obtained by " << name << " is = " << avg <<"%" << endl;
	system("pause");
	return 0;
}
