//-----------------------------------------------------------
// File : Point.cpp
// Class: COP 3003, Fall 2022
// Devl : Katarya Johnson-Williams
// Desc : Implementation of a Point class object
//---------------------------------------------------------

#include "Point.h"

// Constructors
//---------------------------------------------------------
Point::Point() {
    x = 0;
    y = 0;
} // default constructor


// Accessors
//---------------------------------------------------------
float Point::getCoordinateX() { return x; }

void Point::setCoordinateX(float value) { x = value; }

float Point::getCoordinateY() { return y; }

void Point::setCoordinateY(float value) { y = value; }

