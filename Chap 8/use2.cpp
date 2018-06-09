//Chapter 8 Drill 1
#include "my2.h"
#include<iostream>

using namespace std;
int foo;

int main()	{

	int x = 7;
	int y = 9;

		swap_v(x, y);
		cout << "swap_v, x:"<<x<<"  swap_v, y:"<<y <<endl;

		swap_r(x, y);
		cout << "swap_r, x:" << x << "  swap_r, y:" << y << endl;

		swap_cr(x, y);
		cout << "swap_cr, x:" << x << "  swap_cr, y:" << y << endl;

		swap_v(7,9);
		cout << "swap_v, x:" << x << "  swap_v, y:" << y << endl;

		//swap_r(7,9);
		//cout << "swap_r, x:" << x << "  swap_r, y:" << y << endl;
		
		swap_cr(7, 9);
		cout << "swap_cr, x:" << x << "  swap_cr, y:" << y << endl;
	
	const int cx = 7;
	const int cy = 9;

	swap_v(cx, cy);
	cout << "swap_v, cx:" << cx << "  swap_v, cy:" << cy << endl;

	//swap_r(cx, cy);
	//cout << "swap_r, cx:" << cx << "  swap_r, cy:" << cy << endl;

	swap_cr(cx, cy);
	cout << "swap_cr, cx:" << cx << "  swap_cr, cy:" << cy << endl;

	swap_v(7.7, 9.9);
	cout << "swap_v, cx:" << cx << "  swap_v, cy:" << cy << endl;

	//swap_r(7.7, 9.9);
	//cout << "swap_r, cx:" << cx << "  swap_r, cy:" << cy << endl;
	
	swap_cr(7.7, 9.9);
	cout << "swap_cr, x:" << x << "  swap_cr, y:" << y << endl;

	double dx = 7.7;
	double dy = 9.9;

	swap_v(dx, dy);
	cout << "swap_v, dx:" << dx << "  swap_v, dy:" << dy << endl;

	//swap_r(dx, dy);
	//cout << "swap_r, dx:" << dx << "  swap_r, dy:" << dy << endl;

	swap_cr(dx, dy);
	cout << "swap_cr, dx:" << dx << "  swap_cr, dy:" << dy << endl;

	swap_v(7.7, 9.9);
	cout << "swap_v, dx:" << dx << "  swap_v, dy:" << dy << endl;

	//swap_r(7.7, 9.9);
	//cout << "swap_r, dx:" << dx << "  swap_r, dy:" << dy << endl;

	swap_cr(7.7, 9.9);
	cout << "swap_cr, x:" << x << "  swap_cr, y:" << y << endl;
}

