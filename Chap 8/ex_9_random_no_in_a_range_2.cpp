#include<iostream>
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include<ctime>
#include <cmath>

using namespace std;

int minInt()
{
	int n;
	cout << "Enter minimum int" << endl;
	cin >> n;
	return n;
}
int maxInt()
{
	int m;
	cout << "Enter maximum int" << endl;
	cin >> m;
	return m;
}

int randInt(int max)
{
	int rnd= (clock() * 389681)%max;
	return rnd;
}

int rand_in_range(int max, int min, int rnd)
{
	
	
	int g = min + rnd% ((max-min)+1);
	return g;
}

int main()

{	
	int min = minInt();
	int max= maxInt();
	
	cout << "This is K: "<<max << endl;
	cout << "This is J: " << min << endl;

	for (int i = 0; i < 50; i++)
		//int rnd = randInt(max);
	cout << "This is something: " << rand_in_range(max, min, randInt(max)) << endl;

	return 0;

}



/*
int X_x = 0;

int maxInt() 
	{
	int m;
	cout << "Enter maximum int" << endl;
	cin >> m;
	return m;
	}



void randint(int &m)
{
	X_x = (36961 * 32) % m;
}

int main()
	
{
	int m = maxInt();
	randint(m);
	cout << X_x << endl;

	
	
	
	return 0;
		
}
*/