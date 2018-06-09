//header file== function declarations

#include<iostream>
#include<string>

using namespace std;

#ifndef DATE_H
#define DATE_H

class Date
{
public:
	enum Month
	{
		jan = 1, feb, mar, apr, may, jun, aug, sep, oct, nov, dec
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


#endif