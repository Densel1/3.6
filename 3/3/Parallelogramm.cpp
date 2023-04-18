#include "parallelogramm.h"

bool parallelogramm::check()// override 
{
	bool b = square::check() && (sideA  == sideC) && (sideB  == sideD) && (angleA  == angleC) && (angleB  == angleD);
	bool c = b;
	return c;
}