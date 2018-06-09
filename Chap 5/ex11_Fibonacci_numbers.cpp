#include "std_lib_fac.h"
//displaying Fibonacci Numbers

int main()

try{
	int num = 0;		// number of fib numbers upto
	vector<int>fib(3);	//fib vector
	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 1;
	int new_fib = 0;
	cout << "How many Fibonacci numbers would you like to see?\n";
	cin >> num;

	for (int i = 3; i < num; ++i)
	{

		new_fib = fib[i - 1] + fib[i - 2];
		fib.push_back(new_fib);
	}

	for (int p = 0; p < num; ++p)
	{
		cout << p<<'\t'<<fib[p]<<endl;
	}


}
catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}