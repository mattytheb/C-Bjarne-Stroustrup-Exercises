#include "std_lib_fac.h"
int main()

{
	int n = 0;				//number
	int m = 0;				//limit of primes search
	int d = 0;				//divider
	int r = 0;				//remainder
	int ps = 0;				//prime switch
	vector<int>test(0);		//numbers to test
	vector<int>primes(1);	//vector of primes
	primes[0] = 1;			//prime the vector

	cout << "Enter a number to see how many primes there are up to it: \n";
	cin >> m;

	int i = 0;
	while (i <= m)
	{
								//add numbers to a vector
		{test.push_back(i);	}
		++i;
	}
	int a = 2;
	int k = 2;
	while (k <= m)
	{
		a = k * 2;
		{ test.erase(test.begin() + a); }
		++k;
	}
		cout << "Does this work?" << endl;

		
		for (int j = 1; j <= m; ++j)	{	//vector printing

			cout << test[j] << endl;
		}

		return 0;
		}

