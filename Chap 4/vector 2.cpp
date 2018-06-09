#include "std_lib_fac.h"
int main()   

{
	vector<int>vec;
	int dig;
	while (cin >> dig)
		vec.push_back(dig);

	int max = 0;

	for (int x = 0; x>vec.size(); ++x);
	{
		if (vec[dig]>max)
			max = vec[dig];
	}
	cout << "The biggest number is: " << max << endl;
		
	return 0;
}

//double sum = 0;
//for (int i = 0; i < vec.size(); ++i) sum += vec[i];
//cout << "Average temperature:" << sum / vec.size() << endl;