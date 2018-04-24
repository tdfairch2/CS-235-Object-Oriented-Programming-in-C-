#pragma once
#ifndef FILTER_H
#define FILTER_H
#include <string>
#include <cmath>
#include <iostream>
using namespace std;

class Filter {
private:
	// may not need this: string FilterType;
	double minFreq, maxFreq;
	Resistor R;
	Capacitor C;
	string filter;
public:
	Filter();
	Filter(string filter, Resistor &Res, Capacitor &Cap);
	~Filter();
	double getMinFreq();
	double getMaxFreq();
	// may not need this either:  string getFilterType();
};

#endif