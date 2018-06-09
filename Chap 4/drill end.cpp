#include "std_lib_fac.h"


//simple program to exercise operations
int main()   
{
	
	int num1=0;	
	int num2=0;
	cout << "Please, enter 2 numbers: ";
	cin >> num1;
	cin >> num2;

	
	while (num1 < 0 && num2 < 0)	{
		
		cout << "Please, enter 2 numbers: ";
		cin >> num1 >> num2;
		cout << "Two numbers are:" << num1 << "  " << num2 << '\n';
		if (num1 == '|')
			break;

	}
		
		
		
	
	
	
	
	return 0;
}
