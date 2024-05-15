#include "LuxuryCar.h"

#include "Car.h"
#include <iostream>
#include <string>

#define BUFFER_LENGTH 100

using std::cin;
using std::cout;
using std::endl;


LuxuryCar::LuxuryCar() :Car() {
	cout << "Enter luxury car's price: ";
	cin >> price;
}

LuxuryCar::LuxuryCar(int tYear, const char* tMake, const char* tModel, int tSeats, double tPrice) :Car(tYear, tMake, tModel, tSeats) {
	price = tPrice;
}

LuxuryCar::LuxuryCar(LuxuryCar& c) :Car(c) {
	price = c.price;
}

LuxuryCar::~LuxuryCar() {
}

void LuxuryCar::displayInfo() {
	cout << "[LUXURY CAR]: " << "Year: " << year << ", Make: " << make << ", Model: " << model << ", Seats: " << seats << ", Price: " << price << endl;
}
