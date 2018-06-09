#include "C:\Users\Study\Desktop\Viz Stud\lib_files\std_lib_fac.h"

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
public:
	Rational();
	~Rational();
	
	void getNum(int n);
	void getDen(int d);

	void rNum();
	bool operator==(const Rational& a);
	

private:
	int num;  // numerator
	int den;  // denominator

	friend ostream &operator<<(ostream &os, const Rational& rational);
};



#endif RATIONAL_H