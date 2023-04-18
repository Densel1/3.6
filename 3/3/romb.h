#pragma once
#include <iostream>
#include "square.h"

class romb :public square 
 { 
 public: 
         romb() :romb("Ромб", 30, 30, 40) {} 
         romb(std::string str, int side, int angle1, int angle2) 
         { 
                 this->figureName = str; 
                 this->sideA = side; 
                 this->sideC = side; 
                 this->sideB = side; 
                 this->sideD = side; 
  
                 this->angleA = angle1; 
                 this->angleB = angle2; 
                 this->angleC = angle1; 
                 this->angleD = angle2; 
         } 
         bool check() override;
 }; 