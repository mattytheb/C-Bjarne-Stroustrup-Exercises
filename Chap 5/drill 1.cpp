#include "std_lib_fac.h"
//simple program to exercise operations
int main()   
try{
	
		cout << "success\n";
	
		
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