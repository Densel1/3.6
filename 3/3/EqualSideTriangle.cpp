#include "EqualSideTriangle.h"


bool EqualSideTriangle::check()// override 
{ 
  bool c; 
  bool b = (sideA == sideB) && (sideB == sideC) && (angleA == angleB) && (angleB == angleC) && triangle::check(); 
  c = b; 
  return c; 
}
