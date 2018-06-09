#include "std_lib_fac.h"
//add numbers

int main()

try{
	vector<int>v(0);
	int num = 0;

	int sum = 0;
	cout << "Enter your numbers: \n";
	while (cin >> num)
	{
		v.push_back(num);
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
	}



catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}