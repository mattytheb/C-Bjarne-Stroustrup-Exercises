#include "std_lib_fac.h"
//simple program to exercise operations

int area(int length, int width)
{
	return length*width;
}
int framed_area(int x, int y)
{
	return area(x - 2, y - 2);
}

int main() 
{ 
	int x = -1;
	int y = 2;
	int z = 4;

	if (x <= 0) error("non-pos");
	if (y <= 0) error("non-pos");
	
	int area1 = area(x, y);
	int area2 = framed_area(1, z);
	int area3 = framed_area(y, z);
	double ratio = double(area1) / area3;
	
	cout << area1 << '\t' << area2 << '\t' << area3 << '\t' << ratio << endl;
	cout << framed_area << endl;
}