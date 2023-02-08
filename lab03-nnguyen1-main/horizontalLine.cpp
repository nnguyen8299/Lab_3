/*
  Copyright (c) 2021
  Swarthmore College Computer Science Department, Swarthmore PA
  J. Brody, S. Caplan, A. Danner, L. Meeden, Z. Palmer, A. Soni, M. Wehar
  Distributed as course material for Fall 2021
  CPSC 035: Data Structures and Algorithms
*/

#include "horizontalLine.h"

using namespace std; 

HorizontalLine::HorizontalLine(int x, int y, int length, char z) {
    // Initialize variables
    this->x = x;
    this->y = y;
    this->z = z;
    this->length = length; 
}

void HorizontalLine::draw(Grid* grid) {
    for (int i = 0; i < length; i++) {
        grid->placeSymbol((this->x) + i, this->y, this->z);
    }
}

char HorizontalLine::getChar() {
    return this->z; 
}
