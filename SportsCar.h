#pragma once
#include "Car.h"

class SportsCar : public Car
{
public:
	SportsCar();
	SportsCar(int, const char*, const char*, int, int);
	SportsCar(SportsCar&);
	~SportsCar();
	virtual void displayInfo();
private:
	int horsePower;
};

