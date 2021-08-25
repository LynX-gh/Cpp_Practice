#include<iostream>
#include<cstdlib>

using namespace std;

//	Create class Time that has three data members hour, minuteand second and two constructors, default constructor and parameterized constructor to initialize data member. Write a program to add two times by overloading operator +

class Time
{
	unsigned int second, minute, hour;
public:
	Time();
	Time(int, int, int);
	void Display();
	Time operator +(Time&);
};

Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}

Time::Time(int a, int b, int c)
{
	hour = a;
	if (b < 60 && c < 60)
	{
		minute = b;
		second = c;
	}
	else
	{
		minute = 0;
		second = 0;
	}
}

void Time::Display()
{
	cout << hour << "H " << minute << "M " << second << "S " << endl;
}

Time Time::operator+(Time &t)
{
	Time temp(0, 0, 0);
	if ((second + t.second) < 60)
		temp.second += second + t.second;
	else
	{
		temp.second += (second + t.second) - 60;
		temp.minute++;
	}
	if ((minute + t.minute) < 60)
		temp.minute += minute + t.minute;
	else
	{
		temp.minute += (minute + t.minute) - 60;
		temp.hour++;
	}
	temp.hour += hour + t.hour;
	return temp;
}

int main()
{
	int a, b, c;
	cout << "Enter hour minute and seconds : ";
	cin >> a >> b >> c;
	cout << endl;
	Time t1(5, 10, 30), t2(a, b, c);
	cout << "T1 : ";
	t1.Display();
	cout << "T2 : ";
	t2.Display();
	t2 = t2 + t1;
	cout << "Time 1 + Time 2 : ";
	t2.Display();
	system("pause");
	return 0;
}