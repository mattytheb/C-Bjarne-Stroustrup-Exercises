#include"Rational_2.h"

Rational::Rational()
{}

Rational::~Rational()
{}

void Rational::getNum(int n)
{
	num = n;
}

void Rational::getDen(int d)
{
	den = d;
}
void Rational::rNum()
{
	cout << "Rational numbrer is: " << num << "/"<<den << endl;
}

ostream &operator<<(ostream &os, const Rational& rational)
{
	os << "("<<rational.num << "/" << rational.den<<")" << endl;
	return os;
}

bool Rational::operator==(const Rational& a)
{
	return ((num==a.num)&&(den==a.den));
}