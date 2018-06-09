#include "std_lib_fac.h"
int main()   
{
	double value = 0;
	double max = 0;
	double min = 0;
			 
	cout << "Enter a value: \n";
	while (cin >> value )
		{
			if (min == 0 && max == 0)
			{

				min = value;
				max = value;

				cout << min << " is the smallest.\n"
					<< max << " is the largest.\n";
			}
			else
			{
				if (value < min)
				{
					min = value;
					cout << value << " is the smallest.\n"
						<< max <<  " is the largest.\n";
									}
				else
				{
					if (value > max)
					{
						max = value;
						cout << min << " is the smallest.\n"
							<< max << " is the largest.\n";
					}
			else
					{
						cout << min <<  " is the lowest.\n"
							<< max <<  " is the highest.\n";
					}
			}
			}
			cout << "Enter another value: ";
			}
			return 0;
		}