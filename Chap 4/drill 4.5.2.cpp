#include "std_lib_fac.h"


//simple program to exercise operations
int main()   
{
	int num = 0;
	int rez = 0;
	cout << "enter the number you want squared:\n";
	cin >> num;

	for (int i = 0; i < num; i++){
		rez += num;
	}
		cout << rez << '\n';
	
	return 0;
}
