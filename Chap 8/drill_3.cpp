//drill 3 chapter 8
#include<iostream>

using namespace std;

namespace X{
	int var;
	void print(){
		cout << var << endl;
	}
}

namespace Y{
	int var;
	void print(){
		cout << var << endl;
	}
}

namespace Z{
	int var;
	void print(){
		cout << var << endl;
	}
}

int main()
{
	X::var = 7;
	X::print();					//print X's

	using namespace Y;
	var = 9;
	print();					//print Y's

	{
		using Z::var;
		using Z::print;			//print Z's
		var = 11;
		print();
	}

	print();					//still on Y's
	X::print();					//back to x


}