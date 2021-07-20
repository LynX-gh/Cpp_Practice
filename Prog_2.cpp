#include<iostream>

using namespace std;

// 2. WAP to display fibonacci series up till the no entered by the user

int main()
{
	int number, nxtno = 1, n_1no = 1, n_2no = 0;
	cout << "Enter the number to display the series till :";
	cin >> number;
	cout << "The series is : " << n_2no << " " << n_1no << " ";
	while (nxtno <= number)
	{
		cout << nxtno << " ";
		n_2no = n_1no;
		n_1no = nxtno;
		nxtno = n_1no + n_2no;
	}
	return 0;
}