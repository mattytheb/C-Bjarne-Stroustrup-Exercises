// function defintions

#include "Books_2.h"

using namespace std;
	
	

void Book::oldBooks()
{
	pGen.push_back("fiction");
	pGen.push_back("nonfiction");
	pGen.push_back("periodical");
	pGen.push_back("biography");
	pGen.push_back("children");
	
	ISBN1.push_back(1234);
	ISBN2.push_back(5678);
	ISBN3.push_back(90);
	ISBN4.push_back('x');
	title.push_back("Me, Myself and I");
	author.push_back("Matty B");
	copyrightDate.push_back(20170125);
	checkedIn.push_back("Yes");
	Gen.push_back(biography);

	ISBN1.push_back(0300);
	ISBN2.push_back(1010);
	ISBN3.push_back(5);
	ISBN4.push_back('8');
	title.push_back("Hamlet");
	author.push_back("William Shakespeare");
	copyrightDate.push_back(20030125);
	checkedIn.push_back("Yes");
	Gen.push_back(fiction);

	ISBN1.push_back(0375);
	ISBN2.push_back(4811);
	ISBN3.push_back(7);
	ISBN4.push_back('9');
	title.push_back("What Your Kindergartner needs to know");
	author.push_back("John Holdren");
	copyrightDate.push_back(19960125);
	checkedIn.push_back("Yes");
	Gen.push_back(children);
}

void Book::printBook()
{
	int max = ISBN1.size();
	for (int i = 0; i < max; ++i)

	{
		cout << endl
			<< "This is book number: " << i << endl
			<< "Title: " << title[i] << endl
			<< "Author: " << author[i] << endl
			<< "Genre: " << pGen[Gen[i]]<<endl
			<< "ISBN: " << ISBN1[i] << "-" << ISBN2[i] << "-" << ISBN3[i] << "-" << ISBN4[i] << endl
			<< "Copy Right Date: " << copyrightDate[i] << endl
			<< "In the library? " << checkedIn[i] << endl;
	}
	choice();
}

void Book::addNew()
{
	string NB;
	cout<<"Enter the title of the book:" << endl; 
	cin >> NB;

	bool b_exists = false;					//stolen from github bewuethr
	int b_idx = 0;
	for (int i = 0; i<title.size(); ++i) {
		if (title[i] == NB) {
			b_exists = true;
			b_idx = i;
			cout << "Book already exists." << endl;
			choice();
			break;					// no need to look any further
		}
	}
	if (!b_exists)
	{
		cout << "Continue with adding your book: " << NB << endl;
		addBook(NB);
	}
}

void Book::addBook(string NB)
{
	title.push_back(NB);
	string nA;
	int nISBN1, nISBN2, nISBN3;
	char nISBN4;
	int nDate;
	string nCI;
	string nG;

	cout << "Who is the author of: "<<NB << endl;
	cin >> nA;
		author.push_back(nA);
	//cout << "What the genre of this book: " << NB << endl;
		//cin >> nG;
		//Gen.push_back(Book::Genre::nG);

	cout << "What is the ISBN number of :  " << NB << endl;
	cin >> nISBN1 >> nISBN2 >> nISBN3 >> nISBN4;
		ISBN1.push_back(nISBN1);
		ISBN2.push_back(nISBN2);
		ISBN3.push_back(nISBN3);
		ISBN4.push_back(nISBN4);
	cout << "What is the copyright date " << NB<< endl;
	cin >> nDate;
		copyrightDate.push_back(nDate);

		checkedIn.push_back("Yes");

	printBook();
	choice();
}
int Book::lookup(string s)
{
	bool b_exists = false;					//stolen from github bewuethr
	int b_idx = 0;
	for (int i = 0; i<title.size(); ++i) {
		if (title[i] == s) {
			b_exists = true;
			b_idx = i;
			return i;
			break;					// no need to look any further
		}
	}
	if (!b_exists)
	{
		cout << "Error, this book is not found. Please try again." << endl;
		choice();
	}
	
}

void Book::search()
{
	string s;
	cout << "Enter the title: " << endl; 
	cin >> s;
	int b = lookup(s);
	cout << "The book you were loooking for is: " <<endl
		<< "This is book number: " << b << endl
		<< "Title: " << title[b] << endl
		<< "Author: " << author[b] << endl
		<< "ISBN: " << ISBN1[b] << "-" << ISBN2[b] << "-" << ISBN3[b] << "-" << ISBN4[b] << endl
		<< "Copy Right Date: " << copyrightDate[b] << endl
		<< "In the library? " << checkedIn[b] << endl;
	choice();
}

void Book::checkOut()
{
	string s;
	cout << "Enter the title: " << endl;
	cin >> s;
	int b = lookup(s);
	checkedIn[b] = "No";
	cout << s<<" Has now been checked out, enjoy your read."<<endl;
	
	choice();
}

void Book::checkIn()
{
	string s;
	cout << "Enter the title: " << endl;
	cin >> s;
	int b = lookup(s);
	checkedIn[b] = "Yes";
	cout << s << " Thank you, enjoy another book." << endl;
	
	choice();
}
void Book::choice()
{
	int inp;
	cout << "Welcome to our library." << endl
		<< endl
		<< "Choose and option:" << endl
		<< endl
		<< "1. " << "See our library catalogue." << endl
		<< "2. " << "Enter a new book." << endl
		<< "3. " << "Search for a book." << endl
		<< "4. " << "Check a book out." << endl
		<< "5. " << "Return a book." << endl
		<< "6. " << "Quit." << endl
		<< endl
		<< "Enter number:";
		
	cin >> inp;

	switch (inp)
	{
		case 1:
			printBook();
			break;
		case 2:
			addNew();
			break;
		case 3:
			search();
			break;
		case 4:
			checkOut();
			break;
		case 5:
			checkIn();
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





