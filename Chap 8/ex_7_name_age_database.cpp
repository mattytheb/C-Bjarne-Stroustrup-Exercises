

#include<iostream>
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"

using namespace std;

vector<string> name;
vector<string>copyName;
vector<double> age;

void welcome()
{
	cout << "Hello there, welcome to our database:" << endl;
}

void getName() {
	string input;
	cout << "Enter names for the databas, enter done when finished" << endl;
	while (cin >> input && input != "done")
	name.push_back(input);
			}

void getAge() {
	int Ain;
	cout << "Enter the age for each person" << endl;
	for (int i = 0; i < name.size(); i++)
	{
		cout << name[i] << endl;
		cin >> Ain;
		age.push_back(Ain);
	}
	}

void printVec(vector<string> &name, vector<double> &age)
{
	for (int i = 0; i< name.size(); i++)			//print vector
	{
		cout << i  <<"  "  <<"Name" << ": " << name[i]<<"  " << "Age:"<<age[i]<<endl;
	}
}

void Vsort()
{
	sort(name.begin(), name.end());
}

void copyV()
{
	for (int i = 0; i < name.size(); i++){
		string x;
		x = name[i];
		copyName.push_back(x);
	}
}


int lookup(vector<string> &copyName, string &s)
{
	for (int i = 0; i < name.size(); i++)
	{
		if (copyName[i] == s);
			return i;
	}
}
int main()

{
	
	welcome();
	getName();
	getAge();
	copyV();

	Vsort();

	

	for (int i = 0; i < copyName.size(); ++i)
	{	string s=name[i];
		cout << name[i] << age[(lookup(copyName,s))] << endl;
	}

	
	return 0;
		
}
