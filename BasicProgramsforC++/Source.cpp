#include<iostream>
using namespace std;
void menu(void)
{
	cout << "Health Club Membership Menu" << endl;
	cout << "Standard Adult Membership=1" << endl;
	cout << "Child Membership=2" << endl;
	cout << "Senior Citizen Membership=3" << endl;
	cout << "Quit the Menu=4" << endl;
}
int member(int a, int b)
{
	int c = a * b;
	return c;
}
int main()
{
	int months, totalCharges=0, choice=0;
	const int adult = 40, child = 20, senior = 60;
	do
	{
		menu();
		cout << "Please Enter your Choice: ";
		cin >> choice;
		if (choice == 4)
		{
			cout << "Quit Menu has been choosen." << endl;
		}
		else
		{
			cout << "Enter the Month." << endl;
			cin >> months;
			switch (choice)
			{
			case 1:
				//member(months, adult);
				cout << "The total value is: " << member(months, adult) << endl;
				break;
			case 2:
				cout << "The total value is: " << member(months, child) << endl;
				break;
			case 3:
				cout<<"The total value is: "<<member(months, senior)<<endl;
				break;

			default:
				break;
			}
		}
	} while (choice!=4);
	return 0;
}