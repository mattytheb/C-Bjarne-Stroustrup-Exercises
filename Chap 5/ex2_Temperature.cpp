#include "std_lib_fac.h"
//converts Celsius to Kelvin

double ctok(double c)			//converts C to K
{
	double k = c + 273.15;
	return k;
}
int main()

try{
	double c = 0;			//declare input variable
	cin >> c;				//retrieve temperature to input variable
	double k = ctok(c);	//covert temerature
	cout << k << endl;		//print out temp
}
catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}