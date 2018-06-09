#include "std_lib_fac.h"
//quadratic equation with error report


double ctok(double c)			//converts C to F
{
	if (c <=0) error("Impossible number");
	double f = c*1000;
	return f;
}

int main()

try{
	double temp = 0;			//declare input variable
	double conv_t = 0;
	char conv_u = ' ';
	char unit = ' ';
	cout << "Input a temperature followed by F(Celcius) or C(Celcius) to convert: \n";
	cin >> temp>>unit;		//retrieve temperature to input variable
	
	if (unit == 'c'|| unit =='C')
	{
		conv_t = ctok(temp);			//covert temerature
		conv_u = 'F';
	}			//print out temp

	cout << "The Temperature is: " << conv_t << "  "<<conv_u<<endl;
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