#pragma once
class counter1
{
	unsigned int value;
public:
	counter1(unsigned int val)
	{
		this->value = val;
	}
	counter1()
	{
		this->value = 1;
	}
	void inc();
	void dec();
	unsigned int getValue();
};

