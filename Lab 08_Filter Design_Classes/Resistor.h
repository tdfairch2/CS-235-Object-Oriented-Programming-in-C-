#pragma once
#ifndef RESISTOR_H
#define RESISTOR_H
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Resistor {
private:
	double tolerance, nominal;
	double minResistance, maxResistance;
public:
	Resistor();
	Resistor(double t, double n);
	~Resistor() {}
	double getMinResistance();
	double getMaxResistance();
	double getTolerance();
	double getNominal();
};

#endif
