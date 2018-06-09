#include<iostream>
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include<ctime>
#include <cmath>

using namespace std;

vector<string>v;


void print_until_s(const vector<string>v, const string quit)
{
	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i] == quit)return;
		cout << v[i] << endl;
	}
}

void print_until_ss(const vector<string>& v, const string& quit)
{
	int counter = 0;
	for (int i = 0; i<v.size(); ++i) {
		if (v[i] == quit)
		if (counter == 1) return;
		else ++counter;
		cout << v[i] << endl;
	}
}
int main()

{	
	v.push_back("we");
	v.push_back("wish");
	v.push_back("you");
	v.push_back("a");
	v.push_back("merry");
	v.push_back("christmas");
	v.push_back("and");
	v.push_back("a");
	v.push_back("happy");
	v.push_back("new");
	v.push_back("year");
	
	print_until_s(v,"year");
	print_until_ss(v, "year");
	
	return 0;

}

