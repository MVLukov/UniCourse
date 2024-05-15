#pragma once

#include "Vehicle.h"

class Motorbike : public Vehicle
{
public:
	Motorbike();
	Motorbike(int, const char *, const char *, double);
	Motorbike(Motorbike &);
	~Motorbike();
	virtual void displayInfo();

private:
	double engineDisplacement;
};