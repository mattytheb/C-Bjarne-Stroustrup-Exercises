#include "std_lib_fac.h"
//read and compare names
int main()   
{
	int num_of_words = 0;
		string previous = " ";  //previous word;initialized notn a word
	string current;			//current word
	while (cin >> current){
		++num_of_words;
		if (previous == current)	//check if the word is the same as last
			cout << "word number" << num_of_words << "repeated:"<<current<<'\n';
		previous = current;
	}
	return 0;
}