#include<iostream>
using namespace std;

double calculateRetail(double wholesale, double percentage)
{
	double retailPrice;
	retailPrice = wholesale + wholesale * (percentage / 100);
	return retailPrice;

}
int main()
{
	double wholesale, percentage;
	cout << "This program takes wholesale price and Percentage to find Retail Price." << endl;
	cout << "Please enter whole sale price of the product:  ";
	cin >> wholesale;
	cout << "Please enter the Percentage:   ";
	cin >> percentage;
	if (wholesale < 0 && percentage < 0)
	{
		cout << "Please enter a positive value for wholesale and percentage." << endl;
	}
	else
	{
		cout << "The Retail Price = " << calculateRetail(wholesale, percentage) << endl;
	}
	return 0;
}