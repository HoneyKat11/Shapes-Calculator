//-----------------------------------------------------------
// File : Rectangle.cpp
// Class: COP 3003, Fall 2022
// Devl : Katarya Johnson-Williams
// Desc : Implementation of a Rectangle class object
//---------------------------------------------------------

#include <iomanip> // for float significant figures
#include "Rectangle.h"

// Constructors
//---------------------------------------------------------
Rectangle::Rectangle() {
    setShapeType(RECTANGLE);
    setNumOfPoints(4);
    coordinates.resize(4);
    width = 0.0;
    height = 0.0;
} // default constructor

Rectangle::Rectangle(Point bottomLeft, float newWidth, float newHeight) {
    setShapeType(RECTANGLE);
    setNumOfPoints(4);
    coordinates.resize(4);
    coordinates[0] = bottomLeft;
    width = newWidth;
    height = newHeight;
}


// Accessors
//---------------------------------------------------------
Point Rectangle::getBottomLeftPoint() { return coordinates[0]; }

void Rectangle::setBottomLeftPoint(Point point) { coordinates[0] = point; }

float Rectangle::getWidth() { return width; }

void Rectangle::setWidth(float value) { width = value; }

float Rectangle::getHeight() { return height; }

void Rectangle::setHeight(float value) { height = value; }


// Methods
//---------------------------------------------------------
/**
 * calculate the perimeter of the rectangle using the values given
 * @return calculated perimeter
 */
float Rectangle::calculatePerimeter() {
    float perimeter;

    // user perimeter formula to calculate the perimeter
    perimeter = (2.0 * height) + (2.0 * width);

    return perimeter;
}

/**
 * calculate the area of the rectangle using the values given
 * @return calculated area
 */
float Rectangle::calculateArea() {
    float area;

    // user area formula to calculate the area
    area = (height * width);

    return area;
}

/**
 * create strings for each rectangle property and concatenate them into a shape summary
 * @return shape property string
 */
std::string Rectangle::shapeProperties() {
    // define labels for readability
    float bottomLeftX = coordinates[0].getCoordinateX();
    float bottomLeftY = coordinates[0].getCoordinateY();

    // define label for user
    std::string shapeLabel;
    shapeLabel = "Rectangle \n";

    // set up and calculate four rectangle points to be printed
    std::string pointString;

    // define bottom left string (point already defined)
    std::string bottomLeftPoint;
    bottomLeftPoint = "(" + std::to_string(bottomLeftX) + ", " + std::to_string(bottomLeftY) + ")";

    // define bottom right point
    Point bottomRight;
    bottomRight.setCoordinateX(bottomLeftX + width);
    bottomRight.setCoordinateY(bottomLeftY);
    coordinates[1] = bottomRight;

    // define labels for readability
    float bottomRightX = coordinates[1].getCoordinateX();
    float bottomRightY = coordinates[1].getCoordinateY();

    // define bottom right string
    std::string bottomRightPoint;
    bottomRightPoint = "(" + std::to_string(bottomRightX) + ", " + std::to_string(bottomRightY) + ")";

    // define top left point
    Point topLeft;
    topLeft.setCoordinateX(bottomLeftX);
    topLeft.setCoordinateY(bottomLeftY + height);
    coordinates[2] = topLeft;

    // define labels for readability
    float topLeftX = coordinates[2].getCoordinateX();
    float topLeftY = coordinates[2].getCoordinateY();

    // define top left string
    std::string topLeftPoint;
    topLeftPoint = "(" + std::to_string(topLeftX) + ", " + std::to_string(topLeftY) + ")";

    // define top right point
    Point topRight;
    topRight.setCoordinateX(bottomLeftX + width);
    topRight.setCoordinateY(bottomLeftY + height);
    coordinates[3]= topRight;

    // define labels for readability
    float topRightX = coordinates[3].getCoordinateX();
    float topRightY = coordinates[3].getCoordinateY();

    // define top right string
    std::string topRightPoint;
    topRightPoint = "(" + std::to_string(topRightX) + ", " + std::to_string(topRightY) + ")";

    // define string of coordinates
    pointString = "Points: {"  + bottomLeftPoint + bottomRightPoint + topLeftPoint + topRightPoint + "} \n";

    // define width string
    std::string widthString;
    widthString = "Width: " + std::to_string(width) + " \n";

    // define height string
    std::string heightString;
    heightString = "Height: " + std::to_string(height) + " \n";

    // define perimeter string
    std::string perimeterString;
    perimeterString = "Perimeter: " + std::to_string(calculatePerimeter()) + " \n";

    // define area string
    std::string areaString;
    areaString = "Area: " + std::to_string(calculateArea()) + " \n";

    // concatenate properties and return string
    std::string properties;
    properties = shapeLabel + pointString + widthString + heightString + perimeterString + areaString;

    // return shape properties string
    return properties;
}


