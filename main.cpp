#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Truck.h"
#include "LuxuryCar.h"
#include "SportsCar.h"

int main() {
	Vehicle* arr[5] = { new Car(2020, "opel", "astra", 4), new Motorbike(2020, "yamaha", "yamaha", 4.4),
		new Truck(2020, "Scania", "Scania", 25), new LuxuryCar(2020, "Brabus", "Brabus", 4, 250000),
		new SportsCar(2020, "porshe", "911ts", 2, 620) };

	for (int i = 0; i < 5; i++)
	{
		arr[i]->displayInfo();
	}

	return 0;
}