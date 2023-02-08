/*
  Copyright (c) 2021
  Swarthmore College Computer Science Department, Swarthmore PA
  J. Brody, S. Caplan, A. Danner, L. Meeden, Z. Palmer, A. Soni, M. Wehar
  Distributed as course material for Fall 2021
  CPSC 035: Data Structures and Algorithms
*/

#include <iostream>
#include <stdexcept>

#include "picture.h"
#include "grid.h"

using namespace std;

Picture::Picture() {
    this->numberOfShapes = 0;
    this->shapes = new Shape*[50];
    this->grid = new Grid();
    for (int i = 0; i < 50; i++) {
        this->shapes[i] = 0; 
    }
}

Picture::~Picture() {
    for (int i = 0; i < this->numberOfShapes; i++) {
        delete this->shapes[i];
    }
    delete[] shapes; 
    delete this->grid;
}

string Picture::toString() {
    for (int j = 0; j < this->numberOfShapes; j++) {
        (this->shapes[j])->draw(this->grid); 
    }
    return ((this->grid)->toString()); 
}

void Picture::print() {
    cout << this->toString() << endl;
}

void Picture::addShape(Shape* shape) {
    for (int k = 0; k < 50; k++) {
        if (this->shapes[k] == NULL) {
            this->shapes[k] = shape;
            this->numberOfShapes++;
            return; 
        }
    }
}

void Picture::printShapeChars() {
    for (int i = 0; i < this->numberOfShapes; i++) {
        cout << ((this->shapes[i]))->getChar() << endl;
    }
}
