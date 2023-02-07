//-----------------------------------------------------------
// File : Line.cpp
// Class: COP 3003, Fall 2022
// Devl : Katarya Johnson-Williams
// Desc : Implementation of a Line class object
//---------------------------------------------------------

#include <cmath> // math functions
#include "Line.h"

// Constructors
//---------------------------------------------------------
Line::Line() {
    setShapeType(LINE);
    setNumOfPoints(2);
    coordinates.resize(2);
} // default constructor

Line::Line(Point pointOne, Point pointTwo) {
    setShapeType(LINE);
    setNumOfPoints(2);
    coordinates.push_back(pointOne);
    coordinates.push_back(pointTwo);
}


// Accessors
//---------------------------------------------------------
Point Line::getPointOne() { return coordinates[0]; }

void Line::setPointOne(Point point) { coordinates[0] = point; }

Point Line::getPointTwo() { return coordinates[1]; }

void Line::setPointTwo(Point point) { coordinates[1] = point; }


// Methods
//---------------------------------------------------------
/**
 * calculate the slope of the line using the two points given
 * @return calculated slope
 */
float Line::calculateSlope() {
    // define variables for readability
    float slope, pointOneX, pointOneY, pointTwoX, pointTwoY;
    pointOneX = coordinates[0].getCoordinateX();
    pointOneY = coordinates[0].getCoordinateY();
    pointTwoX = coordinates[1].getCoordinateX();
    pointTwoY = coordinates[1].getCoordinateY();

    // calculate slope using slope formula
    slope = (pointTwoY - pointOneY) / (pointTwoX - pointOneX);

    // return calculated slope
    return slope;
}

/**
 * calculate the angle of the line using the two points given
 * @return calculated angle (in degrees)
 */
float Line::calculateAngle() {
    // define variables for readability
    float angle, pointOneX, pointOneY, pointTwoX, pointTwoY;
    pointOneX = coordinates[0].getCoordinateX();
    pointOneY = coordinates[0].getCoordinateY();
    pointTwoX = coordinates[1].getCoordinateX();
    pointTwoY = coordinates[1].getCoordinateY();

    // calculate angle using angle formula (convert to degrees)
    angle = std::atan2((pointTwoY - pointOneY),(pointTwoX - pointOneX)) * (180.0 / M_PI);

    // return calculated angle
    return angle;
}

/**
 * calculate the length of the line using the two points given
 * @return calculated length
 */
float Line::calculateLength() {
    // define variables for readability
    float length, pointOneX, pointOneY, pointTwoX, pointTwoY;
    pointOneX = coordinates[0].getCoordinateX();
    pointOneY = coordinates[0].getCoordinateY();
    pointTwoX = coordinates[1].getCoordinateX();
    pointTwoY = coordinates[1].getCoordinateY();

    // calculate length using the length formula
    length = std::sqrt(std::pow((pointTwoX - pointOneX),2) + std::pow((pointTwoY - pointOneY),2));

    // return calculated length
    return length;
}

/**
 * calculate the y-intercept of the line using the coordinates given
 * @return the calculated y-intercept
 */
float Line::calculateYIntercept() {
    // define variables for readability
    float yIntercept, pointOneX, pointOneY, pointTwoX, pointTwoY;
    pointOneX = coordinates[0].getCoordinateX();
    pointOneY = coordinates[0].getCoordinateY();

    // calculate y-intercept using the y-intercept formula
    yIntercept = pointOneY - (calculateSlope() * pointOneX);

    // return calculated y-intercept
    return yIntercept;
}

/**
 * create strings for each line property and concatenate them into a shape summary
 * @return shape property string
 */
std::string Line::shapeProperties() {
    // define variables for readability
    float length, pointOneX, pointOneY, pointTwoX, pointTwoY;
    pointOneX = coordinates[0].getCoordinateX();
    pointOneY = coordinates[0].getCoordinateY();
    pointTwoX = coordinates[1].getCoordinateX();
    pointTwoY = coordinates[1].getCoordinateY();

    // define label for user
    std::string shapeLabel;
    shapeLabel = "Line \n";

    // define pointOne string
    std::string pointOneString;
    pointOneString = "(" + std::to_string(pointOneX) + ", " + std::to_string(pointOneY) + ")";

    // define pointTwo string
    std::string pointTwoString;
    pointTwoString = "(" + std::to_string(pointTwoX) + ", " + std::to_string(pointTwoY) + ")";

    // define string of coordinates
    std::string pointString;
    pointString = "Points: {"  + pointOneString + pointTwoString + "} \n";

    // define slope string
    std::string slopeString;
    slopeString = "Slope: " + std::to_string(calculateSlope()) + " \n";

    // define angle string
    std::string angleString;
    angleString = "Angle (in degrees): " + std::to_string(calculateAngle()) + " \n";

    // define length string
    std::string lengthString;
    lengthString = "Length: " + std::to_string(calculateLength()) + " \n";

    // define slopeIntercept string
    std::string slopeInterceptString;
    slopeInterceptString = "Slope-Intercept Form: y = " + std::to_string(calculateSlope()) + "x + " +
                            std::to_string(calculateYIntercept()) + " \n";

    // concatenate properties and return string
    std::string properties;
    properties = shapeLabel + pointString + slopeString + angleString + lengthString + slopeInterceptString;

    // return shape properties string
    return properties;
}



