#include<iostream>
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include<ctime>
#include <cmath>

using namespace std;

vector<double>price;		//pounds sterling
vector<double>weight;		//kilograms

void index(const vector<double> &weight, const vector<double> &price)
{
	if (weight.size() != price.size()) error("Vectors do not match");
	double total = 0;
	for (int i = 0; i < price.size(); i++)
	{
		cout << "Weight: " << weight[i] << '\t' << "Price: " << price[i] << '\t' << "Product: " << weight[i] * price[i] << endl;
		total += weight[i] * price[i];
	}
	cout << "Total of the index: " << total << endl;
}
int main()

{	
	price.push_back(3.50);
	price.push_back(2.75);
	price.push_back(9.80);
	price.push_back(11.30);
	price.push_back(0.75);
	price.push_back(4.65);
	price.push_back(5.55);
	price.push_back(1.25);
	price.push_back(6.99);
	price.push_back(23.50);
	
	weight.push_back(.1);
	weight.push_back(.2);
	weight.push_back(.3);
	weight.push_back(.4);
	weight.push_back(.5);
	weight.push_back(.6);
	weight.push_back(.7);
	weight.push_back(.8);
	weight.push_back(.9);
	weight.push_back(1.2);


	index(weight, price);

	return 0;

}

