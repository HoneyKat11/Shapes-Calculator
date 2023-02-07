//-----------------------------------------------------------
// File : Triangle.h
// Class: COP 3003, Fall 2022
// Devl : Katarya Johnson-Williams
// Desc : Declaration of a Triangle class object
//---------------------------------------------------------

// HEADER GUARD
#ifndef PROJECT_SHAPES_CALCULATOR_TRIANGLE_H
#define PROJECT_SHAPES_CALCULATOR_TRIANGLE_H

#include "Shape.h"


class Triangle: public Shape {
protected:
    float height;
    float base;

public:

    // Constructors
    //---------------------------------------------------------
    Triangle(); // default constructor
    Triangle(Point rightAnglePoint, float newHeight, float newBase);


    // Accessors
    //---------------------------------------------------------
    Point getRightAnglePoint();
    void setRightAnglePoint(Point point);

    float getHeight();
    void setHeight(float value);

    float getBase();
    void setBase(float value);


    // Methods
    //---------------------------------------------------------
    float calculateHypotenuse();
    float calculateCosineAngle();
    float calculateSineAngle();
    float calculatePerimeter();
    float calculateArea();
    virtual std::string shapeProperties();


};


#endif //PROJECT_SHAPES_CALCULATOR_TRIANGLE_H
