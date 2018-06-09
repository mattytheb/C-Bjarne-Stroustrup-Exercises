#include "fib.h"
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"


int startNum(){
	cout << "Enter number you wish to start at:" << endl;
	int input;
	cin >> input;

	return input;
}

int endNum(){

	cout << "Enter number you wish to end at:" << endl;
	int input;
	cin >> input;

	return input;
}

int process(int a){

	a *= 1000;
	return a;
}

void print(vector<int> &my_v){

	for (int i = 0; i != my_v.size(); i++){
		cout << "This is number:" << i << ": " << my_v[i] << endl;
	}
}



