//Ex 2 chapter 9
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include "Books_2.h"
#include "Patrons.h"

using namespace std;



int main()
try
{
	

	Patrons people;
	Book book1;				//create objects
	book1.oldBooks();		//create data

	int start;
	cout << "Do you want to access the books or patrons?" << endl
		<< "Enter 1 for Books" << endl
		<< "Enter 2 for Patrons" << endl;
	cin >> start;

	if (start = 1)
		people.choice();

	else if (start=2)
		book1.choice();			//create menu*/
	
		
	
	
	
	

	
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