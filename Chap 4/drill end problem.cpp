#include "std_lib_fac.h"


int main()   

{
	double val1 = 0;
	double val2 = 0;

	char n = 0;
	cout << "Please enter two double values.\n";
	while (cin >> val1 >> val2)
		
	{
		if (val1<val2)
			cout << "The smallest number is:" << val1 << " And the largest value is: " << val2 <<". " <<"Please enter two more integer values:\n";
		else if (val1>val2)
			cout << "The smallest number is:" << val2 << " And the largest value is: " << val1 << ". " << "Please enter two more integer values:\n";
		else if (val1==val2)
			cout  << val1 << " is equal to: " << val2 << ". " << "Please enter two more integer values:\n";
		if ((val1-val2)<1)
			cout << "The numbers are almost equal. "  << "Please enter two more integer values:\n";
		if (n== '|')
			cout << "terminate";

	}
	return 0;
}
