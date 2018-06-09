#include "std_lib_fac.h"
//read and compare names
int main()   
{
	string previous = " ";  //previous word;initialized notn a word
	string current;			//current word
	while (cin >> current){
		if (previous == current)	//check if the word is the same as last
			cout << "repeated word:" << current << '\n';
		previous = current;
	}
	return 0;
}