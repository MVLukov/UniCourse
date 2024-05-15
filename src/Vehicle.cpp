#include "Vehicle.h"
#include <iostream>
#include <string.h>

#define BUFFER_LENGTH 100

using std::cin;
using std::cout;
using std::endl;

Vehicle::Vehicle()
{
	char *tempMake = new char[BUFFER_LENGTH];
	char *tempModel = new char[BUFFER_LENGTH];

	cout << "Enter vehicle's year: ";
	cin >> year;

	cout << "Enter vehicle's make: ";
	cin >> tempMake;

	cout << "Enter vehicle's model: ";
	cin >> tempModel;

	make = new char[BUFFER_LENGTH];
	model = new char[BUFFER_LENGTH];

	strncpy(make, tempMake, strlen(tempMake));
	strncpy(model, tempModel, strlen(tempModel));

	delete[] tempMake;
	delete[] tempModel;
}

Vehicle::Vehicle(int tYear, const char *tMake, const char *tModel)
{
	year = tYear;
	make = new char[BUFFER_LENGTH];
	model = new char[BUFFER_LENGTH];

	strncpy(make, tMake, strlen(tMake));
	strncpy(model, tModel, strlen(tModel));
}

Vehicle::Vehicle(Vehicle &v)
{
	year = v.year;
	make = new char[BUFFER_LENGTH];
	model = new char[BUFFER_LENGTH];

	strncpy(make, v.make, strlen(v.make));
	strncpy(model, v.model, strlen(v.model));
}

Vehicle::~Vehicle()
{
	delete make;
	delete model;
}

void Vehicle::displayInfo()
{
	cout << "[VEHICLE]: " << "Year: " << year << ", Make: " << make << ", Model: " << model << endl;
}
