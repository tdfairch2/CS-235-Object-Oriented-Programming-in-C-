#include "Filter.h"
#include "Resistor.h"
#include "Capacitor.h"
#include<iostream>
#include <string>
#include<cmath>

using namespace std;

int main() {
	Resistor::Resistor(5.5, 10.1);
	Capacitor::Capacitor(.02, .08);

	//Create the default constructor then use getNominal and getTolerance

	/*need to create then call Capacitor::Capacitor nominal and tolerance, 
	same for Resistor::Resistor, 
	tolerance value for capactitor will be C + (C * tolerance)/100 (similarly for resistance)*/

	Capacitor::getMinCapacitance(){
	cout << "The capacitor value: " << C << " with a minimum value of: " << minCapacitance << endl;
	}
	Capacitor::getMaxCapacitance(){
	cout << " and with a maximum value of: " << maxCapacitance << endl;
	}

	Resistor::getMinResistance() {
	cout << "The resistor value: " << R << " and it has a minimum value of: " << minResistance << endl;
	}
	Resistor::getMaxResistance() {
	cout << "and a maximum value of:  "<< maxResistance << endl;
	}

	Filter::getMinFreq(){
	cout << "The Low-Pass filter: " << minFreq << endl;
	}
	Filter::getMaxFreq(){
	cout << "The High-Pass filter: " << maxFreq << endl;
	}
	
	system("pause");
}