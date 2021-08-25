#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

//	Declare a class called book_details to represent details for a book, having data members like title, author, edition, price and no_of_copies_available. Define following functions:
//	-constructor(s)
//	-display to display all data members
//	-find_books to find and display details of all books having price less than Rs. 250 //
//	-main to create an array of book_details and to show usage of above functions

class Book_details
{
	char title[20], author[20];
	float edition, price;
	int copies_available;
public:
	static int counter;
	Book_details();
	Book_details(const char*, const char*, float, float, int);
	void Display();
	float Price();
};

Book_details::Book_details()
{
	strcpy_s(title, "Programming in C++");
	strcpy_s(author, "Balaguruswami");
	edition = 10;
	price = 420;
	copies_available = 2001;
	counter++;
}

Book_details::Book_details(const char a[], const char b[], float c, float d, int e)
{
	strcpy_s(title, a);
	strcpy_s(author, b);
	edition = c;
	price = d;
	copies_available = e;
	counter++;
}

void Book_details::Display()
{
	cout << "\n" << title << " by " << author << endl;
	cout << "Edition - " << edition << endl;
	cout << "Available at Rs." << price << "\tCopies available - " << copies_available << endl;
}

float Book_details::Price()
{
	return price;
}

int Book_details::counter = 0;

void Find_Books(Book_details b[])
{
	for (int i = 0; i < Book_details::counter; i++)
	{
		if (b[i].Price() < 250)
			b[i].Display();
	}
}

int main()
{
	Book_details books[10] = { Book_details("DE", "Morris Mano", 11.0, 249, 4050), Book_details("Phy", "Irodov", 20.0, 69, 40500), Book_details("Maths", "NCERT", 1.0, 120, 21000), Book_details("Sherlock Holmes", "Arthur Conan Doyle", 11.0, 120, 100000) };
	Find_Books(books);
	system("pause");
	return 0;
}