#include "std_lib_fac.h"
int main()    //hjhjhjk
{
	cout << "Enter value 1;\n";
	int val1;
	cin >> val1;
	cout << "Enter value 2;\n";
	int val2;
	cin >> val2;
	cout << "Enter value 3;\n";
	int val3;
	cin >> val3;
	if (val1 < val2 && val2< val3)
	cout << "In numerical order are:" << val1 << "," << val2 << "," << val3 << endl;

	else if (val1 < val3 && val3< val2)
	cout << "In numerical order are:" << val1 << "," << val3 << "," << val2 << endl;
	
	else if (val3 < val1 && val1< val2)
	cout << "In numerical order are:" << val3 << "," << val1 << "," << val2 << endl;
	
	else if (val3 < val2 && val2< val1) 
	cout << "In numerical order are:" << val3 << "," << val2 << "," << val1 << endl;
	
	else if (val2 < val1 && val1< val3)
	cout << "In numerical order are:" << val2 << "," << val1 << "," << val3 << endl;
	
	else if (val2 < val3 && val3< val1)
	cout << "In numerical order are:" << val2 << "," << val3 << "," << val1 << endl;
	return 0;
}