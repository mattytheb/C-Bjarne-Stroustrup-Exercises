#include "std_lib_fac.h"
int main()   

{
	double value;
	double lowest = 0;
	double highest = 0;
	cout << "Please enter a number: ";
	while (cin >> value)
	{
		if (lowest == 0 && highest == 0)
		{
			lowest = value;
			highest = value;
			cout << lowest << " is the smallest so far.\n"
				<< highest << " is the largest so far.\n";
		}
		else
		{
			if (value < lowest)
			{
				lowest = value;
				cout << value << " is the smallest so far.\n"
					<< highest << " is still the highest.\n";
			}
			else
			{
				if (value > highest)
				{
					highest = value;
					cout << lowest << " is still the lowest.\n"
						<< highest << " is the largest so far.\n";
				}
				else
				{
					cout << lowest << " is still the lowest.\n"
						<< highest << " is still the highest.\n";
				}
			}
		}
		cout << "\nPlease enter another number: ";
	}
	return 0;
}