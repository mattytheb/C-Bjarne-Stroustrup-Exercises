//header file== function declarations
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include<iostream>
#include<string>

using namespace std;

#ifndef DATE_H
#define DATE_H

class Name_pairs
{
public:
	void welcome();
	void read_names();
	void print();
	void read_ages();
	void choice();
	void Vsort();
	int lookup(int m);
	void copyV();
	
	friend ostream& operator<<(ostream& os, const Name_pairs& d);
private:
	vector<string>name;
	vector<double>age;
	vector<string>copyName;
	
	
};
		
ostream& operator<<(ostream& os, const Name_pairs& d);

#endif