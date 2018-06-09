#include "std_lib_fac.h"
int main()   

	{
		int rice = 1;
		int tot = 0;
		for (int i = 1; i <= 64; ++i) 
		{
			tot += rice;
			cout << i << '\t' << rice <<'\t'<< tot<<endl;
			rice *= 2;
			
		}
		

		
	
	return 0;
}