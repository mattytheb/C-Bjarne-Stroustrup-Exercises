#include "std_lib_fac.h"
int main()    //hjhjhjk
{
	cout << "How many pennies do you have?;\n";
	int p;
	cin >> p;
	cout << "How many nickels do you have?;\n";
	int n;
	cin >> n;
	cout << "How many dimes do you have?;\n";
	int d;
	cin >> d;
	cout << "How many quarters do you have?;\n";
	int q;
	cin >> q;
	cout << "How many half dollars do you have?;\n";
	int h;
	cin >> h;
	if (p == 1)
		cout << "You have " << p << " penny;\n";
	else if (p!=1)
		cout << "You have " << p << " penny;\n";

		if (n == 1)
		cout << "You have " << n << " nickel;\n";
	else if (n!= 1)
		cout << "You have " << n << " nickels;\n";

		if (d == 1)
			cout << "You have " << d << " dime;\n";
		else if (d != 1)
			cout << "You have " << d << " dimes;\n";

		if (q == 1)
			cout << "You have " << q << " quarter;\n";
		else if (q != 1)
			cout << "You have " << q << " quarters;\n";
	
		if (h == 1)
			cout << "You have " << h << " half-dime;\n";
		else if (h != 1)
			cout << "You have " << h << " half-dimes;\n";
	cout << "You have " << h << " half dollars;\n";

	double tot = ((p * 1) + (n * 5)+(d*10)+(q*25)+(h*50));
	double dtot = tot / 100;
	cout << "The value of all your coins is $" << dtot << ".;\n";

		return 0;
}