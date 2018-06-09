#include "std_lib_fac.h"
//read and compare names
int main()   
{
	double d = 0;
	while (cin >> d){		//repeat the steps below
		//as long as we type in numbers
		int i = d;		//try to squeeze a double into a int
		char c = i;		// int to char
		int i2 = c;		//int value of a char
		cout << "d== " << d	//the original double
			<< " i== " << i		//coverted to int
			<< " i2== " << i2	//int value
			<< " char( " << c << ")\n";	//the char
	}
	return 0;
	}
	
			