#include "std_lib_fac.h"
int main()
{
	//Test score database
		
	string name = "";
	double score = 0;
	vector<string>names;
	vector<double>scores;
	
	int count = 0;
	bool check=false;

	cout << "Enter the name and test score:  \n";
	while (cin >> name >> score && name != "No more")
	{
		for (int j = 0; j < names.size(); ++j)
		{
			if (names[j] == name)
			{
				check = true;
			}
			else if (names[j] != name)
			{
				check = false;
			}
		}
			if (check == false)
			{

				names.push_back(name);
				scores.push_back(score);
				++count;
			}
			else
			{
				cout << "name already entered \n";
			}
		}
	
	for (int i = 0; i<names.size(); ++i)
	{
		cout << names[i] << '\t' << scores[i] << '\n';
	}

	return 0;
		}