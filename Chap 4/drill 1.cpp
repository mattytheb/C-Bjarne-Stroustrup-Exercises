#include "std_lib_fac.h"
//simple program to exercise operations
int main()   
{
	const double yen = 0.31;
	const double pounds = 40.75;
	const double euros = 35.18;
	const double dollars = 31.42;
	const double yuan = 4.74;
	const double kroner = 3.73;
	
	double nt = 0.0;
	char cur = ' ';
	cout << "Please enter the amount of New Taiwan Dollars you have.\n";
	cout << "Enter the letter you want to convert to: y for yen, p for pounds, e for euros and d for dollars, x for yuan, k for korna.\n";
	cin >> nt >> cur;

	switch (cur){
	case 'y':
		cout << "NT$" << nt << " equals " << nt/yen << " yen";
		break;
	case 'p':
		cout << "NT$" << nt << " equals " << nt/pounds << " pounds";
		break;
	case 'e':
		cout << "NT$" << nt << " equals " << nt/euros << " euros";
		break;
	case 'd':
		cout << "NT$" << nt << " equals " << nt/dollars << " dollars";
		break;
	case 'x':
		cout << "NT$" << nt << " equals " << nt / yuan << " yuan";
		break;
	case 'k':
		cout << "NT$" << nt << " equals " << nt / kroner << " kroner";
		break;
	default:
		cout << "Sorry, I don't know this currency" << cur << "\n";
		break;
	}


	return 0;
}