//Chapter 8 Drill 1
#include "fib_ex_5.h"
#include<iostream>
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"

using namespace std;

int getInput() {
	cout << "How many?" << endl;
	int input;
	cin >> input;
	return input;
}

void makeVec(vector<int> &v, int n)
{
	for (int j = 0; j <n; ++j)			//make vector
	{
		v.push_back(j);
	}
}

void printVec(vector<int> &v, int n)
{
	for (int i = 0; i< v.size(); i++)			//print vector
	{
		cout << "This is number:" << i << ": " << v[i] << endl;
	}
}

void revVec(vector<int> &v, vector<int> &rev, int n)
{
	for (int k = 0; k < n; ++k)
	{
		rev.push_back(v[v.size() - 1 - k]);
	}
	
}

void printRev(vector<int> &rev, int n)
{
	for (int l = 0; l < rev.size(); l++)			//print reversed vector
	{
		cout << "This is the reversed number:" << l << ": " << rev[l] << endl;
	}
}

void rev2(vector<int>& v)
{
	for (int i = 0; i<v.size() / 2; ++i) {
		swap(v[i], v[v.size() - 1 - i]);
	}
}
int main()
{
	int n = getInput();
	vector<int>v;
	makeVec(v, n);
	printVec(v, n);


cout << "This is reversed:" << endl;
	vector<int>rev;	
	revVec(v, rev, n);
	printRev(rev, n);
	
cout << "This is swaped:" << endl;
	
	rev2(v);
	for (int l = 0; l < v.size(); l++)			//print swapped vector
	{
		cout << "This is the swapped number:" << l << ": " << v[l] << endl;
	}
	

	return 0;
		
}
