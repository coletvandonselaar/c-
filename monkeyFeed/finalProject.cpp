// this program is to keep track of how much a monkey eats in each day and the average for the day
// Cole VanDonselaar ctvandonselaar@dmacc.edu 4.28.19

#include "pch.h"
#include <iostream>
using namespace std;

double getAverage(double[], int);
void getMax(double nums[], int size);


int main()
{
	//Declarations
	const int GRAMS_SIZE = 24;
	double grams[GRAMS_SIZE];
	const int MAX = 100;
	const int MIN = 0;
	double userInput = 0;

	//Getting user input and assinging the input to the array
	for (int i = 0; i < GRAMS_SIZE;) {
		cout << "Please enter how many grams, between 1-100, the monkey ate at " << i + 1 << ":00" << endl;
		cin >> userInput;
		grams[i] = userInput;
		if (userInput > MAX || (userInput < 0)) {
			cout << "You entered, " << userInput << " which is not valid, please enter an amount between 1-100." << endl;
		}
		else {
			i++;
		}//end if
	}//end for	

	//Calling functions to get average and getting the time the monkey ate the most
	cout << "The average for the day was: " << getAverage(grams, GRAMS_SIZE) << endl;
	getMax(grams, GRAMS_SIZE);
}//end main

//This function gets the time the monkey ate the most
void getMax(double nums[], int size) {
	double max = 0;
	int time; //using this to keep track of what time the monkey at the most
	
	for (int i = 0; i < size; i++) {
		if (nums[i] > max) {
			max = nums[i];
			time = i + 1;
		}
	}
	cout << "The monkey at the most at " << time << ":00, when they ate " << max << " grams.\n";
}


//This function gets the average the monkeny ate for the day
double getAverage(double nums[], int size) {
	double average = 0;
	double total = 0;
	
	for (int i = 0; i < size; i++) {
		total = nums[i] + total;
	}

	average = total / (double)size;

	return average;
}
