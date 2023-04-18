#include "TwoEqualTriangle.h"


 bool TwoEqualTriangle::check()
 {
    bool c = triangle::check(); 
    bool b = (sideA == sideC) && (angleA == angleC)&&(triangle::check());
    c = b; 
    return c; 
 }
 