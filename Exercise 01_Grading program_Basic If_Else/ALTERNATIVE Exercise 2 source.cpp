//

#include <iostream>
using namespace std;

class CounterType
{
private:
int count;

public:
CounterType();
CounterType(int newcount);
void Increase();
void Decrease();
int getcount(); // Accessor
void setcount(int newcount); // Mutator
};

int main()
{
CounterType counts;
counts.Increase();
counts.Decrease();

}
CounterType::CounterType(){
count=5;
}

CounterType::CounterType(int newcount)
{
count=newcount;
}

void CounterType:: Increase()
{
count++;
}

void CounterType:: Decrease()
{
if (count<=0)
{
count=0;
else
{
count--;
}

}

int CounterType::getcount()
{
return(count);
}

void CounterType::setcount(int Newcount)
{
setcount(5);
}