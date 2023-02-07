//-----------------------------------------------------------
// File : Shape.cpp
// Class: COP 3003, Fall 2022
// Devl : Katarya Johnson-Williams
// Desc : Implementation of a Shape class object
//---------------------------------------------------------

#include <vector> // vectors (lists)
#include "Shape.h"

// Constructors
//---------------------------------------------------------
Shape::Shape() {
    std::vector<Point> coordinates;
    shapeType = 0;
    numOfPoints = 0;
} // default constructor


// Accessors
//---------------------------------------------------------
int Shape::getShapeType() { return shapeType; }

void Shape::setShapeType(int value) { shapeType = value; }

int Shape::getNumOfPoints() { return numOfPoints; }

void Shape::setNumOfPoints(int value) { numOfPoints = value; }

