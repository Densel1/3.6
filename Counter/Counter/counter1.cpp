#include "counter1.h"


void counter1::inc()
{
	this->value++;
}
void counter1::dec()
{
	if (this->value > 0)
		this->value--;
}
unsigned int counter1::getValue()
{
	return this->value;
}
