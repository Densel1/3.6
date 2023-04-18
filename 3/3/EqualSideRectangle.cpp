#include "equalSideRectangle.h"

bool equalSideRectangle::check()
{ 
    bool c; 
    bool b = (sideA == sideB) && (sideB == sideC) && (sideC == sideD) && (angleA == angleB) && (angleB == angleC) && (angleC == angleD) && (angleD == 90) && square::check(); 
    c = b; 
    return c; 
} 
