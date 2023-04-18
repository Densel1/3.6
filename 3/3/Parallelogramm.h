#pragma once
#include <iostream>
#include "square.h"

class parallelogramm :public square 
{ 
public: 
       parallelogramm() :parallelogramm("Параллелограмм", 20, 30, 30, 40) {} 
       parallelogramm(std::string str, int side1, int side2, int angle1, int angle2) 
       { 
                 this->figureName = str; 
                 this->sideA = side1; 
                 this->sideC = side1; 
                 this->sideB = side2; 
                 this->sideD = side2; 
  
                 this->angleA = angle1; 
                 this->angleB = angle2; 
                 this->angleC = angle1; 
                 this->angleD = angle2; 
       }
       bool check() override;
 }; 
  