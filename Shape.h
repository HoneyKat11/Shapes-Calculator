//-----------------------------------------------------------
// File : Shape.h
// Class: COP 3003, Fall 2022
// Devl : Katarya Johnson-Williams
// Desc : Declaration of a Shape class object
//---------------------------------------------------------

// HEADER GUARD
#ifndef PROJECT_SHAPES_CALCULATOR_SHAPE_H
#define PROJECT_SHAPES_CALCULATOR_SHAPE_H

#include <iostream>
#include <vector>
#include "Point.h"

enum ShapeMode {
    DEFAULT, // 0 by default
    LINE, // 1
    RECTANGLE, // 2
    CIRCLE, // 3
    TRIANGLE, // 4
    PRINT,
    EXIT
};

class Shape {
protected:
    std::vector<Point> coordinates;
    int shapeType;
    int numOfPoints;

public:

    // Constructors
    //---------------------------------------------------------
    Shape(); // default constructor


    // Accessors
    //---------------------------------------------------------
    int getShapeType();
    void setShapeType(int value);

    int getNumOfPoints();
    void setNumOfPoints(int value);


    // Methods
    //---------------------------------------------------------
    virtual std::string shapeProperties() = 0;

};


#endif //PROJECT_SHAPES_CALCULATOR_SHAPE_H
