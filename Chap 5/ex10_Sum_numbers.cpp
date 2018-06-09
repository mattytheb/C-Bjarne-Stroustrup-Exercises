#include "std_lib_fac.h"
//add numbers, has range error, forgot where I was have to fix later.

int main()

try{
	vector<double>v(0);
	double num = 0.0;
	vector<double>v_diff(0);
	double diff = 0.0;

	double sum = 0.0;
	cout << "Enter your numbers: \n";
	while (cin >> num)
	{
		v.push_back(num);
		if (v.size() >= 2)
			v_diff.push_back( v[v.size() - 2]-num);
 		
	}
	
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	int N;
	cout << "How many numbers do you wish to sum?"<<endl;
	cin >> N;

	if (N > v.size())error("Thats more than there are numbers, fool!");
	
	int i = 0;
	while (i < N)
	{
		sum = sum + v[i];
		++i;
	}
	cout << sum << endl;
	for (int m = 0; m < v.size();++m)
	cout << v_diff[m] << endl;
	}



catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}