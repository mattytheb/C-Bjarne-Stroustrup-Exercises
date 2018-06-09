

#include<iostream>
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"

using namespace std;

vector<string> name(4);

	
vector<string>copyName;
vector<double> age(4);

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
	for (int i = 0; i < name.size(); i++)			//print vector
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


/*int lookup(string &s)
{
	for (int i = 0; i < copyName.size(); i++)
	{
		if (s == copyName[i]){
			cout << s << " this is the look up" << i << endl;
			return i;
		}

		else (s != copyName[i]);
			return 0;
		
	}
}*/
int main()

{
	name[0] = "Peter";
	name[1] = "James";
	name[2] = "Harry";
	name[3] = "Jon  ";
	//welcome();
	//getName();
	//getAge();
	age[0] = 5;
	age[1] = 2;
	age[2] = 75;
	age[3] = 35;

	copyV();

	Vsort();

	for (int i = 0; i < copyName.size(); ++i)
	{
		cout <<"Sorted Name:"<< name[i] << "   " << "Org Name:"<<copyName[i] << "   " << age[i] << endl;
	}

	// print out original i
	
	for (int m = 0; m < copyName.size(); ++m)
	{
		for (int k = 0; k < copyName.size(); ++k)
		{
			if (name[m] == copyName[k])
				cout << name[m] <<"   " <<copyName[k] <<"  The answer is:"<<age[k] <<endl;
		}
	}

	/*for (int i = 0; i < copyName.size(); ++i)
	{	string s=name[i];
		cout << name[i] << age[(lookup(copyName,s))] << endl;
	}*/

	
	return 0;
		
}
