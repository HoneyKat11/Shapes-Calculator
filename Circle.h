//-----------------------------------------------------------
// File : Circle.h
// Class: COP 3003, Fall 2022
// Devl : Katarya Johnson-Williams
// Desc : Declaration of a Circle class object
//---------------------------------------------------------

// HEADER GUARD
#ifndef PROJECT_SHAPES_CALCULATOR_CIRCLE_H
#define PROJECT_SHAPES_CALCULATOR_CIRCLE_H

#include "Shape.h"


class Circle: public Shape {
protected:
    float radius;

public:

    // Constructors
    //---------------------------------------------------------
    Circle(); // default constructor
    Circle(Point centerPoint, float newRadius);


    // Accessors
    //---------------------------------------------------------
    Point getCenterPoint();
    void setCenterPoint(Point point);

    float getRadius();
    void setRadius(int value);


    // Methods
    //---------------------------------------------------------
    float calculateDiameter();
    float calculateCircumference();
    float calculateArea();
    virtual std::string shapeProperties();


};


#endif //PROJECT_SHAPES_CALCULATOR_CIRCLE_H
