#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include<iostream>
#include<string>

using namespace std;

#ifndef Patrons_H
#define Patrons_H

class Patrons
{
public:
	Patrons();
	~Patrons();
	void choice();
	void printPatrons();
	void newPatron();
	void search();
	void payFee();
	void addPerson(string NP);
	int lookup(string s);
	void addFee();


	vector<string>name;
	vector<int>accNo;
	vector<double>fee;


};



#endif
