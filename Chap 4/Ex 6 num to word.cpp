#include "std_lib_fac.h"
int main()   

{
	vector<string>num(10);
	num[0] = "zero";
	num[1] = "one"; 
	num[2] = "two"; 
	num[3] = "three"; 
	num[4] = "four"; 
	num[5] = "five"; 
	num[6] = "six"; 
	num[7] = "seven"; 
	num[8] = "eight"; 
	num[9] = "nine";
	
	vector<string>num2(10);
	num2[0] = "0";
	num2[1] = "1";
	num2[2] = "2";
	num2[3] = "3";
	num2[4] = "4";
	num2[5] = "5";
	num2[6] = "6";
	num2[7] = "7";
	num2[8] = "8";
	num2[9] = "9";

	string x = "";
	cout << "Enter a number: " << endl;
	while (cin >> x) {

		for (int i = 0; i < num.size(); ++i) 
		{
			if (num[i] == x) 
			{
				cout << num2[i] << endl;
			}
			if (num2[i] == x) {
				cout << num[i]<< endl;
			}
		}
	}
		return 0;
}