#include "std_lib_fac.h"
int main()    //hjhjhjk
{
	cout << "Enter word 1;\n";
	string val1;
	cin >> val1;
	cout << "Enter word 2;\n";
	string val2;
	cin >> val2;
	cout << "Enter word 3;\n";
	string val3;
	cin >> val3;
	if (val1 < val2 && val2< val3)
		cout << "In order are:" << val1 << "," << val2 << "," << val3 << endl;

	else if (val1 < val3 && val3< val2)
		cout << "In order are:" << val1 << "," << val3 << "," << val2 << endl;

	else if (val3 < val1 && val1< val2)
		cout << "In order are:" << val3 << "," << val1 << "," << val2 << endl;

	else if (val3 < val2 && val2< val1)
		cout << "In order are:" << val3 << "," << val2 << "," << val1 << endl;

	else if (val2 < val1 && val1< val3)
		cout << "In order are:" << val2 << "," << val1 << "," << val3 << endl;

	else if (val2 < val3 && val3< val1)
		cout << "In order are:" << val2 << "," << val3 << "," << val1 << endl;
	return 0;
}