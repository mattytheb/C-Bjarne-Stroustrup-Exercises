//header file== function declarations
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include<iostream>
#include<string>

using namespace std;

#ifndef BOOKS_H
#define BOOKS_H

class Book
{
public:
	int ISBN1;
	int ISBN2;
	int ISBN3;
	char ISBN4;
	string title;
	string author;
	int copyrightDate;
	bool checkedIn;			//variables

	int getISBN1();
	int getISBN2();
	int getISBN3();
	char getISBN4();
	string getTitle();
	string getAuthor();
	int getCopyrightDate();
	bool getCheckedIn();		//get information

	void printBook();
	void choice();
	void addNew();
	void search();
	

	
	


	
	
};
		
#endif