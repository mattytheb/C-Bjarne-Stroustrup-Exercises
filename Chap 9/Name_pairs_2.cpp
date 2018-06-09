// function defintions

#include "Name_pairs_2.h"
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

void Name_pairs::copyV()
{
	for (int i = 0; i < name.size(); i++){
		string x;
		x = name[i];
		copyName.push_back(x);
	}
}

int Name_pairs::lookup(int i)
{

	for (int k = 0; k < copyName.size(); ++k)
	{
		if (copyName[i]==name[k]  )
			return k;
	}

}

void Name_pairs::print()
{
	int max = name.size();
	for (unsigned int i = 0; i < max; i++)
		cout << "Name: " << copyName[i] << '\t' << "Age: " << age[lookup(i)] << endl;
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
	sort(copyName.begin(), copyName.end());
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







