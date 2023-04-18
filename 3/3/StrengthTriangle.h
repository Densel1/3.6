#pragma once
#include <iostream>
#include "triangle.h"

// prymougolniy treugolnik 
 class StrengthTriangle :public triangle 
 { 
 public: 
         StrengthTriangle() :StrengthTriangle(90) {} 
         StrengthTriangle(int angleC)// :figure("Прямоугольный треугольник", 3) 
         { 
                 this->angleC = angleC; 
         } 
         StrengthTriangle(std::string str, int sideA, int sideB, int sideC, 
                 int angleA, int angleB, int angleC)// :figure("Прямоугольный треугольник", 3) 
         { 
                 this->figureName = str; 
                 this->sideA = sideA; 
                 this->sideB = sideB; 
                 this->sideC = sideC; 
  
                 this->angleA = angleA; 
                 this->angleB = angleB; 
                 this->angleC = angleC; 
         }
  
         bool check() override;
 }; 