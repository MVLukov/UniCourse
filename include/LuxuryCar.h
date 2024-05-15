#pragma once

#include "Car.h"

class LuxuryCar : public Car
{
public:
	LuxuryCar();
	LuxuryCar(int, const char *, const char *, int, double);
	LuxuryCar(LuxuryCar &);
	~LuxuryCar();
	virtual void displayInfo();

private:
	double price;
};
