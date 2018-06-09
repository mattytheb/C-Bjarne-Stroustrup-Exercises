#include<iostream>
#include"C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"
#include<ctime>
#include <cmath>

using namespace std;

vector<double>price;		//pounds sterling
vector<double>weight;		//kilograms


double maxv(const vector<double> &price)
{
	double max = 0;
	for (int i = 0; i < price.size();i++)
	if (price[i]>max)
		max = price[i];
	return max;
}

double minv(const vector<double> &price)
{
	double min=100;
	for (int i = 0; i < price.size(); i++)
	if (price[i]<min)
		min = price[i];
	return min;
}

double mean(const vector<double> &price)
{
	double total = 0;
	for (int i = 0; i < price.size(); i++)
		total += price[i];
	double mean = total / price.size();
	return mean;
}

double median(const vector<double> &price)
{
	vector<double>copyPrice;
	for (int i = 0; i < price.size(); i++)
	{
		double x;
		x = price[i];
		copyPrice.push_back(x);
	}
	sort(copyPrice.begin(), copyPrice.end());
	double median = copyPrice[copyPrice.size() / 2];
	
	return median;
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
	
		

	cout << "The max price is: " << maxv(price) << endl;
	cout << "The min price is: " << minv(price) << endl;
	cout << "The mean price is: " << mean(price) << endl;
	cout << "The median price is: " << median(price) << endl;
	return 0;

}

