/**
 * Color.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#Description#>
 */

#include "Color.h"

// TODO: implement first checkRange, then two constructors, setRed, getRed,
//       setGreen, getGreen, setBlue, getBlue, read, write.

Color::Color() {
    red = 0;
    green = 0;
    blue = 0;
    
    
}

Color::Color(int redVal, int greenVal, int blueVal) {
    redVal = checkRange(redVal);
    greenVal = checkRange(greenVal);
    blueVal = checkRange(blueVal);
    red = redVal;
    green = greenVal;
    blue = blueVal;
    
}

void Color::setRed(int redVal) {
    
    redVal = checkRange(redVal);
    red = redVal;
}

int Color::getRed() {
    
    return red;
}

void Color::setGreen(int greenVal) {
    
    greenVal = checkRange(greenVal);
    green = greenVal;
    
}

int Color::getGreen() {

    return green;
}

void Color::setBlue(int blueVal) {
    
    blueVal = checkRange(blueVal);
    blue = blueVal;
}

int Color::getBlue() {
    
    return blue;
}

void Color::read(istream& ins){
    ins >> red;
    ins >> green;
    ins >> blue;
    red = checkRange(red);
    green = checkRange(green);
    blue = checkRange(blue);
    
}

void Color::write(ostream& outs) {
    outs << red << " " << green << " " << blue;
}

int Color:: checkRange(int val) {
    if ( val >= 0 && val <= 255) {
        return val;
    }
    
    else if ( val < 0) {
        return 0;
    }
    else {
        return 255;
    }
}



// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins, Color& color)
{
   color.read(ins);
   return ins;
}

ostream& operator << (ostream& outs, Color color)
{
   color.write(outs);
   return outs;
}
