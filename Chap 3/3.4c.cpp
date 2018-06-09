#include "std_lib_fac.h"
//read and compare names
int main()   
{
	cout << "Please enter 2 names\n";
	string first;
	string second;
	cin >> first >> second;  //read 2 strings
	if (first == second)cout << "that's the same name twice!\n";
	if (first < second)
		cout << first << " is alphabetically before " << second << '\n';
	if (first > second)
		cout << first << " is alphabetically after " << second << '\n';
	return 0;
}