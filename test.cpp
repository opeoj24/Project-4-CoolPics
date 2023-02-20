/**
 * test.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * Contains functions for testing classes in the project. 
 */

#include "Graphics.h"
#include "Circle.h"
#include "Color.h"
#include "Line.h"
#include "Point.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"

#include <iostream>
#include <fstream>

using namespace std;


void test_Circle();
void test_Color();
void test_Line();
void test_Point();
void test_Rectangle();
void test_Triangle();


void startTests() {
    test_Point();
    test_Color();
    test_Line();
    test_Circle();
    test_Rectangle();
    test_Triangle();
    // call other test functions here
    
    return;
}

void test_Point() {
    cout << "Testing Class Point" << endl;
    // test of default constructor
    Point p1;
    cout << "Expected: (0,0), actual: " << p1 << endl;
    
    // test of the non-default constructor
    Point p2(3, 9);
    cout << "Expected: (3,9), actual: " << p2 << endl;
    
    Point p3(11, 21);
    cout << "Expected: (11,21), actual: " << p3 << endl;
    
    Point p4(55, 55);
    cout << "Expected: (56,56), actual: " << p4 << endl;
    
    Point p5(-8, -9);
    cout << "Expected: (0,0), actual: " << p5 << endl;


    // test of member function: setX()
    p1.setX(5);
    // test of member function: setY()
    p1.setY(3);

    // test of member functions getX() and getY()
    cout << "Expected: (5,3), actual: ";
    cout << "( " << p1.getX()
         << ", " << p1.getY()
         << " )" << endl;
    
    p1.setX(55);
    p1.setY(55);
    cout << "Expected: (56,56), actual: ";
    cout << "( " << p1.getX()
         << ", " << p1.getY()
         << " )" << endl;
    
    p1.setX(100);
    p1.setY(100);
    cout << "Expected: (100,100), actual: ";
    cout << "( " << p1.getX()
         << ", " << p1.getY()
         << " )" << endl;
    
    p1.setX(-8);
    p1.setY(-9);
    cout << "Expected: (0,0), actual: ";
    cout << "( " << p1.getX()
         << ", " << p1.getY()
         << " )" << endl;
    return;
}

void test_Color() {
    cout << "Testing Class Color " << endl;
    Color c1;
    cout << "Expected: 0 0 0, actual: " << c1 << endl;
    
    Color c2(15,35,65);
    cout << "Expected: 15,35,65, actual: "<< c2 << endl;
    
    Color c3(55,90,100);
    cout << "Expected: 55,90,100, actual: "<< c3 << endl;
    
    Color c4(4,11,17);
    cout << "Expected: 5,20,10, actual: "<< c4 << endl;
    
    Color c5(-1,-22,-8);
    cout << "Expected: 0,0,0, actual: "<< c5 << endl;
    
    c1.setRed(60);
    c1.setGreen(27);
    c1.setBlue(55);
    cout << "Expected: 60,27,55, actual: ";
    cout << c1.getRed() << " " << c1.getGreen()
    << " " << c1.getBlue() << endl;
    
    c1.setRed(0);
    c1.setGreen(0);
    c1.setBlue(0);
    cout << "Expected: 0,0,0, actual: ";
    cout << c1.getRed() << " " << c1.getGreen()
    << " " << c1.getBlue() << endl;
    
    c1.setRed(115);
    c1.setGreen(115);
    c1.setBlue(115);
    cout << "Expected: 15,15,15, actual: ";
    cout << c1.getRed() << " " << c1.getGreen()
    << " " << c1.getBlue() << endl;
    
    c1.setRed(11);
    c1.setGreen(109);
    c1.setBlue(15);
    cout << "Expected: 11,109,15, actual: ";
    cout << c1.getRed() << " " << c1.getGreen()
    << " " << c1.getBlue() << endl;
    
    c1.setRed(-6);
    c1.setGreen(-10);
    c1.setBlue(-19);
    cout << "Expected: 0,0,0, actual: ";
    cout << c1.getRed() << " " << c1.getGreen()
    << " " << c1.getBlue() << endl;
    cout << endl;
    
    return;
}

void test_Line() {
    cout << "Testing Class Line"<< endl;
    Point p1(0,0);
    Point p2 (20,20);
    Line l1;
    l1.write(cout);
    cout << endl;
    Color c(50, 50, 50);
    Line l2(p1, p2, c);
    l2.write(cout);
    cout << endl;
    Line l3(p2, p2, c);
    l3.write(cout);
    cout << endl;
    Line l4(p1, p2, c);
    l4.setEnd(p2);
    l4.setStart(p1);
    l4.write(cout);
    cout << endl;
    l4.setEnd(p2);
    l4.setStart(p2);
    l4.write(cout);
    cout << endl;
    Point z;
    z = l1.getStart();
    z.write(cout);
    z = l4.getStart();
    z.write(cout);
    cout << endl;
    z = l2.getStart();
    z.write(cout);
    cout << endl;
    z = l3.getStart();
    z.write(cout);
    cout << endl;
    
    
}

void test_Circle() {
cout << "Testing Class Circle" << endl;
    
    Point p1(10,10);
    Color c1(0,0,0);
    Circle i1(p1, 30, c1);
    Point p2(5,5);
    Color c2(10,10,10);
    Circle i2(p1, 20, c1);
    cout << "Expected (10,10) 30 0 0 0, actual: " << i1 << endl;
    cout << "Expected (10,10) 30 0 0 0, actual: " << i2 << endl;
    cout << "Expected (5,5) 20 10 10 10, actual: " << i2 << endl;
    p1.setX(33);
    p1.setY(33);
    c1.setRed(220);
    c1.setGreen(220);
    c1.setBlue(220);
    i1.setCenter(p1);
    i1.setRadius(25);
    i1.setColor(c1);
    cout << "Expected: (10,10) 33 220 220 220, actual: " <<i1.getCenter()
    << " "<< i1.getRadius() << " "<< i1.getColor() << endl;
    cout << endl;
    p2.setX(55);
    p2.setY(55);
    c2.setRed(200);
    c2.setGreen(200);
    c2.setBlue(200);
    i2.setCenter(p2);
    i2.setRadius(40);
    i2.setColor(c2);
    
    return;
}

void test_Rectangle(){
    cout << "Testing Class Rectangle" << endl;
    Point p1(0,0);
    Point p2 (11,11);
    Color c1(0,0,0);
    Color c2(10,10,10);
    Color c3(50,50,50);
    Color c4(100,100,100);
    Rectangle r1(p1, p2, c1);
    cout<< "Expected (0,0) (11,11) 0 0 0 0 0 0 0 0 0 0 0 0, actual : " << r1 << endl;
    Rectangle r2(p1, p2, c1 , c2, c3, c4);
    cout << "Expected: (0,0) (11,11) 0 0 0 10 10 10 50 50 50 100 100 100, actual : " << r2 << endl;
    r1.setColor(c2);
    cout << "Expected: 10 10 10 10 10 10 10 10 10 10 10 10, actual : ";
    cout << r1.getColorBottomRight() << " " << r1.getColorBottomLeft() << endl;
    r1.setColorTopLeft(c4);
    r1.setColorTopRight(c3);
    r1.setColorBottomRight(c1);
    r1.setColorBottomLeft(c1);
    cout << "Expected: 100 100 100 50 50 50 10 10 10 0 0 0, actual:";
    cout<< r1.getColorTopLeft() << " " << r1.getColorTopRight() << " "
    << r1.getColorBottomRight() << " " << r1.getColorBottomLeft() << endl;
    p1.setX(30);
    p1.setY(10);
    p2.setX(0);
    p2.setY(20);
    r1.setStart(p1);
    r1.setEnd(p2);
    cout << "Expected: (30,10) (0,20), actual: ";
    cout << r1.getStart() << " "<< r1.getEnd() << endl;
    cout << endl;
    
    return;
}
void test_Triangle(){
    cout << "Test Class Triangle" << endl;
    Point p1(0,0);
    Point p2(15,15);
    Point p3(0,10);
    Color c1(50,50,50);
    Color c2(100,100,100);
    Color c3(255,255,255);
    Triangle t1(p1, p2, p3, c1);
    cout << "Expected (0,0) 0 0 0 (15,15) 0 0 0 (0,10) 0 0 0, actual: " << t1 << endl;
    Triangle t2(p1, p2, p3, c3);
    cout << "Expected : (0,0) 0 0 0 (15,15) 50 50 50 (0,10) 255 255 255, actual: "<< t2 << endl;
    Triangle t3(p1, p2, p3, c2);
    cout << "Expected : (0,0) 0 0 0 (15,15) 50 50 50 (0,10) 100 100 100, actual: "<< t3 << endl;
    Triangle t4(p2, p1, p3, c1);
    cout << "Expected : (15,15) 0 0 0 (0,0) 50 50 50 (0,10) 100 100 100, actual: "<< t4 << endl;
    c1.setRed(255);
    t1.setColor(c1);
    cout << "Expected: 255 0 0 255 0 0 255 0 0, actual: ";
    cout << t1.getVertexOneColor() << " " << t1.getVertexTwoColor() << " "
    << t1.getVertexThreeColor() << endl;
    c2.setGreen(255);
    c3.setBlue(0);
    t1.setVertexOneColor(c1);
    t1.setVertexTwoColor(c2);
    t1.setVertexThreeColor(c3);
    cout << "Expected: 255 0 0 100 255 100 255 255 0, actual: ";
    cout << t1.getVertexOneColor() << " " << " " << t1.getVertexTwoColor() << " "
    << t1.getVertexThreeColor() << endl;
    p1.setX(5);
    p1.setY(10);
    p2.setX(0);
    p2.setY(20);
    p3.setX(1);
    p3.setY(2);
    t1.setVertexOne(p1);
    t1.setVertexTwo(p2);
    t1.setVertexThree(p3);
    cout << "Expected: (5,10) (0,20), (1,2) actual: ";
    cout << t1.getVertexOne() << " " << t1.getVertexTwo()<< " " <<
    t1.getVertexThree() << endl;
    cout << endl;
    
    return;
}
