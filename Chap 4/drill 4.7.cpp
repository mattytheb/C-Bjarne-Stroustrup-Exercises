#include "std_lib_fac.h"
int main()   
{
	
	double value = 0;
	double max = 0;
	double min = 0;
	double conv = 0;
	string unit = "";
		 
	cout << "Enter a value followed by a unit; cm, m, in or ft: \n";
	while (cin >> value >> unit)

		{
		if (unit == "cm")
		{conv = value;}
		
		else
		{
		if (unit == "m")
		{conv = 100*value;}
			
		else
		{
		if (unit == "in")
		{conv = 2.54*value;}
				
		else
		{
		if (unit == "ft")
		{conv = 12*2.54*value;}
				}
			}
		}
	
			
		
			if (min == 0 && max == 0)
			{

				min = conv;
				max = conv;

				cout << min << " centimetres" << " is the smallest so far.\n"
					<< max << " centimetres" << " is the largest so far.\n";
			}
			else
			{
				if (conv < min)
				{
					min = conv;
					cout << conv << " centimetres" << " is the smallest so far.\n"
						<< max << " centimetres" << " is still the highest.\n";


				}
				else
				{
					if (conv > max)
					{
						max = conv;
						cout << min << " centimetres" << " is still the smallest.\n"
							<< max << " centimetres" << " is the largest so far.\n";
					}
					else
					{
						cout << min << " centimetres" << " is still the lowest.\n"
							<< max << " centimetres" << " is still the highest.\n";
					}
				}
				
			
			}
			cout << "\nPlease enter another value and unit: ";
			}
			return 0;
		}