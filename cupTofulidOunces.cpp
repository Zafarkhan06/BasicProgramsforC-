#include<iostream>
using namespace std;
void showIntro()
{
	cout << "Cup To Fluid Ounces" << endl;
	cout << "This program changes Cup of measurement in Fluid in Ounces." << endl;
	cout << "Your friend Michael runs a catering company. Some of the ingredients \n that his recipes require are measured in cups. When he goes to the \n grocery store to buy those ingredients,however, they are sold only by \n the fluid ounce.He has asked you to write a simple programthat converts cups to fluid ounces. " << endl;

}
double cupsToOunces(double cups)
{
	const double ounces = 1.5;
	double volume;
	volume = cups * ounces;
	return volume;

}
void getCups()
{
	cout << "Please enter the Numbe rof Cups to chnage it into Ounces." << endl;
}

int main()
{
	getCups();
	double cups;
	cin >> cups;
	cout<<"The Changed value is : "<<cupsToOunces(cups)<<endl;

	return 0;
}