//drill 2 chapter 9
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"

struct Date {
	int y, m, d;
	Date(int y, int m, int d);
	int add_day(int n);
};

//helper functions

Date::Date ( int y0, int m0, int d0) 
	{
	if (d0<1 || d0>31)error("Invalid date");
	if (m0<1 || m0>12)error("Invalid month");
	if (y0<1850 || y0>2080)error("Invalid year");
		d=d0;		
		m=m0;		
		y=y0;		
	}

int Date::add_day (int n) 
	{
	d=d+n;
	return d;
    }

ostream & operator<< (ostream & os, const Date & dd) {
    os << "It's "<<dd.d;
    os << " of "<<dd.m;
    os << " month, " << dd.y << endl;
    return os;
}


int main()
{
	int y1;
	int m1;
	int d1;
	cout << "Enter year, month, day" << endl;
	cin >> y1>> m1>>d1;

	Date today(y1, m1, d1);
	
    Date tomorrow = today;
	tomorrow.y = today.y;
	tomorrow.m = today.m;
	tomorrow.d = today.add_day(1);
	cout << "Tomorrow = " << tomorrow;
	
	
	
	
	
}

