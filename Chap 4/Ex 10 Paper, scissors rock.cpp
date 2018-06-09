#include "std_lib_fac.h"
int main()   

	{
	vector<char>comp(20);
	comp[0] = 'p'; 
	comp[1] = 's'; 
	comp[2] = 's'; 
	comp[3] = 'r'; 
	comp[4] = 'p'; 
	comp[5] = 's'; 
	comp[6] = 'p'; 
	comp[7] = 's'; 
	comp[8] = 'r'; 
	comp[9] = 'r'; 
	comp[10] = 'p'; 
	comp[11] = 'p'; 
	comp[12] = 's'; 
	comp[13] = 'r'; 
	comp[14] = 'p'; 
	comp[15] = 's'; 
	comp[16] = 'r'; 
	comp[17] = 'r'; 
	comp[18] = 'p';
	comp[19] = 's';

	char human = ' ';
	int start = 0;
	cout << "Enter a number to begin with, from 1 to 19\n";
	cin >> start;

	cout << "Enter r for Rock, p for Paper or s for scissors." << endl;
	while (cin >> human){

		for (int i = start; i < comp.size(); ++i)

		//cout << "You entered: " << human << '\t' << "The computer entered: " << comp[i] << "\n";
		//cout << "Enter r for Rock, p for Paper or s for scissors." << endl;
	
	}
	
		return 0;
}