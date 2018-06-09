//Chapter 8 Drill 1
#include "fib.h"
#include<iostream>
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"

using namespace std;


int main()	{

	int x = startNum();						//start num
	cout << "your start number is: " << x << endl;
	int y = endNum();						//end num
	cout << "your number is: " << y << endl;

	vector<int>my_v;						//create vector
	for (int i = x; i <= y; ++i){
		my_v.push_back(i);
	}
	
	print(my_v);							//print vector

	cout<<"your new number is: "<<process(x)<<endl;

	


	return 0;
		
}

