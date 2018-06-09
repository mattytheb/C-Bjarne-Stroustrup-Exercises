//Chapter 9 Drill 1
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include "Chrono.h"
#include<iostream>


struct Date
{
	int y;
	int m;
	int d;
};

void intit_day(Date &dd, int y, int m, int d)
{
	dd.d = d;
	dd.m = m;
	dd.y = y;
	//check that y,m,d is a vlaid date
	// if it is intitlaize to dd
}

void add_day(Date &dd, int n)
{
		dd.d += 1;

	//increase dd by n days
}

Date today;

int main()
try

{
	
	intit_day(today, 1978, 6,25);
	add_day(today, 1);

	cout << "Today = " << today;
	//cout << "Tomorrow = " << tomorrow;

}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
}
catch (...) {
	cerr << "exception\n";
}

