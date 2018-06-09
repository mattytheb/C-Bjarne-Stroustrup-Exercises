#include "std_lib_fac.h"
int main()

{
	int n = 0;				//number
	int d = 0;				//divider
	int r = 0;				//remainder
	int ps = 1;				//prime switch
	//vector<int>primes(0);	//vector of primes
	cout << "Enter a number to see if it is a prime: \n";
	cin >> n;

	d = n - 1;
	while (d<n && d> 1)
	{
		r = n%d;
		
		if (r == 0){
			ps = 0;}
			
		
			//primes.push_back(n);
		
		--d;
	}
		if (ps == 1)
		{
			cout << "This is a prime. " << n << endl;
		}
		else if (ps == 0)
		{
			cout << "This is not a prime number. " << n << endl;
		}
	//cout << r << endl;
	//cout << "This is a prime:" << primes[0] << endl; //trying to print a vector
	

		return 0;
}