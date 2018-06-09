// function defintions

#include "Books.h"
using namespace std;


void Book::printBook()
{
	string In;
	if (checkedIn = true)
		In = "Yes";
	else if (checkedIn = false)
		In = "No";

	cout<<endl;
	cout << "Here is your book:" << endl;
	cout << "Title: " << title << endl
		<< "Author: " << author << endl
		<< "ISBN: " << ISBN1 << "-" << ISBN2 << "-" << ISBN3 << "-" << ISBN4 << endl
		<< "Copy Right Date: " << copyrightDate << endl
		<< "In the library? " << In << endl;
}
void Book::addNew()
{
	cout<<"hehe" << endl; //add another book use vectors
}

void Book::search()
{
	cout << "hehe" << endl; //search books in a vector
}

void Book::choice()
{
	int input;
	cout << "Do you want to enter a new book? Or search for an old one?" << endl
		<< "Enter 1 for new, enter 2 for search." << endl;
	cin >> input;

	if (input = 1)
		addNew();
	else if (input = 2)
		search();
	else
		choice();
}
int Book::getISBN1()
{
	return ISBN1;
}


int Book::getISBN2()
{
	return ISBN2;
}

int Book::getISBN3()
{
	return ISBN3;
}

char Book::getISBN4()
{
	return ISBN4;
}

string Book::getTitle()
{
	return title;
}

string Book::getAuthor()
{
	return author;
}

int Book::getCopyrightDate()
{
	return copyrightDate;
}

bool Book::getCheckedIn()
{
	return checkedIn;
}






