#include "std_lib_fac.h"
//simple program to exercise operations


int main()
try
{

	int length;
	int width;
	cout << "Enter length and width: \n";
	cin >> length >> width;
	
		if (length <= 0 || width <= 0) error("negative dimesion");
		int a = length*width;
		cout << a << endl;
		if (a <= 0) error("area() post-condition");
		return 0;
	
}
catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}