#include<iostream>
#include<cstdlib>

using namespace std;

//	Write a C++ program to calculate the value of the following series using copy constructor and Inline member function
//	S = 1 ^ 2 + 2 ^ 2 + 3 ^ 2 + 4 ^ 2 . . . + n ^ 2

class Series
{
	int n;
public:
	Series();
	Series(const Series&);
	inline double calc();
};

Series::Series()
{
	cout << "Enter the number of terms to calculate :";
	cin >> n;
}

Series::Series(const Series& s)
{
	n = s.n;
}

inline double Series::calc()
{
	double sum = 0;
	for (int i = n; i > 0; i--)
	{
		sum += i * i;
	}
	return sum;
}

int main()
{
	Series series1;
	Series copy = series1;
	cout << "\nThe sum of the series is :" << copy.calc() << endl;
	system("pause");
	return 0;
}