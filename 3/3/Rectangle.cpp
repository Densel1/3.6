#include "rectangle.h"

bool rectangle::check()
{ 
    bool c; 
    bool b = (sideA == sideC) && (sideB == sideD) && (angleA == angleB) && (angleB == angleC) && (angleC == angleD) && (angleD == 90) && square::check(); 
    c = b; 
    return c; 
}

