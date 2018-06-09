#include "std_lib_fac.h"
int main()

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

	int i = 2;
	while (i <= n)
	{
		//cout << "These are the numbers:" << i << endl;
		d = i - 1;
		while (d<n && d> 1)
		{
			r = i%d;		//finds the prime

			if (r == 0)
			{	ps = 0;		//filters out the non-primes
				//cout << "This number is not a prime!!!!!!!!!!!!: " << i << endl;
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




	/*cout << "Does this work?" << endl;

	for (int j = 0; j <= m; ++j)	//vector printing
	{	
		n = j ;
		cout << n << endl;
		cout << test[j] << endl;
		d = n - 1;
		while (d<n && d> 1)
		{
			r = n%d;		//finds the prime
			cout << "the number" << n << "the r" << r << "the d" << d<<"prime swithc"<<ps<<endl;
			if (r == 0)
			{
				ps = 0;		//filters out the non-primes
			cout << "This number is not a prime!!!!!!!!!!!!: " << n << endl;
			primes.push_back(n); //adds prime number to vector
			}
			if (r!=0)
			{
				ps = 1;
				
				//primes.push_back(n); //adds prime number to vector
			}
			--d;
		}
	}
		
		
	
	
		for (int j = 0; j < m; ++j)	{	//vector printing

			cout << primes[j] << endl;
		}*/

		



/*else if (ps == 0)
{
cout << "This is not a prime number. " << n << endl;
}*/

//cout << "This is a prime:" << primes[1] << endl; //trying to print a vector

/*int m = 0;

cout << "Enter a number to see how many primes there are up to it: \n";
cin >> m;

for (int j = 0; j < m; ++j)
{
	cout << j << endl;
}
*/