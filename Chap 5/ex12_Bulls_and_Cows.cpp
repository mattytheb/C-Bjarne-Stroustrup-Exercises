#include "std_lib_fac.h"
//bulls and cows

int main()

try{
	vector<char>i1(10);
			i1[0] = '2';
			i1[1] = '4';
			i1[2] = '6';
			i1[3] = '8';
			i1[4] = '0';
			i1[5] = '1';
			i1[6] = '3';
			i1[7] = '5';
			i1[8] = '7';
			i1[9] = '9';

			vector<char>i2(10);
			i2[0] = '9';
			i2[1] = '8';
			i2[2] = '7';
			i2[3] = '6';
			i2[4] = '5';
			i2[5] = '4';
			i2[6] = '3';
			i2[7] = '2';
			i2[8] = '1';
			i2[9] = '0';

			vector<char>i3(10);
			i3[0] = '5';
			i3[1] = '6';
			i3[2] = '7';
			i3[3] = '8';
			i3[4] = '9';
			i3[5] = '0';
			i3[6] = '1';
			i3[7] = '2';
			i3[8] = '3';
			i3[9] = '4';
			
			vector<char>i4(10);
			i4[0] = '1';
			i4[1] = '2';
			i4[2] = '3';
			i4[3] = '4';
			i4[4] = '5';
			i4[5] = '6';
			i4[6] = '7';
			i4[7] = '8';
			i4[8] = '9';
			i4[9] = '0';

			int bulls = 0;
			int cows = 0;
			int goes = 0;
			char g_1=' ';
			char g_2=' ';
			char g_3=' ';
			char g_4=' ';
			int game = 0;

			cout << "Enter a number 0-9 to play a game of Bulls and Cows\n";
				cin >> game;

				cout << "What is your guess\n";
				cin >> g_1 >> g_2 >> g_3 >> g_4;
				
				{
					if (g_1 == i1[game])
						bulls += 1;
					if (g_2 == i2[game])
						bulls += 1;
					if (g_3 == i3[game])
						bulls += 1;
					if (g_4 == i4[game])
						bulls += 1;

					if (g_1 == i2[game] || g_1 ==  i3[game] || g_1 == i4[game])
						cows += 1;
					if (g_2 == i1[game] || g_2 == i3[game] || g_2 == i4[game])
						cows += 1;
					if (g_3 == i2[game] || g_3 == i1[game] || g_3 == i4[game])
						cows += 1;
					if (g_4 == i2[game] || g_4 == i3[game] || g_4 == i1[game])
						cows += 1;
					
				}
				cout << "Bulls: " << bulls << " Cows: " << cows << " Goes: " << goes << endl;
				cout << g_1<< g_2 << g_3 << g_4 << endl;
				cout << i1[game]<< i2[game] << i3[game] << i4[game] << endl;
				
}
catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}