#include "SportsCar.h"

#include "Car.h"
#include <iostream>
#include <string>

#define BUFFER_LENGTH 100

using std::cin;
using std::cout;
using std::endl;


SportsCar::SportsCar() :Car() {
	cout << "Enter sports car's horse power: ";
	cin >> horsePower;
}

SportsCar::SportsCar(int tYear, const char* tMake, const char* tModel, int tSeats, int tHorsePower) :Car(tYear, tMake, tModel, tSeats) {
	horsePower = tHorsePower;
}

SportsCar::SportsCar(SportsCar& c) :Car(c) {
	horsePower = c.horsePower;
}

SportsCar::~SportsCar() {
}

void SportsCar::displayInfo() {
	cout << "[SPORTS CAR]: " << "Year: " << year << ", Make: " << make << ", Model: " << model << ", Seats: " << seats << ", Horse power: " << horsePower << endl;
}
