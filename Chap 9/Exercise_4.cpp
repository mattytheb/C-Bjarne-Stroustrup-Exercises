//Ex 2 chapter 9
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include "Books.h"

using namespace std;

int main()
try
{
	//cout << "Do you have a new book? Enter information:" << endl;
	

	Book book1;
	Book book2;
	Book book3;
	
	book1.ISBN1 = 1234;
	book1.ISBN2 = 5678;
	book1.ISBN3 = 90;
	book1.ISBN4 = 'x';
	book1.title = "Me, Myself and I";
	book1.author = "Matty B";
	book1.copyrightDate = 20170125;
	book1.checkedIn = true;

	book2.ISBN1 = 0300;
	book2.ISBN2 = 1010;
	book2.ISBN3 = 5;
	book2.ISBN4 = '8';
	book2.title = "Hamlet";
	book2.author = "William Shakespeare";
	book2.copyrightDate = 20030125;
	book2.checkedIn = true;

	book3.ISBN1 = 0375;
	book3.ISBN2 = 4811;
	book3.ISBN3 = 7;
	book3.ISBN4 = '9';
	book3.title = "What Your Kindergartner needs to know";
	book3.author = "John Holdren";
	book3.copyrightDate = 19960125;
	book3.checkedIn = true;

	book1.printBook();
	book2.printBook();
	book3.printBook();

	book1.choice();



	
	return 0;
}

catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}