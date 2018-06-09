#include "std_lib_fac.h"
int main()   

{
	char ans = ' ';
	int nst = 100;
	int n0 = 50; //50
	int n1 =25; // 25
	int n2 =12; // 12
	int n3 =6; //6
	int n4 =3; //3
	int n5 =2; //1
	int n6 =1; 
	int n7 =1;

	int g0 = 0;
	int g1 = 0;
	int g2 = 0;
	int g3 = 0;
	int g4 = 0;
	int g5 = 0;
	int g6 = 0;
	int g7 = 0;
	
	cout << "Think of a number between 1 and 100." <<endl; //start game

	cout << "Guess 1: Is the number less than:" << nst-n0 <<" (y/n)" << endl; //divide
	cin >> ans;
	if (ans == 'y')
		g1 = n0-n1;			
	else
		g1 = n0+n1;		

	cout << "Guess 2: Is the number less than:" << g1 << " (y/n)" << endl; //g2
	
	cin >> ans;
	if (ans == 'y')
		g2 = g1-n2;			
	else
		g2 = g1+n2;		
	
		
	cout << "Guess 3: Is the number less than:" << g2 << " (y/n)" << endl; //g2

	cin >> ans;
	if (ans == 'y')
		g3 = g2 - n3;
	else
		g3 = g2 + n3;

	cout << "Guess 4: Is the number less than:" << g3 << " (y/n)" << endl; 

	cin >> ans;
	if (ans == 'y')
		g4 = g3 - n4;
	else
		g4 = g3 + n4;

	
	cout << "Guess 5: Is the number less than:" << g4 << " (y/n)" << endl;

	cin >> ans;
	if (ans == 'y')
		g5 = g4 - n5;
	else
		g5 = g4 + n5;

	
	cout << "Guess 6: Is the number less than:" << g5 << " (y/n)" << endl;

	cin >> ans;
	if (ans == 'y')
		g6 = g5 - n6;
	else
		g6 = g5 + n6;

	cout << "Guess 7: Is the number less than:" << g6 << " (y/n)" << endl;

	cin >> ans;
	if (ans == 'y')
		g7 = g6 - 1;
	else
		g7 = g6;

	cout << "The number is: "<<g7;
	return 0;
}