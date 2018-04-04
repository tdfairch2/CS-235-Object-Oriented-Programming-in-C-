#include "CounterType.h"
/*This is for Exercise 2 - Define and test a class for a type called CounterType. 
An object of this type is used to count things, so it records a count that is a non-negative whole number
*/
void  main(){

	// create a CounterType Object
	CounterType test;
	// set the object count variable to a positive value
	test.setCount(5);
	// test the increase method 5 times. you can use for loop here
		for (int i = 0; i < 5; i++) {
			test.increase();
		}

	// test the output method
	test.output();
	std::cout << std::endl;

	// print on the screen the value of count using a simple cout operation, make sure to use the getCount method
	cout << test.getCount() << endl;

	// test the decrease method 7 times, also you can use a for loop
	for (int i = 0; i < 7; i++) {
		test.decrease();
	}
	
	// test the output method
	test.output();
	std::cout << std::endl;

	system("pause");
}