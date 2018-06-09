#include "std_lib_fac.h"
int main()   

{
	vector<double>temps;
	double temp;
	while (cin >> temp)
		temps.push_back(temp);
	double sum = 0;
	for (int i = 0; i < temps.size(); ++i)sum += temps[i];
	
	cout << "Average temperature: " << sum / temps.size() << endl;
	sort(temps.begin(), temps.end());
	cout << "Median temperature: " << temps[temps.size()/ 2] << endl;
	cout << "Number of values: " << temps.size()<< endl;

	double median = 0.0;
	double num = 0.0;
	num = temps.size();
	median = (num + 1) / 2;
	cout << median << endl;
	return 0;
}