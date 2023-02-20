/**
 * Point.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * Opeyemi Ojubanire
 * opeoju
 *
 * <#Description#>
 */

#include "Point.h"

// for the declaration of DIMENSION
#include "utility.h"

// TODO: implement two constructors, setX, getX, setY, getY, read, write, checkRange.
Point::Point() {
    x = 0;
    y = 0;
}
    
Point::Point(int xVal, int yVal) {
    // TODO: Implement
    xVal = checkRange(xVal);
    yVal = checkRange(yVal);
    x = xVal;
    y = yVal;
}

void Point::setX(int xVal) {
   
    xVal = checkRange(xVal);
    x = xVal;
}

int Point::getX() {
    
    return x;
}

void Point::setY(int yVal) {
    // TODO: Implement
    yVal = checkRange(yVal);
    y = yVal;
}
    
int Point::getY() {
    
    return y;
}

// read in the form of (x,y)
void Point::read(istream& ins) {
    // TODO: Implement
    char junk;
    ins >> junk;
    ins >> x;
    ins >> junk;
    ins >> y;
    ins >> junk;
    x = checkRange(x);
    y = checkRange(y);
    return;
}

void Point::write(ostream& outs) {
    // TODO: Implement
    outs << "(" << x << "," << y << ")";
    return;
}


int Point::checkRange(int val) {
    if (val >= 0 && val < DIMENSION) {
        return val;
    }
    else if (val < 0) {
        return 0;
    }
    else {
        return (DIMENSION - 1);
    }
}


// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}
