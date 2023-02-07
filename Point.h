//-----------------------------------------------------------
// File : Point.h
// Class: COP 3003, Fall 2022
// Devl : Katarya Johnson-Williams
// Desc : Declaration of a Point class object
//---------------------------------------------------------

// HEADER GUARD
#ifndef PROJECT_SHAPES_CALCULATOR_POINT_H
#define PROJECT_SHAPES_CALCULATOR_POINT_H


class Point {
protected:
    float x;
    float y;

public:

    // Constructors
    //---------------------------------------------------------
    Point(); // default constructor


    // Accessors
    //---------------------------------------------------------
    float getCoordinateX();
    void setCoordinateX(float value);

    float getCoordinateY();
    void setCoordinateY(float value);


};


#endif //PROJECT_SHAPES_CALCULATOR_POINT_H
