#include<iostream>
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include<ctime>
#include <cmath>

using namespace std;

vector<string>v;
vector<int>charCount;

void countChar(const vector<string>v)
{
	
	for (int i = 0; i < v.size(); ++i)
	{
		charCount.push_back(v[i].size());
		//cout << v[i] << '\t' <<  '\t'<< "String Length: " << v[i].size() << endl;
	}
}

void print(const vector<string>v, const vector<int>charCount)
{
	for (int i = 0; i < v.size(); ++i)
	{
		cout << "Word: " << v[i] << '\t' << "Characters: " << charCount[i] << endl;
	}
}

string maxv(const vector<string> &v, const vector<int>charCount)
{
	int max = 0;
	for (int i = 0; i < charCount.size(); i++)
	if (charCount[i]>max)
		max = i;
	return v[max];
}

string minv(const vector<string> &v, const vector<int>charCount)
{
	int min = 1000;
	for (int i = 0; i < charCount.size(); i++)
	if (charCount[i]<min)
		min = i;
	return v[min];
}

void sortWords(const vector<string> &v)
{
	vector<string>sorted;
	for (int i = 0; i < v.size(); i++)
	{
		string x;
		x = v[i];
		sorted.push_back(x);
	}
	int s = sorted.size();
	sort(sorted.begin(), sorted.end());
	cout << "First word: " << sorted[0] << endl;
	cout<<"Last word: "<<sorted[s-1]<<endl;
}

int main()

{	
	v.push_back("we");
	v.push_back("wish");
	v.push_back("you");
	v.push_back("a ");
	v.push_back("merry");
	v.push_back("christmas");
	v.push_back("and");
	v.push_back("a  ");
	v.push_back("happy");
	v.push_back("new");
	v.push_back("year");
	
	countChar(v);
	print(v, charCount);
	cout << "This is the longest word: " << maxv(v, charCount) << endl;
	cout << "This is the shortest word: " << minv(v, charCount) << endl;
	sortWords(v);
	return 0;

}

