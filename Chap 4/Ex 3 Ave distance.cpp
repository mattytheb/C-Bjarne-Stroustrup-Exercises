#include "std_lib_fac.h"
int main()   

{
	vector<double>distance;
	double dis;
	while (cin >> dis)
		distance.push_back(dis);
	double sum = 0;
	
	for (int i = 0; i < distance.size(); ++i)sum += distance[i];
	

	cout << "Total distance: " << sum << endl;
	

	sort(distance.begin(), distance.end());
	
	cout << "The shortest disance is: " << distance[0] << endl;
	cout << "The longest disance is: " << distance[distance.size()-1] << endl;
	cout << "The mean distance is: " << sum / distance.size() << endl;

	/*cout << "Average distance: " << sum / distance.size() << endl;
	
	cout << "Median distance: " << distance[distance.size()/ 2] << endl;
	cout << "Number of values: " << distance.size()<< endl;

	double median = 0.0;
	double num = 0.0;
	num = distance.size();
	median = (num + 1) / 2;
	cout << median << endl;*/
	return 0;
}