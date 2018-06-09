#include "std_lib_fac.h"
//converts Celsius to Fahrenheit and vice versa
double ctok(double c)			//converts C to F
{
	if (c < -273.15) error("Impossible temp");
	double f = ((9.0/5)*c)+32;
	int f_int = ((9.0 / 5)*c) + 32;
	if (f_int != f)error("Can't display as an int");
	return f;
}
double ftok(double f)			//converts F to C
{
	if (f < -459.67) error("Impossible temp");
	double c = (f - 32)*(5.0/9.0);
	int c_int = (f - 32)*(5.0 / 9.0);
	if (c_int != c)error("Can't display as an int");
	return c;
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

	else if (unit == 'f'|| unit =='F')
	{
		conv_t = ftok(temp);			//covert temerature
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