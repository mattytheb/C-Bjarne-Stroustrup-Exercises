#include "std_lib_fac.h"
int main()    //hjhjhjk
{
	cout << "Enter number word;\n";
	string val1;
	cin >> val1;
	string s0= "zero";
	string s1= "one";
	string s2= "two";
	string s3= "three";
	string s4= "four";
	if (val1 == s0)
		cout << "0" << endl;
	
	else if (val1 == s1)
		cout << "1" << endl;

	else if (val1 == s2)
		cout << "2" << endl;

	else if (val1 == s3)
		cout << "3" << endl;

	else if (val1 == s4)
		cout << "4" << endl;

	else if (val1 != s0 && val1 != s1 && val1 != s2 && val1 != s3 && val1 != s4)
			cout << "number not recongised" << endl;

		return 0;
}