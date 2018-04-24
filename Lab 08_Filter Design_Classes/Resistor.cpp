#include "Resistor.h"

Resistor::Resistor(){}
Resistor::Resistor(double t, double n): tolerance (t), nominal (n){}

double Resistor::getMinResistance() {
	minResistance = Resistor::nominal - (Resistor::nominal * tolerance) / 100;
	return minResistance;
}

double Resistor::getMaxResistance() {
	maxResistance = Resistor::nominal + (Resistor::nominal * tolerance) / 100;
	return maxResistance;
}

double Resistor::getNominal() {
	cout << "Enter a value for resistance: ";
	cin >> nominal;
	return nominal;
}
double Resistor::getTolerance() {
	cout << "Enter a percentage variance: ";
	cin >> tolerance;
	return tolerance;
}

