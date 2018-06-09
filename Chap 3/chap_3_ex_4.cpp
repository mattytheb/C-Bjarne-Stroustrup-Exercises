#include "std_lib_fac.h"
int main()    //hjhjhjk
{
	cout << "Enter value 1;\n";
	int val1;
	cin >> val1;
	cout << "Enter value 2;\n";
	int val2;
	cin >> val2;
	if (val1 > val2) cout << "Value 1: " << val1 << " is larger than value 2: " << val2 << '\n';
	if (val1 < val2) cout << "Value 2: " << val2 << " is larger than value 1: " << val1 << '\n';
	cout << "sum of value 1 and 2=" << val1+val2<<'\n';
	cout << "difference of value 1 and 2=" << val1 - val2<<'\n';
	cout << "product of value 1 and 2=" << val1 * val2 << '\n';
	cout << "ratio of value 1 and 2=" << val1 / val2 << '\n';
	return 0;
}