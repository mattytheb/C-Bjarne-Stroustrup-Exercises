//header file== function declarations

#include<iostream>
#include<string>

using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI 
{
public:	

	BMI();						//default constructor

	BMI(string);	//overload construtors

	~BMI();						//destructor

								//Accessor functions

	string getName() const;
	double getHeight()const;
	double getWeight() const;

	double calculateBMI() const;

private:					//member variables
	string newName;
	double newHeight;
	double newWeight;
};

#endif