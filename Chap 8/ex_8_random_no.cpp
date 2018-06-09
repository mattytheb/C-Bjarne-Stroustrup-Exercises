#include<iostream>
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include<ctime>
#include <cmath>
using namespace std;

int maxInt() 
	{
	int m;
	int K;
	int k;
	cout << "Enter maximum int" << endl;
	cin >> m;
	//k = (sqrt (m))/2;
	//K = pow(2, k);
		
	return m;
	}

void randint()
	{
	int M = maxInt();
	int k = 19;
	int c = 51;
	int X = 25;
	int i;
	for (i = 0; i<100; i++)
	{
		X = (k * X + c) % M;
		cout << X << '\t' << " ";

	}
	}

int main()
	
{
	
	randint();
	
	
	

	return 0;
		
}
