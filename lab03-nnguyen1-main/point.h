#pragma once

/*
  Copyright (c) 2021
  Swarthmore College Computer Science Department, Swarthmore PA
  J. Brody, S. Caplan, A. Danner, L. Meeden, Z. Palmer, A. Soni, M. Wehar
  Distributed as course material for Fall 2021
  CPSC 035: Data Structures and Algorithms
*/

#include "shape.h"


//CLASS DEFINITION
class Point : public Shape {
    private:
        float x;
        float y; 
        char z; 
    public: 
        Point(float x, float y, char z);
        float getX();
        float getY();
        void setX(float a);
        void setY(float b);
        void draw(Grid* grid);
        char getChar(); 
};

