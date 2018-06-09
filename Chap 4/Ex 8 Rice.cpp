#include "std_lib_fac.h"
int main()   

	{
		double rice = 1;
		double tot = 0;
		for (int i = 1; i <= 64; ++i) 
		{
			tot += rice;
			//cout << i << '\t' << rice <<'\t'<< tot<<endl;
			rice *= 2;
			if (tot > 1000 && tot < 2000)
			{
				cout << i << '\t'<< rice/2 << '\t'<<tot << endl;
			}

			if (tot > 1000000 && tot < 2000000)
			{
				cout << i << '\t' << rice / 2 << '\t' << tot << endl;
			}
			
			if (tot > 1000000000 && tot < 2000000000)
			{
				cout << i << '\t' << rice / 2 << '\t' << tot << endl;
			}
		}
		

		
	
	return 0;
}