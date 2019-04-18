/*
budgetDriver.cpp : This program imports Budget.h to use the default values for the first object, set object by the programmer and the
third being set by the user. It then prints out each total then calls the total method and prints the total
 */
//Cole VanDonselaar ctvandonselaar@dmacc.edu 4.18.19
#include "pch.h"
#include <iostream>
#include "Budget.h"
using namespace std;

int main()
{
	//Declarations
	int userRent;
	double userWater, userGarbage;
	//Object declarations
	Budget budget1;
	Budget budget2;
	Budget budget3;

	//Creating values for budget 2
	budget2.setRent(275);
	budget2.setWater(20.5);
	budget2.setGarbage(12.5);

	//Getting input from the user for budget 3
	cout << "How much did you spend on rent?" << endl;
	cin >> userRent;
	budget3.setRent(userRent);
	cout << "How much did you spent on water?" << endl;
	cin >> userWater;
	budget3.setWater(userWater);
	cout << "How much did you spend on garbage?" << endl;
	cin >> userGarbage;
	budget3.setGarbage(userGarbage);

	//Printing out all the objects plus the totals
	cout << "Rent was $" << budget1.getRent() << ", water was $" << budget1.getWater() << ", and garbage was $" << budget1.getGarbage() <<
		". The total was $" << budget1.total() << " for budget 1." << endl;
	cout << "Rent was $" << budget2.getRent() << ", water was $" << budget2.getWater() << ", and garbage was $" << budget2.getGarbage() <<
		". The total was $" << budget2.total() << " for budget 2." << endl;
	cout << "Rent was $" << budget3.getRent() << ", water was $" << budget3.getWater() << ", and garbage was $" << budget3.getGarbage() <<
		". The total was $" << budget3.total() << " for budget 3." << endl;
}
