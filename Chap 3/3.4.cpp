#include "std_lib_fac.h"
//simple program to exercise operations
int main()   
{
	cout<<"Please enter a floating-point value:";
double n;
cin >> n;
cout << "n==" << n
<< "\nn+1==" << n + 1
<< endl;
cout<< "\whatever this says buster"
<< "\n3 times n==" << 3 * n
<< "\ntwice n==" << 2 * n
<< "\nsquared ==" << n*n
<< "\nhalf of n==" << n / 2
<< "\nsquare root of n==" << sqrt(n)
<< endl; //another name of end line or new line
	return 0;
}