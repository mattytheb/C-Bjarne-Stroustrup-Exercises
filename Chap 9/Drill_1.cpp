#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"

struct Date 
	{
		int y;
		int m;
		int d;
	};

Date today;

//helper functions

void init_day (Date & dd, int y, int m, int d) 
	{
	if (d<1 || d>31)error("Invalid date");
	if (m<1 || m>12)error("Invalid month");
	if (y<1850 || y>2080)error("Invalid year");
		dd.d = d;		
		dd.m = m;		
		dd.y = y;		
	}

void add_day (Date & dd, int n) 
	{
	dd.d=dd.d+n;
    }

ostream & operator<< (ostream & os, const Date & dd) {
    os << "It's "<<dd.d;
    os << " of "<<dd.m;
    os << " month, " << dd.y << endl;
    return os;
}


int main()
{
	int y;
	int m;
	int d;
	cout << "Enter year, month, day" << endl;
	cin >> y>> m>>d;

	init_day(today,y,m,d);
    Date tomorrow = today;
	add_day(tomorrow,1);
    cout << "Today = " << today;
	cout << "Tomorrow = " << tomorrow;
}

