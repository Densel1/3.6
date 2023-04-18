#include "StrengthTriangle.h"

bool StrengthTriangle::check(){ 
       bool c; 
       bool d = triangle::check(); 
       c = d; 
       if ((angleC == 90) && c) c = t; 
       return c; 
} 
