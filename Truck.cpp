#include "Truck.h"

#include "Vehicle.h"
#include <iostream>
#include <string>

#define BUFFER_LENGTH 100

using std::cin;
using std::cout;
using std::endl;


Truck::Truck() :Vehicle() {
	cout << "Enter truck's load capacity: ";
	cin >> loadCapacity;
}

Truck::Truck(int tYear, const char* tMake, const char* tModel, double tLoadCapacity) :Vehicle(tYear, tMake, tModel) {
	loadCapacity = tLoadCapacity;
}

Truck::Truck(Truck& t) :Vehicle(t) {
	loadCapacity = t.loadCapacity;
}

Truck::~Truck() {
}

void Truck::displayInfo() {
	cout << "[TRUCK]: " << "Year: " << year << ", Make: " << make << ", Model: " << model << ", Load capacity: " << loadCapacity << endl;
}
