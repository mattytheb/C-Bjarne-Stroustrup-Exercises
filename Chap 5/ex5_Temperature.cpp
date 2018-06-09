#include "std_lib_fac.h"
//converts Celsius to Kelvin

double ctok(double c)			//converts C to K
{
	if (c < -273.15) error("Impossible Temp");
	double k = c + 273.15;
	return k;
}
double ktok(double k)			//converts k to c
{
	if (k < 0) error("Impossible Temp");
	double c = k - 273.15;
	return c;
}
int main()

try{
	double temp = 0;			//declare input variable
	double conv_t = 0;
	char conv_u = ' ';
	char unit = ' ';
	cout << "Input a temperature followed by K(Kelvin) or C(Celcius): \n";
	cin >> temp>>unit;		//retrieve temperature to input variable
	
	if (unit == 'c'|| unit =='C')
	{
		conv_t = ctok(temp);			//covert temerature
		conv_u = 'K';
	}			//print out temp

	else if (unit == 'k'|| unit =='K')
	{
		conv_t = ktok(temp);			//covert temerature
		conv_u = 'C';
	}		

	else error ("Wrong unit\n");
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