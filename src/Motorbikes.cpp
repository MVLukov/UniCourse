#include "Motorbike.h"

#include "Vehicle.h"
#include <iostream>
#include <string>

#define BUFFER_LENGTH 100

using std::cin;
using std::cout;
using std::endl;


Motorbike::Motorbike() :Vehicle() {
	cout << "Enter motorbike's engine displacement: ";
	cin >> engineDisplacement;
}

Motorbike::Motorbike(int tYear, const char* tMake, const char* tModel, double tEngineDisplacement) :Vehicle(tYear, tMake, tModel) {
	engineDisplacement = tEngineDisplacement;
}

Motorbike::Motorbike(Motorbike& m) :Vehicle(m) {
	engineDisplacement = m.engineDisplacement;
}

Motorbike::~Motorbike() {
}

void Motorbike::displayInfo() {
	cout << "[MOTORBIKE]: " << "Year: " << year << ", Make: " << make << ", Model: " << model << ", Engine displacement: " << engineDisplacement << endl;
}
