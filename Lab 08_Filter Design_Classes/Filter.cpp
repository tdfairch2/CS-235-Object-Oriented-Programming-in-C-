#include "Filter.h"
#include "Capacitor.h"
#include "Resistor.h"

Filter::Filter(){}
Filter::Filter(string Ftype, Resistor &Res, Capacitor &Cap): R(Res), C(Cap) {}
Filter::~Filter(){}
double Filter::getMinFreq() {
	//Somehow this has to work for Resistor and Capacitor minimums and maximums
	//fc = 1 / (2 * π* R * C)
	minFreq = 1 / (2 * 3.14159265 * R.getMinResistance() * C.getMinCapacitance());
	return minFreq;
}

double Filter::getMaxFreq() {
	//fc = 1 / (2 * π* R * C)
	maxFreq = 1 / (2 * 3.14159265 * R.getMaxResistance() * C.getMaxCapacitance());
	return maxFreq;
}

/*Not certain whether this function is needed, right now I'm using minFreq and maxFreq to indicate
the filter type - Ftype
string Filter::getFilterType() {
//High pass/low pass filter output, one for MinFreq & one for MaxFreq
//Indicate high pass filter and low pass filter values
return FilterType;
}
*/
