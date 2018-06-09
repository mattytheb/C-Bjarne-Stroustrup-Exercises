#include "std_lib_fac.h"
int main()   
{
	
	double value = 0;
	double max = 0;
	double min = 0;
	double conv = 0;
	string unit = "";
	double sum = 0;
	int num_of_values = 0;
	cout << "Enter a value followed by a unit; cm, m, in or ft: \n";
	while (cin >> value >> unit){
	++num_of_values;

		
		if (unit == "m")
		{conv = value;}
		
		else
		{
		if (unit == "cm")
		{conv = value/100;}
			
		else
		{
		if (unit == "in")
		{conv = 0.254*value;}
				
		else
		{
		if (unit == "ft")
		{conv = 12*0.254*value;}

		else
		{
		if (unit != "cm" || "m" || "in" || "ft")
		{cout << "This is an illegal unit.\n";}
		
				}
				}
			}
		}
	{sum= conv + sum; }
			
		
			if (min == 0 && max == 0)
			{

				min = conv;
				max = conv;

				cout << min << " metres" << " is the smallest.\n"
					<< max << " metres" << " is the largest.\n";
			}
			else
			{
				if (conv < min)
				{
					min = conv;
					cout << conv << " metres" << " is the smallest.\n"
						<< max << " metres" << " is the highest.\n";


				}
				else
				{
					if (conv > max)
					{
						max = conv;
						cout << min << " metres" << " is the smallest.\n"
							<< max << " metres" << " is the largest.\n";
					}
					else
					{
						cout << min << " metres" << " is the lowest.\n"
							<< max << " metres" << " is the highest.\n";
					}
				}
				
			
			}
			cout << "\nTotal of values= "<< sum <<" metres, "<< "Total number of entreies= "<< num_of_values<< " Please enter another value and unit: ";
			}
	cout << "Sum of values == " << sum << " metres.\n"
		<< "Total number of entries == " << num_of_values << ".\n"
		<< "Smallest value == " << min << " metres.\n"
		<< "Largest value == " << max << " metres.\n";
	return 0;
		}