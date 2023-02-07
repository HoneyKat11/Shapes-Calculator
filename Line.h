//-----------------------------------------------------------
// File : Line.h
// Class: COP 3003, Fall 2022
// Devl : Katarya Johnson-Williams
// Desc : Declaration of a Line class object
//---------------------------------------------------------

// HEADER GUARD
#ifndef PROJECT_SHAPES_CALCULATOR_LINE_H
#define PROJECT_SHAPES_CALCULATOR_LINE_H

#include "Shape.h"


class Line: public Shape {
public:

    // Constructors
    //---------------------------------------------------------
    Line(); // default constructor
    Line(Point pointOne, Point pointTwo);


    // Accessors
    //---------------------------------------------------------
    Point getPointOne();
    void setPointOne(Point point);

    Point getPointTwo();
    void setPointTwo(Point point);


    // Methods
    //---------------------------------------------------------
    float calculateSlope();
    float calculateAngle();
    float calculateLength();
    float calculateYIntercept();
    virtual std::string shapeProperties();

};


#endif //PROJECT_SHAPES_CALCULATOR_LINE_H
