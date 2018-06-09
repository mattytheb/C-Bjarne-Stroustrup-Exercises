#include "std_lib_fac.h"
int main()   
{
	//solving quadratic equations.

	double a = 0;
	double b = 0;
	double c = 0;
	double x1 = 0;
	double x2 = 0;

	cout << "Enter the value for a:  \n";
	cin >> a;
	cout << "Enter the value for b:  \n";
	cin >> b;
	cout << "Enter the value for c:  \n";
	cin >> c;

	x1 = (-b + (sqrt((b*b)-4*a*c)))/(2*a);
	x2 = (-b - (sqrt((b*b) - 4 * a*c)))/(2*a);
	cout << x1<<endl;
	cout << x2 << endl;
	return 0;
		}