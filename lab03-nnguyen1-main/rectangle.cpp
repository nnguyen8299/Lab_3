/*
  Copyright (c) 2021
  Swarthmore College Computer Science Department, Swarthmore PA
  J. Brody, S. Caplan, A. Danner, L. Meeden, Z. Palmer, A. Soni, M. Wehar
  Distributed as course material for Fall 2021
  CPSC 035: Data Structures and Algorithms
*/

#include "rectangle.h"

using namespace std; 

Rectangle::Rectangle(int x, int y, int width, int height, char z) { 
    //Initialize variables
    this->x = x;
    this->y = y; 
    this->z = z; 
    this->width = width;
    this->height = height; 
}

void Rectangle::draw(Grid* grid) {
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            grid->placeSymbol((this->x) + j, (this->y) + i, (this->z)); 
        }
    }
}

char Rectangle::getChar() {
    return this->z; 
}
