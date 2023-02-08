/*
  Copyright (c) 2021
  Swarthmore College Computer Science Department, Swarthmore PA
  J. Brody, S. Caplan, A. Danner, L. Meeden, Z. Palmer, A. Soni, M. Wehar
  Distributed as course material for Fall 2021
  CPSC 035: Data Structures and Algorithms
*/

#include "verticalLine.h"

using namespace std; 

VerticalLine::VerticalLine(int x, int y, int length, char z) {
    // Initialize Variables
    this->x = x;
    this->y = y; 
    this->z = z; 
    this->length = length; 
}

void VerticalLine::draw(Grid* grid) {
    for (int i = 0; i < length; i++) {
        grid->placeSymbol(this->x, (this->y) + i, this->z);
    }
}

char VerticalLine::getChar() {
    return this->z;
}
