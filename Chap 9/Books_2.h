//header file== function declarations
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include<iostream>
#include<string>

using namespace std;

#ifndef BOOKS_2_H
#define BOOKS_2_H

class Book
{
public:
	enum Genre{
		fiction, nonfiction, periodical, biography, children
	};
	vector<int>ISBN1;
	vector<int>ISBN2;
	vector<int>ISBN3;
	vector<char>ISBN4;
	vector<string>title;
	vector<string>author;
	vector<int>copyrightDate;
	vector<string>checkedIn;
	vector<Genre>Gen;
	vector<string>pGen;						//variables

	void printBook();
	void choice();
	void addNew();
	void addBook(string NB);
	void search();
	void oldBooks();
	void checkOut();
	void checkIn();
	int lookup(string s);

private:

	


	
	
};
		
#endif