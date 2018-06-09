// function defintions

#include "Date.h"

Date::Date(int y, Month m, int d)
{
	newName = name;
	newHeight = height;
	newWeight = weight;
}
Date(int y, Month m, int d);
void add_day(int n);
int year() const { return y; }
Month month() const { return m; }
int day() const { return d; }