//Ex 2 chapter 9
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include "Name_pairs.h"

using namespace std;

int main()
try
{

	Name_pairs data;
	
	data.welcome();
	data.read_names();
	data.read_ages();
	data.choice();
	data.print();
	
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