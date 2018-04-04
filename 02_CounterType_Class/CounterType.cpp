#include "CounterType.h"
// implementation of the setCount method:
void CounterType::setCount(int value) {
	if (value < 0) {
		return;
	}
	count = value;
}

// implementation of the increase method:
void CounterType::increase (){
         count++;
    }

// implementation of the decrease method:
	void CounterType::decrease (){
		if (count <= 0) {
			return;
		}
         count--;
    }

// implementation of the getCount method:
    int CounterType::getCount(){
        return count;
    }


// implementation of the output method:
	void CounterType::output() {
		std::cout << count << endl;
	}
