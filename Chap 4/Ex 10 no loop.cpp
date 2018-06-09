#include "std_lib_fac.h"
int main()   

	{
	vector<char>comp(20);
	comp[0] = 'p'; 
	comp[1] = 'r'; 
	comp[2] = 'p'; 
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
	int i = 0;
	char c = ' ';
	string hum1 = "";
	string com1 = "";
	int sh = 0;
	int sc = 0;
	cout << "Let's play a game, Rock, Paper, Scissors. To start first enter a number, from 1 to 19\n";
	cin >> start;
	
	cout << "Enter r for Rock, p for Paper or s for scissors." << endl;
	while (cin >> human){
			
		start = start + 1;
		c = comp[start];
		{if (human == 'r')
			hum1 = "Rock";
		else if (human == 's')
			hum1 = "Scissors";
		else if (human == 'p')
			hum1 = "Paper"; }

		{if (comp[start] == 'r')
			com1 = "Rock";
		else if (comp[start] == 's')
			com1 = "Scissors";
		else if (comp[start] == 'p')
			com1 = "Paper"; }

		cout << "You entered: " <<hum1 << '\t' << "The computer entered: " << com1<< "\n";
		
		switch (c){

		case 'r':		//computer
			switch (human){
			case'r': //human
				cout << "It's a draw.Current Score: Human: " << sh << " Computer: " << sc << ".\n";
				break;
			case's': //human
				sc = sc+1 ;
				cout << "The human loses! Current Score: Human: " <<sh<< " Computer: "<< sc <<".\n";
				break;
			case'p': //human
				sh = sh+1;
				cout << "The human Wins!! Current Score: Human: " << sh << " Computer: " << sc << ".\n";
				break;
			}break;
			
		case 'p': //computer
			switch (human){
			case'r'://human
				sc = sc+1;
				cout << "The human loses! Current Score: Human: " << sh << " Computer: " << sc << ".\n";
				break;
			case's'://human
				sh = sh+1;
				cout << "The human Wins!! Current Score: Human: " << sh << " Computer: " << sc << ".\n";
				break;
			case'p'://human
				cout << "It's a draw. Current Score: Human: " << sh << " Computer: " << sc << ".\n";
				break;
			}break;
		case 's'://computer
			switch (human){
			case'r'://human
				sh = sh+1;
				cout << "The human wins!! Current Score: Human: " << sh << " Computer: " << sc << ".\n";
				break;
			case's'://human
				cout << "It's a draw. Current Score: Human: " << sh << " Computer: " << sc << ".\n";
				break;
			case'p'://human
				sc = sc+1;
				cout << "The human loses! Current Score: Human: " << sh << " Computer: " << sc << ".\n";
				break;
			}break;
		}
		
		cout << "Enter r for Rock, p for Paper or s for scissors." << endl;

	}
	
		return 0;
}