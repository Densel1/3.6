#include "romb.h"

bool romb::check()
{ 
    bool d = square::check(); 
    bool b = d && (sideA == sideB) && (sideB == sideC) && (sideC == sideD) && (angleA == angleC) && (angleB == angleD); 
    bool c = b; 
    return c; 
}
