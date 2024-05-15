#pragma once

#include "Vehicle.h"

class Truck : public Vehicle
{
public:
	Truck();
	Truck(int, const char *, const char *, double);
	Truck(Truck &);
	~Truck();
	virtual void displayInfo();

private:
	double loadCapacity;
};
