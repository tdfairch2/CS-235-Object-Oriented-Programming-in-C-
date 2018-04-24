#include "Capacitor.h"

Capacitor::Capacitor() {}
Capacitor::Capacitor(double t, double n) : tolerance(t), nominal(n) {}

double Capacitor::getMinCapacitance() {
	minCapacitance = Capacitor::nominal - (Capacitor::nominal * tolerance) / 100;
	return minCapacitance;
}

double Capacitor::getMaxCapacitance() {
	maxCapacitance = Capacitor::nominal + (Capacitor::nominal * tolerance) / 100;
	return maxCapacitance;
}

double Capacitor::getNominal() {
	cout << "Enter a value for capacitance: ";
	cin >> nominal;
	return nominal;
}
double Capacitor::getTolerance() {
	cout << "Enter a percentage variance: ";
	cin >> tolerance;
	return tolerance;
}
