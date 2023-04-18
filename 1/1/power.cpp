#include "power.h"

float power(float num1, float num2)
{
	float result = num1;
	if (num2 == 0) return 1;
	if (num2 == 1) return num1;
	for (;num2 > 1; --num2)
	{
		result *= num1;
	}
	return result;
}