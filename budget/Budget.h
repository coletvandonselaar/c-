
#ifndef BUDGET_H
#define BUDGET_H

class Budget {
private:
	int rent;
	double water;
	double garbage;

public:
	Budget();
	int getRent() const;
	double getWater() const;
	double getGarbage() const;
	void setRent(int);
	void setWater(double);
	void setGarbage(double);
	double total();

};

//Default constructor
Budget::Budget() {
	rent = 400;
	water = 40.50;
	garbage = 10.75;
}

//Mutators and accessors
int Budget::getRent() const {
	return rent;
}

double Budget::getWater() const {
	return water;
}

double Budget::getGarbage() const{
	return garbage;
}

void Budget::setRent(int r) {
	rent = r;
}

void Budget::setWater(double w) {
	water = w;
}

void Budget::setGarbage(double g) {
	garbage = g;
}
//This function calculates the total money they spent on the bills for the month
double Budget::total() {
	return (double)rent + water + garbage;
}

#endif
