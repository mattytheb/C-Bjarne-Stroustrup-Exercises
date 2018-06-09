#include "Patrons.h"
#include "Books_2.h"

using namespace std;

Patrons::Patrons()
{
	name.push_back("Jon");
	accNo.push_back(00001);
	fee.push_back(0.0);

	name.push_back("Peter");
	accNo.push_back(00002);
	fee.push_back(0.0);

	name.push_back("James");
	accNo.push_back(00003);
	fee.push_back(0.0);
}


Patrons::~Patrons()
{
}

void Patrons::choice()
{
	int inp;
	cout  << endl
		<< endl<< "Our Patrons."
		<< "Choose and option:" << endl
		<< endl
		<< "1. " << "See Patrons." << endl
		<< "2. " << "Enter a new patron." << endl
		<< "3. " << "Search for a patron." << endl
		<< "4. " << "Add a fee." << endl
		<< "5. " << "Pay fee." << endl
		<< "6. " << "People who owe money." << endl
		<< "7. " << "Quit." << endl
		<< endl
		<< "Enter number:";

	cin >> inp;

	switch (inp)
	{
	case 1:
		printPatrons();
		break;
	case 2:
		newPatron();
		break;
	case 3:
		search();
		break;
	case 4:
		addFee();
		break;
	case 5:
		payFee();
		break;
	case 6:
		cout << "Bye, Bye" << endl;
		exit;
		break;
	default:
		cout << "Error, try again." << endl;
		choice();
		break;
	}
}
void Patrons::printPatrons()
{
	int max = name.size();
	for (int i = 0; i < max; ++i)

	{
		cout << endl
			<< "This is person: " << i << endl
			<< "Name: " << name[i] << endl
			<< "Account Number: " << accNo[i] << endl
			<< "Fees Owed: " << fee[i] << endl;
	}
	choice();
}
void Patrons::newPatron()
{
	string NP;
	cout << "Enter the name of the person:" << endl;
	cin >> NP;

	bool b_exists = false;					//stolen from github bewuethr
	int b_idx = 0;
	for (int i = 0; i<name.size(); ++i) {
		if (name[i] == NP) {
			b_exists = true;
			b_idx = i;
			cout << "Person already exists." << endl;
			choice();
			break;					// no need to look any further
		}
	}
	if (!b_exists)
	{
		cout << "Continue with adding new person: " << NP << endl;
		addPerson(NP);
	}
}

void Patrons::addPerson(string NP)
{
	name.push_back(NP);
	
	accNo.push_back(accNo.size() + 1);
	fee.push_back(0.0);
	

	printPatrons();
	cout << endl
		<< endl;
	choice();
}

int Patrons::lookup(string s)
{
	bool b_exists = false;					//stolen from github bewuethr
	int b_idx = 0;
	for (int i = 0; i<name.size(); ++i) {
		if (name[i] == s) {
			b_exists = true;
			b_idx = i;
			return i;
			break;					// no need to look any further
		}
	}
	if (!b_exists)
	{
		cout << "Error, this person is not found. Please try again." << endl;
		choice();
	}
}

void Patrons::search()
{
	string s;
	cout << "Enter the name: " << endl;
	cin >> s;
	int b = lookup(s);
	cout << "The person you were loooking for is: " << endl
		<< "Name: " << name[b] << endl
		<< "The account number is: " << accNo[b] << endl
		<< "Fees: " << fee[b] << endl;
		
	choice();
}

void Patrons::addFee()
{
	string s;
	int nfee;
	cout << "Enter the name: " << endl;
	cin >> s;
	int b = lookup(s);
	cout << "The person you were loooking for is: " << endl
		<< "Name: " << name[b] << endl
		<< "The account number is: " << accNo[b] << endl
		<< "Fees: " << fee[b] << endl;
	cout << endl
		<< "How much to add?" << endl;
	cin >> nfee;
	int tfee = nfee + fee[b];
	fee[b] = tfee;

	cout<<endl
		<< "Name: " << name[b] << endl
		<< "The account number is: " << accNo[b] << endl
		<< "Fees: " << fee[b] << endl;

	choice();
}
void Patrons::payFee()
{ 
	string s;
	int nfee;
	cout << "Enter the name: " << endl;
	cin >> s;
	int b = lookup(s);
	cout << "The person you were loooking for is: " << endl
		<< "Name: " << name[b] << endl
		<< "The account number is: " << accNo[b] << endl
		<< "Fees: " << fee[b] << endl;
	cout << endl
		<< "How much have they paid?" << endl;
	cin >> nfee;
	int tfee =  fee[b]-nfee;
	fee[b] = tfee;

	cout << endl
		<< "Name: " << name[b] << endl
		<< "The account number is: " << accNo[b] << endl
		<< "Fees: " << fee[b] << endl;

	choice();
}


