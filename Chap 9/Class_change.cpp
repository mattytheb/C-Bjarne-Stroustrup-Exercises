#include<iostream>
#include<string>

#include "change.h"

using namespace std;

int main(){

	string name;
	double height;
	double weight;

	cout << "Enter your name" << endl;
	cin >> name;
	cout << "Enter your height in centimetres" << endl;
	cin >> height;
	cout << "Enter your weight in kilograms" << endl;
	cin >> weight;

	BMI Student_1(name, height, weight);

	cout << endl << "Name: " << Student_1.getName() << endl
		<< "Height:" << Student_1.getHeight() << endl
		<< "Weight:" << Student_1.getWeight() << endl
		<< "BMI:" << Student_1.calculateBMI() << endl;
	return 0;
}