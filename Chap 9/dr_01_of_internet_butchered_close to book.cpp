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
		dd.d = d;		//if functions to check days
		dd.m = m;		//if functions to check months
		dd.y = y;		//if functions to check years
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
	
    init_day(today,1978,6,25);
    Date tomorrow = today;
    add_day(tomorrow,1);
    cout << "Today = " << today;
    cout << "Tomorrow = " << tomorrow;
}

