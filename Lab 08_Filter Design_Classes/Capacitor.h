#pragma once
#ifndef CAPACITOR_H
#define CAPACITOR_H
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Capacitor {
private:
	double tolerance, nominal;
	double minCapacitance, maxCapacitance;
public:
	Capacitor();
	Capacitor(double t, double n);
	~Capacitor() {}
	double getMinCapacitance();
	double getMaxCapacitance();
	double getTolerance();
	double getNominal();
	
};
#endif