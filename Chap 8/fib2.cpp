#include "fib2.h"
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"


int startNum(){
	cout << "Enter your first number:" << endl;
	int input;
	cin >> input;

	return input;
}

int endNum(){

	cout << "Enter your second number:" << endl;
	int input;
	cin >> input;

	return input;
}

int howMany(){

	cout << "How many Fibs:" << endl;
	int input;
	cin >> input;

	return input;
}
void Fib(int x, int y, vector<int> &v, int n){		//make fib numbers
		
		v.push_back(x);			//1st 
		
		v.push_back(y);			//2nd
		

		for (int i = 2; i < n; ++i)
		{

			v.push_back(v[i - 2] + v[i - 1]);

		}
	}


void print(vector<int> &v){

	for (int i = 0; i != v.size(); i++){
		cout << "This is number:" << i << ": " << v[i] << endl;
	}
}

void revFib(){}
