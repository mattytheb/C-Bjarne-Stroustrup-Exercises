// Chapter 09, exercise 13: implement Rational number class

#include "C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include"Rational_2.h"

using namespace std;



int main()
{
	int n;
	int d;
	cout << "Enter n and d: " << endl;
	cin >> n >> d;

	Rational number1;

	number1.getNum(n);
	number1.getDen(d);

	
	cout << "Enter n and d: " << endl;
	cin >> n >> d;

	Rational number2;

	number2.getNum(n);
	number2.getDen(d);

	cout << number1 << number2<<endl;

	if (number1 == number2)
		cout << "they are equal" << endl;



	return 0;
}