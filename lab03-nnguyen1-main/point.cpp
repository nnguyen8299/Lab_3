/*
  Copyright (c) 2021
  Swarthmore College Computer Science Department, Swarthmore PA
  J. Brody, S. Caplan, A. Danner, L. Meeden, Z. Palmer, A. Soni, M. Wehar
  Distributed as course material for Fall 2021
  CPSC 035: Data Structures and Algorithms
*/

#include "point.h"

using namespace std; 

Point::Point(float x, float y, char z) {
    // Initialize variables; 
    this->x = x;
    this->y = y; 
    this->z = z;
} 

float Point::getX() {
    return this->x; 
}

float Point::getY() {
    return this->y;
}

void Point::setX(float a) {
    this->x = a; 
}

void Point::setY(float b) {
    this->y = b;
}

void Point::draw(Grid* grid) { 
    grid->placeSymbol(this->x, this->y, this->z); 
}

char Point::getChar() {
    return this->z;
}

