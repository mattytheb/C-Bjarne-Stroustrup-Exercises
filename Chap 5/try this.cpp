#include "std_lib_fac.h"
//simple program to exercise operations
int main()   
try{
	
	int x;
	int y;
	int z;
	int area1;
	int area2;
	int area3;
	int framed_area;
	{
		int area1 = (x*y);
		if (area1 <= 0) error("non-positive area");
		int area2 = framed_area*(1*z);
		int area = framed_area*(y* z);
		double ratio = double(area1) / area3;
	}
	cout << area1 << '\t' << area2 << '\t' << area3 << endl;
		
	keep_window_open();
	return 0;
}
catch (exception & e){
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...){
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
	
}