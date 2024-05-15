#pragma once

#include "Vehicle.h"

class Car : public Vehicle
{
public:
	Car();
	Car(int, const char *, const char *, int);
	Car(Car &);
	~Car();
	virtual void displayInfo();

protected:
	int seats;
};
