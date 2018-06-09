// function defintions

#include "change.h"

BMI::BMI()
{
	newHeight = 0;
	newWeight = 0.0;
}

BMI::BMI(string name, double height, double weight)
{
	newName = name;
	newHeight = height;
	newWeight = weight;
}

BMI::~BMI()
{

}

string BMI::getName() const
{
	return newName;
}

double BMI::getHeight() const
{
	return newHeight;
}

double BMI::getWeight()const
{
	return newWeight;
}

double BMI::calculateBMI() const
{
	double h = newHeight/100;
	return (newWeight / (h*h));
}