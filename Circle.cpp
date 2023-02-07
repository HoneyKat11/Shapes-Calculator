//-----------------------------------------------------------
// File : Circle.cpp
// Class: COP 3003, Fall 2022
// Devl : Katarya Johnson-Williams
// Desc : Implementation of a Circle class object
//---------------------------------------------------------

#include <cmath> // math functions
#include "Circle.h"

// Constructors
//---------------------------------------------------------
Circle::Circle() {
    setShapeType(CIRCLE);
    setNumOfPoints(1);
    coordinates.resize(1);
    radius = 0.0;
} // default constructor

Circle::Circle(Point centerPoint, float newRadius) {
    setShapeType(CIRCLE);
    setNumOfPoints(1);
    coordinates.resize(1);
    coordinates[0] = centerPoint;
    radius = newRadius;
}


// Accessors
//---------------------------------------------------------
Point Circle::getCenterPoint() { return coordinates[0]; }

void Circle::setCenterPoint(Point point) { coordinates[0] = point; }

float Circle::getRadius() { return radius; }

void Circle::setRadius(int value) { radius = value; }


// Methods
//---------------------------------------------------------
/**
 * calculate the diameter of the circle using the given values
 * @return calculated diameter
 */
float Circle::calculateDiameter() {
    float diameter;

    // calculate the diameter using the diameter formula
    diameter = radius * 2.0;

    return diameter;
}

/**
 * calculate the circumference of the circle using the given values
 * @return calculated circumference
 */
float Circle::calculateCircumference() {
    float circumference;

    // calculate the circumference using the circumference formula
    circumference = 2 * M_PI * radius;

    return circumference;
}

/**
 * calculate the area of the circle using the given values
 * @return calculated area
 */
float Circle::calculateArea() {
    float area;

    // calculate the area using the circle area formula
    area = M_PI * pow(radius, 2);

    return area;
}

/**
 * create strings for each circle property and concatenate them into a shape summary
 * @return shape property string
 */
std::string Circle::shapeProperties() {
    // define labels for readability
    float centerPointX = coordinates[0].getCoordinateX();
    float centerPointY = coordinates[0].getCoordinateY();

    // define label for user
    std::string shapeLabel;
    shapeLabel = "Circle \n";

    // define center point string
    std::string centerPointString;
    centerPointString = "(" + std::to_string(centerPointX) + ", " + std::to_string(centerPointY) + ")";

    // define string of coordinates
    std::string pointString;
    pointString = "Center Point: {"  + centerPointString+ "} \n";

    // define diameter string
    std::string diameterString;
    diameterString = "Diameter: " + std::to_string(calculateDiameter()) + " \n";

    // define radius string
    std::string radiusString;
    radiusString = "Radius: " + std::to_string(radius) + " \n";

    // define circumference string
    std::string circumferenceString;
    circumferenceString = "Circumference: " + std::to_string(calculateCircumference()) + " \n";

    // define area string
    std::string areaString;
    areaString = "Area: " + std::to_string(calculateArea()) + " \n";

    // concatenate properties and return string
    std::string properties;
    properties = shapeLabel + pointString + diameterString + radiusString + circumferenceString + areaString;

    // return shape properties string
    return properties;
}



