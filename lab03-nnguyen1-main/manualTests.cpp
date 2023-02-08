/*
  Copyright (c) 2021
  Swarthmore College Computer Science Department, Swarthmore PA
  J. Brody, S. Caplan, A. Danner, L. Meeden, Z. Palmer, A. Soni, M. Wehar
  Distributed as course material for Fall 2021
  CPSC 035: Data Structures and Algorithms
*/

#include "grid.h"
#include "shape.h"
#include "point.h"
#include "horizontalLine.h"
#include "verticalLine.h"
#include "rectangle.h"
#include "picture.h"
#include <iostream>

using namespace std;

int main() {
    // You can put anything you like here.  This file exists so that
    // you can experiment with your code.  For instance, the following
    // might be a useful test after you've written your Point class.

    /*
    Shape* s = new Rectangle(8,3, 2, 2,'x');
    Shape* p = new Point(5,5,'p');
    Grid* grid = new Grid();
    s->draw(grid);
    p->draw(grid);
    cout << grid->toString() << endl;
    delete grid;
    delete s;
    delete p;
    */

    
    Picture* pic = new Picture();
    Shape* p = new Point(1, 1, 'x');
    Shape* s = new HorizontalLine(5, 5, 5, 'P');
    Shape* t = new VerticalLine(5, 5, 3, 'N');
    Shape* r = new Rectangle(8, 3, 2, 2, 'H');
    pic->addShape(p);
    pic->addShape(s); 
    pic->addShape(t);
    pic->addShape(r);
    pic->print();  
    delete pic; 
    
    return 0;
}
