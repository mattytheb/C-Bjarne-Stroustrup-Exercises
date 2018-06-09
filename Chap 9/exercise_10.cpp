//Ex 10 chapter 9
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include "Chrono.h"

using namespace std;
using namespace Chrono;


int main()
try
{


	Date data;
	
	cout<<data;				//create objects
	








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