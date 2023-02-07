//-----------------------------------------------------------
// File : Triangle.cpp
// Class: COP 3003, Fall 2022
// Devl : Katarya Johnson-Williams
// Desc : Implementation of a Triangle class object
//---------------------------------------------------------

#include <cmath> // math functions
#include "Triangle.h"

// Constructors
//---------------------------------------------------------
Triangle::Triangle() {
    setShapeType(TRIANGLE);
    setNumOfPoints(3);
    coordinates.resize(3);
    height = 0.0;
    base = 0.0;
} // default constructor

Triangle::Triangle(Point rightAnglePoint, float newHeight, float newBase) {
    setShapeType(TRIANGLE);
    setNumOfPoints(3);
    coordinates.resize(3);
    coordinates[0] = rightAnglePoint;
    height = newHeight;
    base = newBase;
}


// Accessors
//---------------------------------------------------------
Point Triangle::getRightAnglePoint() { return coordinates[0]; }

void Triangle::setRightAnglePoint(Point point) { coordinates[0] = point; }

float Triangle::getHeight() { return height; }

void Triangle::setHeight(float value) { height = value; }

float Triangle::getBase() { return base; }

void Triangle::setBase(float value) { base = value; }


// Methods
//---------------------------------------------------------
/**
 * calculate the hypotenuse of the triangle using the given values
 * @return calculated hypotenuse
 */
float Triangle::calculateHypotenuse() {
    float hypotenuse;

    // calculate the hypotenuse using the Pythagorean theorem
    hypotenuse = sqrt(pow(base, 2) + pow(height, 2));

    return hypotenuse;
}

/**
 * calculate the acute cosine angle of the triangle
 * @return calculated acute cosine angle
 */
float Triangle::calculateCosineAngle() {
    // define labels for readability
    float cosineAngle, adjacent, hypotenuse;
    adjacent = base;
    hypotenuse = calculateHypotenuse();

    // use the relationship cos(x) = adjacent/hypotenuse to
    // find the cosine acute angle (convert to degrees)
    cosineAngle = acos(adjacent / hypotenuse) * (180 / M_PI);

    return cosineAngle;
}

/**
 * calculate the acute sine angle of the triangle
 * @return calculate acute sine angle
 */
float Triangle::calculateSineAngle() {
    // define labels for readability
    float sineAngle;

    // use the other two angles to find the value of the final angle
    sineAngle = 180 - 90 - calculateCosineAngle();

    return sineAngle;
}

/**
 * calculate the perimeter of the of the triangle using the given values
 * @return calculated perimeter
 */
float Triangle::calculatePerimeter() {
    float perimeter;

    // calculate the perimeter using the triangle perimeter formula
    perimeter = calculateHypotenuse() + base + height;

    return perimeter;
}

/**
 * calculate the area of the triangle using the given values
 * @return calculated area
 */
float Triangle::calculateArea() {
    float area;

    // calculate the area using the triangle area formula
    area = 0.5 * base * height;

    return area;
}

/**
 * create strings for each triangle property and concatenate them into a shape summary
 * @return shape property string
 */
std::string Triangle::shapeProperties() {
    // define labels for readability
    float rightAngleX = coordinates[0].getCoordinateX();
    float rightAngleY = coordinates[0].getCoordinateY();

    // define label for user
    std::string shapeLabel;
    shapeLabel = "Right Triangle \n";

    // set up and calculate three triangle points to be printed
    std::string pointString;

    // define point A string (values given)
    std::string rightAnglePointString;
    rightAnglePointString= "(" + std::to_string(rightAngleX) + ", " + std::to_string(rightAngleY) + ")";

    // calculate height point
    Point heightPoint;
    heightPoint.setCoordinateX(rightAngleX);
    heightPoint.setCoordinateY(rightAngleY + height);
    coordinates[1] = heightPoint;

    // define labels for readability
    float heightPointX = coordinates[1].getCoordinateX();
    float heightPointY = coordinates[1].getCoordinateY();

    // define point height point string
    std::string heightPointString;
    heightPointString= "(" + std::to_string(heightPointX) + ", " + std::to_string(heightPointY) + ")";

    // calculate base point
    Point basePoint;
    basePoint.setCoordinateX(rightAngleX + base);
    basePoint.setCoordinateY(rightAngleY);
    coordinates[2] = basePoint;

    // define labels for readability
    float basePointX = coordinates[2].getCoordinateX();
    float basePointY = coordinates[2].getCoordinateY();

    // define point base point string
    std::string basePointString;
    basePointString= "(" + std::to_string(basePointX) + ", " + std::to_string(basePointY) + ")";

    // define string of coordinates
    pointString = "Points: {" + rightAnglePointString + heightPointString + basePointString + "} \n";

    // define hypotenuse string
    std::string hypotenuseString;
    hypotenuseString = "Hypotenuse: " + std::to_string(calculateHypotenuse()) + " \n";

    // define string for angles equation
    std::string anglesEquation, firstAngle, secondAngle;
    firstAngle = std::to_string(calculateCosineAngle()) + "° + ";
    secondAngle = std::to_string(calculateSineAngle()) + "°";
    anglesEquation = "180° = 90° + " + firstAngle + secondAngle;

    // define angles string
    std::string anglesString;
    anglesString = "Angles (in degrees): " + anglesEquation + " \n";

    // define perimeter string
    std::string perimeterString;
    perimeterString = "Perimeter: " + std::to_string(calculatePerimeter()) + " \n";

    // define area string
    std::string areaString;
    areaString = "Area: " + std::to_string(calculateArea()) + " \n";

    // concatenate properties and return string
    std::string properties;
    properties = shapeLabel + pointString + hypotenuseString + anglesString + perimeterString + areaString;

    // return shape properties string
    return properties;
}


