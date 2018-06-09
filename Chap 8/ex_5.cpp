//Chapter 8 Drill 1
#include "fib_ex_5.h"
#include<iostream>
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"

using namespace std;


int main()
try{

	int x = startNum();						//start num
	cout << "your start number is: " << x << endl;
	int y = endNum();						//end num
	cout << "your number is: " << y << endl;
	int n = howMany();						//end num
	cout << "your number is: " << n << endl;

	vector<int> v;
		
	Fib(x, y, v, n);					// create vector
	print(v);							//print vector

	vector<int> rev;

	revFib(rev,v);						//reverse the vector by making a new one
	cout << "The Fib vector reversed:" << endl;
	printRev(rev);
	cout << "work???" << endl;
	return 0;
		
}

catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
	char c;
	while (cin >> c && c != ';');
	return 1;
}
catch (...) {
	cerr << "exception\n";
	char c;
	while (cin >> c && c != ';');
	return 2;
}
