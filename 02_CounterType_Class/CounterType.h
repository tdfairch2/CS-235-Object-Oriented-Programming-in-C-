#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H

#include <iostream>
using namespace std;

class CounterType {
    public:

	// prototype of setCount method
	//
		void setCount(int value); 

	// prototype of increase method
		void increase();

	// prototype of decrease method
		void decrease();

	// prototype of getCount method, returns count value
		int getCount();

	// prototype of output method, use ostream object
		void output();

private:
	int count;
};

#endif
