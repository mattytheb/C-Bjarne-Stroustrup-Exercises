#include "std_lib_fac.h"
int main()   
{
	
	string word = "";
	int max = 0;
	int min = 10;		//a cheat
	string maxi = "";
	string mini = "";
	double conv = 0;
	
	double sum = 0;
	int num_of_words = 0;
	vector<string>words;
	int len = 0;
	cout << "Enter a word: \n";
	while (cin >> word){
		
		len=word.length();
			
		if (word.length()< min)
		{
			min = word.length();
			mini = word;
		}
		if (word.length()> max)
		{
			max = word.length();
			maxi = word;
		}
	
		{words.push_back(word); }
		{sum= conv + sum; }
			
	++num_of_words;
	}
		
			
			cout << "Total number of entreies= "<< num_of_words<< " Please enter another word: ";
			
	
			cout << "Total number of entries == " << num_of_words << ".\n"
				<< "Smallest word == " << mini <<"\n"
				<< "Largest word == " << maxi << "\n";
	sort(words.begin(), words.end());
	
	for (int i = 0; i < words.size(); ++i)
	{
		cout << words[i]<<"  ";
	}
	
	int counter = 1;
	int maxim = 0;
	string mode = words[0];
	for (int j = 0; j < words.size() - 1; ++j)
	{
		if (words[j] == words[j + 1])
		{
			counter++;
			if (counter > maxim)
			{
				maxim = counter;
				mode = words[j];
			}
		}
		else
			counter = 1; // reset counter.
	}
	cout << "The mode is: " << mode << endl;
	
	

	cout << endl;
	return 0;
		}