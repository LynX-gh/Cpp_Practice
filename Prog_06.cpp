#include<iostream>
#include<cstdlib>

using namespace std;

/*6.An electricity board charges the following rates to domestic users to discharge large consumption of energy.
	For the first 100 units – 60 P per unit
	For next 200 units - 80P per unit
	Beyond 300 units - 90 P per Unit
	All users are charged a minimum of Rs.50.00.
	If the total amount is more Than Rs. 300.00 then an additional surcharge of 15 % is added.
	Write a program to read the names of users and number of units consumed and printout the charges with names in C++.
*/
float calc_charge(int a);

int main()
{
	int unit;
	float charge;
	char name[20];
	cout << "Enter the name of the User :";
	cin >> name;
	cout << "Enter the units consumed :";
	cin >> unit;
	charge = calc_charge(unit);
	cout << "\nThe charge of : " << name << "  is = $ " << charge << endl;
	system("pause");
	return 0;
}

float calc_charge(int unit) 
{
	float charge = 0;
	if (unit <= 100)
		charge += 0.6 * unit;
	else if (unit <= 300)
	{
		charge += 60;
		unit -= 100;
		charge += 0.8 * unit;
	}
	else
	{
		charge += 220;
		unit -= 300;
		charge += 0.9 * unit;
	}
	if (charge > 300)
		charge += charge * 0.15;
	else if (charge < 50)
		charge = 50;
	return charge;
}


