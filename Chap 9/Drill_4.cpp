//drill 3 chapter 9
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"

class Date
{
public:
	enum Month
	{
		jan=1,feb, mar, apr, may, jun, aug, sep, oct, nov, dec
	};
	Date(int y, Month m, int d);
	void add_day(int n);
	int year() const { return y; }
	Month month() const { return m; }
	int day() const { return d; }

private:
	int y;
	Month m;
	int d;
};

//helper functions

Date::Date(int y0, Date::Month m0, int d0)
	{
	if (d0<1 || d0>31)error("Invalid date");
	if (m0<1 || m0>12)error("Invalid month");
	if (y0<1850 || y0>2080)error("Invalid year");
		d=d0;		
		m=m0;		
		y=y0;		
	}

void Date::add_day (int n) 
	{
	d=d+n;
	}

ostream & operator<< (ostream & os, const Date & dd) {
    os << "It's "<<dd.day();
    os << " of "<<dd.month();
    os << " month, " << dd.year() << endl;
    return os;
}


int main()
{
	int y1;
	string m1;
	int d1;
	cout << "Enter year, month, day" << endl;
	cin >> y1>> m1>>d1;

	Date today(y1, Date::jun, d1);
	
    Date tomorrow = today;
	
	tomorrow.add_day(1);
	
	cout << "Today = " << today;
	cout << "Tomorrow = " << tomorrow;
	
	/*Date today(1978, Date::jun, 25);
	Date tomorrow = today;
	tomorrow.add_day(1);
	cout << "Today = " << today;
	cout << "Tomorrow = " << tomorrow;*/
	
	
	
}

