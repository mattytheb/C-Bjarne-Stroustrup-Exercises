#include "std_lib_fac.h"
int main()   
{
	
	double value = 0;
	double max = 0;
	double min = 0;
	double conv = 0;
	char unit = ' ';
		 
	cout << "Enter a value followed by a unit; c, m, i or f: \n";
	while (cin >> value >> unit)
		switch (unit)
	{
		
		case 'c':
		{conv = value;}
		break;

		case 'm':
		{conv = 100*value;}
		break;

		case 'i':
		{conv = 2.54*value;}
		break;

		case 'f':
		{conv = 12*2.54*value;}
		break;
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
		