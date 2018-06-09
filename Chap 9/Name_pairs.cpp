// function defintions

#include "Name_pairs.h"
using namespace std;

void Name_pairs::welcome()
{
	cout << "Hello there" << endl;
}

void Name_pairs::read_names()
{
	string input;
	cout << "Enter names, type end to finsih." << endl;
	while (cin >> input && input != "end")
		name.push_back(input);
}

void Name_pairs::print()
{
	int max = name.size();
	for (unsigned int i = 0; i < max; i++)
		cout << "Name: "<<name[i]<<'\t' <<"Age: "<< age[i]<< endl;
}

void Name_pairs::read_ages()
{
	cout << "Please enter ages:" << endl;
	double input;
	int max = name.size();
	unsigned int i = 0;
	while (i < max)
	{
		cout << name[i] <<":"<< '\t';
		cin >> input;
		age.push_back(input);
		++i;
	}
}

void Name_pairs::Vsort()
{
	sort(name.begin(), name.end());
}

void Name_pairs::choice()
{
	cout << "How would you like to sort your data?" << endl
		<< "Enter A for alphabetically and B for as entered." << endl;
	char input;
	cin >> input;
	
	if (input == 'a' || input == 'A')
		Vsort();
		//cout << "You entered A" << endl;
			
	else if (input == 'b' || input == 'B')
		cout << "You entered B" << endl;

	else
		cout << "error enter A or B" << endl;
}







