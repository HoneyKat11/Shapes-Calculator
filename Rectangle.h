//-----------------------------------------------------------
// File : Rectangle.h
// Class: COP 3003, Fall 2022
// Devl : Katarya Johnson-Williams
// Desc : Declaration of a Rectangle class object
//---------------------------------------------------------

// HEADER GUARD
#ifndef PROJECT_SHAPES_CALCULATOR_RECTANGLE_H
#define PROJECT_SHAPES_CALCULATOR_RECTANGLE_H

#include "Shape.h"


class Rectangle: public Shape {
protected:
    float width;
    float height;

public:

    // Constructors
    //---------------------------------------------------------
    Rectangle(); // default constructor
    Rectangle(Point bottomLeft, float newWidth, float newHeight);


    // Accessors
    //---------------------------------------------------------
    Point getBottomLeftPoint();
    void setBottomLeftPoint(Point point);

    float getWidth();
    void setWidth(float value);

    float getHeight();
    void setHeight(float value);


    // Methods
    //---------------------------------------------------------
    float calculatePerimeter();
    float calculateArea();
    virtual std::string shapeProperties();

};


#endif //PROJECT_SHAPES_CALCULATOR_RECTANGLE_H
