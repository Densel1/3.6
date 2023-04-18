#include "square.h"

void square::print_info()
{ 
        figure::print_info(); 
                 std::cout << "Стороны: " << "a = " << sideA 
                         << " b = " << sideB 
                         << " c = " << sideC 
                         << " d = " << sideD << std::endl; 
                 std::cout << "Углы: " << "A = " << angleA 
                         << " B = " << angleB 
                         << " C = " << angleC 
                         << " D = " << angleD << std::endl << std::endl; 
} 


bool square::check()
{
             bool b = ((sidesCount == 4) && ((angleA + angleB + angleC + angleD) == 360));
                 bool c = b;
                 return c;
}

