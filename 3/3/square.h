#pragma once
#include <iostream>
#include "triangle.h"

class square :public triangle 
{ 
protected: 
   int sideD; 
   int angleD; 
  
public: 
   square() :square("Четырехугольник", 40, 80) 
   { 
        SetSideCount(4);
   } 
   square(std::string str, int d, int D)
   { 
        this->figureName = str; 

        this->sideD = d; 

        this->angleD = D; 

   }
  
   void print_info() override;
  
   bool check() override;
};
  