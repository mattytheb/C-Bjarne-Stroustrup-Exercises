#include "std_lib_fac.h"
int main()
//Find prime numbers
{
	int n = 0;				//number
	int m = 0;				//limit of primes search
	int d = 0;				//divider
	int r = 1;				//remainder
	int ps = 1;				//prime switch
	vector<int>test(0);		//numbers to test
	vector<int>primes(1);	//vector of primes
	primes[0] = 1;			//prime the vector

	cout << "Enter a number to see how many primes there are up to it: \n";
	cin >> n;

	int i = 1;
	while (i <= n)
	{
		d = i - 1;
		while (d<n && d> 1)
		{
			r = i%d;		//finds the prime

			if (r == 0)
			{	ps = 0;		//filters out the non-primes
			}
		
			--d;
			
		}
		if (ps == 1)
			{ cout << "this is a prime: " << i << endl; }
		ps = 1;
		++i;
		
	}
		return 0;
		}


