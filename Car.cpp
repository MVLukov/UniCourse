#include "Car.h"
#include "Vehicle.h"
#include <iostream>
#include <string>

#define BUFFER_LENGTH 100

using std::cin;
using std::cout;
using std::endl;


Car::Car() :Vehicle() {
	cout << "Enter car's seats: ";
	cin >> seats;
}

Car::Car(int tYear, const char* tMake, const char* tModel, int tSeats) :Vehicle(tYear, tMake, tModel) {
	seats = tSeats;
}

Car::Car(Car& c) :Vehicle(c) {
	seats = c.seats;
}

Car::~Car() {
}

void Car::displayInfo() {
	cout << "[CAR]: " << "Year: " << year << ", Make: " << make << ", Model: " << model << ", Seats: " << seats << endl;
}
