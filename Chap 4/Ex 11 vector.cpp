#include "std_lib_fac.h"
int main()

{
	int n = 0;				//number
	int m = 0;				//limit of primes search
	int d = 0;				//divider
	int r = 0;				//remainder
	int ps = 1;				//prime switch
	vector<int>test(0);		//numbers to test
	vector<int>primes(1);	//vector of primes
	primes[0] = 1;			//prime the vector

	cout << "Enter a number to see how many primes there are up to it: \n";
	cin >> m;

	int i = 0;
	while (i <= m)
	{
		{ cout << i << endl; }		//add numbers to a vector
		{test.push_back(i);	}
		++i;
	}





	cout << "Does this work?" << endl;

	for (int j = 0; j <= m; ++j)	//vector printing
	{	
		cout << test[j] << endl;
	}
		/*d = n - 1;
		while (d<n && d> 1)
		{
			r = n%d;		//finds the prime

			if (r == 0)
			{
				ps = 0;		//filters out the non-primes
			}
			if (ps == 1)
			{
				primes.push_back(n); //adds prime number to vector
			}
			--d;
		}*/
		
	
	
		/*for (int j = 0; j < 100; ++j)	{	//vector printing

			cout << test[j] << endl;
		}*/

		return 0;
		}



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