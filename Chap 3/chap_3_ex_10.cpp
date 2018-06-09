#include "std_lib_fac.h"
int main()    //hjhjhjk

{
	string operation;
	double val1;
	double val2;

	cout << "Enter your operation and two numbers:";

	while (cin >> operation >> val1 >> val2){
		double res = 0;

		if (operation == "+") res = val1 + val2;
		else if (operation == "-") res = val1 - val2;
		else if (operation == "*") res = val1 * val2;
		else if (operation == "/") res = val1 / val2;
		else if (operation == "plus") res = val1 + val2;
		else if (operation == "minus") res = val1 - val2;
		else if (operation == "multily") res = val1 * val2;
		else if (operation == "divide") res = val1 / val2;

		cout << val1 << operation << val2 << "=" << res << endl;
		return 0;
	}
	

}