#pragma once
#include <iostream>
#include "square.h"

 // kvadrat 
 class equalSideRectangle :public square 
 {
 public: 
         equalSideRectangle() :equalSideRectangle("Квадрат", 20) {} 
         equalSideRectangle(std::string str, int side) 
         { 
                 this->figureName = str; 
                 this->sideA = side; 
                 this->sideC = side; 
                 this->sideB = side; 
                 this->sideD = side; 
  
                 this->angleA = 90; 
                 this->angleB = 90; 
                 this->angleC = 90; 
                 this->angleD = 90; 
         } 
  
         bool check() override;
 }; 
  