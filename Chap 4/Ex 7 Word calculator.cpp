#include "std_lib_fac.h"
int main()   

{
	int val1 = 0;
	int val2 = 0;
	string xx = "";
	string yy = "";
	char op = ' ';

	vector<string>num(10);
	num[0] = "zero";
	num[1] = "one"; 
	num[2] = "two"; 
	num[3] = "three"; 
	num[4] = "four"; 
	num[5] = "five"; 
	num[6] = "six"; 
	num[7] = "seven"; 
	num[8] = "eight"; 
	num[9] = "nine";
	
	vector<string>num2(10);
	num2[0] = "0";
	num2[1] = "1";
	num2[2] = "2";
	num2[3] = "3";
	num2[4] = "4";
	num2[5] = "5";
	num2[6] = "6";
	num2[7] = "7";
	num2[8] = "8";
	num2[9] = "9";

	string x = "";
	string y = "";
	cout << "Enter two values and the calculation (+,-,*,/ and %):  \n";
	while (cin >> x >> y >> op) {

		for (int i = 0; i < num.size(); ++i)
		{
			if (num[i] == x)
			{
				xx = num2[i];
			}
			if (num2[i] == x) {
				xx = num2[i];
			}
		}

		for (int i = 0; i < num.size(); ++i)
		{
			if (num[i] == y)
			{
				yy = num2[i];
			}
			if (num2[i] == y) {
				yy = num2[i];
			}
		}

		val1 = stoi(xx);
		val2 = stoi(yy);
		
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
	}
	
	return 0;
}