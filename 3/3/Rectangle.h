#pragma once
#include <iostream>
#include "square.h"

 // pryamougolnik 
 class rectangle :public square 
 { 
 public: 
         rectangle() :rectangle("Прямоугольник", 10, 20) {} 
         rectangle(std::string str, int side1, int side2) 
         { 
                 SetSideCount(4); 
                 this->figureName = str; 
                 this->sideA = side1; 
                 this->sideC = side1; 
                 this->sideB = side2; 
                 this->sideD = side2; 
  
                 this->angleA = 90; 
                 this->angleB = 90; 
                 this->angleC = 90; 
                 this->angleD = 90; 
         } 
         bool check() override;
 };
 