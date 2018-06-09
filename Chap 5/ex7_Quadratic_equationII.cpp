#include "std_lib_fac.h"
//quadratic equation with error report


double k(double a, double b, double c)			//converts C to F
{
	if ((b*b) - (4.0*a*c)<0) error("Impossible solution");
	double j = (b*b)-(4.0*a*c);
	return j;
}

int main()

try{
	double a = 0;
	double b = 0;
	double c = 0;
	double part_quad = 0;
	double X1 = 0;
	double X2 = 0;
	char conv_u = ' ';
	char unit = ' ';
	cout << "Input numbers for a, b, c: \n";
	cin >> a>>b>>c;		//retrieve temperature to input variable
	
	
	{
		part_quad = k(a,b,c);			
		
	}			
	X1= (-b + sqrt(part_quad)) / (2.0*a);
	X2 = (-b - sqrt(part_quad)) / (2.0*a);
	cout << "The magic number X1: " << X1 <<endl;
	cout << "The magic number X2: " << X2 << endl;
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