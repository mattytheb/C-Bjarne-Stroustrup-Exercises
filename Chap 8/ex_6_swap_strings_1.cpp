#include<iostream>
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"

using namespace std;


void printVec(vector<string> &v)
{
	for (int i = 0; i< v.size(); i++)			//print vector
	{
		cout << "This is number:" << i << ": " << v[i] << endl;
	}
}

void revVec(vector<string> &v, vector<string> &rev)
{
	for (int k = 0; k <v.size(); ++k)
	{
		rev.push_back(v[v.size() - 1 - k]);
	}
	
}

void printRev(vector<string> &rev)
{
	for (int l = 0; l < rev.size(); l++)			//print reversed vector
	{
		cout << "This is the reversed number:" << l << ": " << rev[l] << endl;
	}
}

void rev2(vector<string>& v)
{
	for (int i = 0; i<v.size() / 2; ++i) {
		swap(v[i], v[v.size() - 1 - i]);
	}
}

void printSwap(vector<string>& v)
{
	for (int l = 0; l < v.size(); l++)			//print swapped vector
	{
		cout << "This is the swapped number:" << l << ": " << v[l] << endl;
	}
}

int main()
{

	cout << "hello" << endl;

	vector<string>v(11);

	
	
	cout << "2 hellos" << endl;

	cout << "This is the vector:" << endl;
	printVec(v);




	cout << "This is reversed:" << endl;
	vector<string>rev;	
	revVec(v, rev);
	printRev(rev);
	
	cout << "This is swaped:" << endl;
	
	rev2(v);
	printSwap(v);
	
	
	return 0;
		
}
