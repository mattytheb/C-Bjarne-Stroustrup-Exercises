#include "std_lib_fac.h"
//bulls and cows

int main()

try{
	

	int bulls = 0;
	int cows = 0;
	int goes = 1;
	char g_1 = ' ';
	char g_2 = ' ';
	char g_3 = ' ';
	char g_4 = ' ';
	int game = 0;
	

	cout << "Enter a number 0-9 to play a game of Bulls and Cows\n";
	cin >> game;
	srand(game);
	int a = randint(9);
	int b = randint(9);
	int c = randint(9);
	int d = randint(9);
	cout << a << b << c << d << endl;
	char i1 = '0' + a;
	char i2 = '0' + b;
	char i3 = '0' + c;
	char i4 = '0' + d;

cout << i1 << i2 << i3 << i4 << endl;
	cout << "What is your guess\n";
	while (cin >> g_1 >> g_2 >> g_3 >> g_4)
	
	

	if (g_1 == i1 && g_2 == i2 && g_3 == i3 && g_4 == i4)
	{

		cout << "You have won! Well done!" << endl;
		cout << i1 << i2 << i3 << i4 << " Is the right answer!!"<<endl;
		cout << "It took you: " << goes <<" goes."<< endl;
		cout << "Play again: Enter a new number for a new game 0-9" << endl;
		int a = randint(9);
		int b = randint(9);
		int c = randint(9);
		int d = randint(9);

		char i1 = '0' + a;
		char i2 = '0' + b;
		char i3 = '0' + c;
		char i4 = '0' + d;
		goes = 1;
		cin >> game;
		cout << "What is your guess this time?\n" << endl;
	}
	
	else 
	{
		bulls = 0;
		cows = 0;



		if (g_1 == i1)
			bulls += 1;
		else if (g_2!=i2 && g_1 == i2 ||  g_3!= i3 && g_1 == i3 || g_4!=i4 && g_1 == i4)
			cows += 1;

		if (g_2 == i2)
			bulls += 1;
		else if (g_1!=i1&& g_2 == i1 || g_3!=i3 && g_2 == i3 || g_4!=i4 && g_2 == i4) 
			cows += 1;

	 if (g_3 == i3)
			bulls += 1;
		else if (g_2!=i2 && g_3 == i2 || g_1!=i1 && g_3 == i1 ||  g_4!=i4 && g_3 == i4) 
			cows += 1;

		 if (g_4 == i4)
			bulls += 1;
		else if (g_2!=i2 && g_4 == i2 || g_3!=i3 && g_4 == i3 || g_1!=i1 && g_4 == i1) 
			cows += 1;

		
		

		cout << "Bulls: " << bulls << " Cows: " << cows << " Goes: " << goes << endl;
		
		cout << "What is your guess\n" << endl;

		goes++;
	}
	

	
	
		






}
catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}