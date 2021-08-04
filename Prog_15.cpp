#include<iostream>
#include<cstdlib>

using namespace std;

// Write a C++ program using class to calculate simple interest amount use default value for rate.

class interest
{
	float P, r, t;
public:
	interest(float x, float z, float y);
	inline float calculate_interest();
};

interest::interest(float x, float z, float y = 5)
{
	P = x;
	t = z;
	r = y;
}

inline float interest::calculate_interest()
{
	return P * (1 + r * t);
}

int main()
{
	float p, t;
	cout << "Enter the Principal Amount : ";
	cin >> p;
	cout << "Enter the Time in years : ";
	cin >> t;
	interest simple_interest(p, t);
	cout << "\n\nThe total amount after interest = " << simple_interest.calculate_interest() << endl;
	system("pause");
	return 0;
}