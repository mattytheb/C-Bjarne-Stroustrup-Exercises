#include "std_lib_fac.h"
int main()   

{
	double val1 = 0;
	double val2 = 0;
	char op = ' ';

		cout << "Enter two values and the calculation (+,-,*,/ and %):  \n";
		cin >> val1 >> val2 >> op;

		if (op == '+')
			cout << "The sum of " << val1 << " and " << val2 << " is: " << val1 + val2 << ".\n";

		else if (op == '-')
			cout << "The difference between " << val1 << " and " << val2 << " is: " << val1 - val2 << ".\n";
		
		else if (op == '*')
			cout << "The product of " << val1 << " and " << val2 << " is: " << val1 * val2 << ".\n";
		
		else if (op == '/')
			cout << "The quotient of " << val1 << " and " << val2 << " is: " << val1 / val2 << ".\n";
		
		else
			cout << "Illegal symbol" << endl;
		return 0;
}