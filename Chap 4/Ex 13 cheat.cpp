#include "std_lib_fac.h"

vector<int> primes;

bool is_prime(int m)
	{
	for (int i = 0; primes[i] <= sqrt(m); ++i) 
		{
		if (m%primes[i] == 0)
			return false;
		}
			return true;
	}

	int main()
	{
	
	cout << "How many primes should I find?\n";
	int n = 0;
	cin >> n;
	primes.push_back(2);
	
	int i = 3;
	while (primes.size() < n) 
	{
		if (is_prime(i))
			primes.push_back(i);
		cout << i << endl;
		i += 2;
	}
	
	return 0;
	}

