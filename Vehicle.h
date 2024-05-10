#pragma once
class Vehicle
{
public: 
	Vehicle();
	Vehicle(int, const char*, const char*);
	Vehicle(Vehicle&);
	~Vehicle();
	virtual void displayInfo();
protected:
	int year;
	char* make;
	char* model;
};

