#include "triangle.h"



void triangle::print_info()// override
{
figure::print_info(); 
std::cout << "Стороны: " << "a=" << sideA 
<< " b=" << sideB 
<< " c=" << sideC << std::endl; 
std::cout << "Углы: " << "A=" << angleA 
<< " B=" << angleB 
<< " C=" << angleC << std::endl << std::endl;
}

bool triangle::check()// override 
{
 bool c = f;
  if ((sidesCount == 3) && ((angleA + angleB + angleC) == 180)) c = t; 
    return c; 
}
