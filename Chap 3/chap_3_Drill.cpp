#include "std_lib_fac.h"
int main()    //hjhjhjk
{
	cout << "Enter your name:\n";
	string writers_name;   //this string is yiour name
	cin >> writers_name;  //accepts this your name
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;   //this string is yiour name
	cin >> first_name;  //accepts this your name
	
	cout << "Enter the age of the person you want to write to:\n";
	int age;   //this is their age
	cin >> age;  //accepts this as age
	if (age <= 0)
		cout << "you are kidding\n";
	if (age >= 110)
		cout << "you are kidding\n";
	cout << "Enter the name of another friend:\n";
		string friend_name;
		cin >> friend_name;
		
		
			cout << "Enter m if your friend is male or f if female:\n";
			char friend_sex = 0;
			cin >> friend_sex;

	cout << "Dear " << first_name << ",\n";
	cout << "          How are you? I'm doing well. Been very hot today. But my c++ course is going well:\n";
	cout << "I hear you just had a birthday and you are " << age << " years old\n";
	if (age <= 12)
		cout << "Next year you will be " <<age +1<<"\n";
	if (age >= 67)
		cout << "Hope you're enjoying retirment!\n";
	if (age == 17)
		cout << "Next year you will be able to vote!\n";
	
	cout << "Have you seen " << friend_name << " lately?\n";
	if (friend_sex==109)
	cout << "If you see "<<friend_name<< " tell him to call me, please.\n";
	if (friend_sex==102)
		cout << "If you see " << friend_name << " tell her to call me, please.\n";
	cout << "Yours Sincerly.\n";
	cout << " \n";
	cout << " \n";
	cout << "       " << writers_name << "\n";

	return 0;
}