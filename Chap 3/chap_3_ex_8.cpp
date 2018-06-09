#include "std_lib_fac.h"
int main()    //hjhjhjk
{
	cout << "Enter number 1;\n";
	int val1;
	cin >> val1;
	
	
	int a = val1%2;
	if (a == 1)
		cout << "The value " <<val1  <<" is odd"<< endl;

	else if (a == 0)
		cout << "The value " <<val1 <<" is even" << endl;

		return 0;
}