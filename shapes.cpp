//-----------------------------------------------------------
// File: shapes.cpp
// Class: COP 3003, Fall 2022
// Devl: Katarya Johnson-Williams
// Desc: Final Project to Calculate Shape Values
//-----------------------------------------------------------

#include <iostream> // console I/O
#include <vector> // vectors (lists)
#include "Point.h"
#include "Shape.h"
#include "Line.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

// Function Prototypes (Declarations)
//-----------------------------------------------------------
Point getPoint();
Line* createLine();
Rectangle* createRectangle();
Circle* createCircle();
Triangle* createTriangle();
void printShapes(std::vector<Shape*> shapesVector);


int main() {

    // create shape collection vector
    std::vector<Shape*> shapesVector;

    // begin program loop
    bool addShapes = true;
    int shapeMode = DEFAULT;

    do {
        std::cout << "\nEnter a Number: " << std::endl;
        std::cout << "1. Line" << std::endl;
        std::cout << "2. Rectangle" << std::endl;
        std::cout << "3. Circle" << std::endl;
        std::cout << "4. Right Triangle" << std::endl;
        std::cout << "5. Print Shapes" << std::endl;
        std::cout << "6. End Program" << std::endl;
        std::cout << "> ";

        std::cin >> shapeMode;

        switch(shapeMode) {
            case LINE:
                shapesVector.push_back(createLine());
                break; // end line
            case RECTANGLE:
                shapesVector.push_back(createRectangle());
                break; // end rectangle
            case CIRCLE:
                shapesVector.push_back(createCircle());
                break; // end circle
            case TRIANGLE:
                shapesVector.push_back(createTriangle());
                break; // end triangle
            case PRINT:
                printShapes(shapesVector);
                break; // end print
            case EXIT:
                addShapes = false;
                // end exit
        }

    } while (addShapes); // see if shapes are still being added

    return 0;
} // end main


// Function Definitions
//-----------------------------------------------------------

/**
 * create a point
 * @return the created point
 */
Point getPoint() {
    Point newPoint;

    float coordX, coordY;
    std::cout << "Please enter the coordinates for a point: ";
    std::cin >> coordX >> coordY;

    newPoint.setCoordinateX(coordX);
    newPoint.setCoordinateY(coordY);

    return newPoint;
}


/**
 * create a line to add to the collection
 * @return the created line
 */
Line* createLine() {
    Line* newLine = new Line();

    std::cout << "Enter coordinates for two points of the line: " << std::endl;
    newLine->setPointOne(getPoint());
    newLine->setPointTwo(getPoint());

    return newLine;
}


/**
 * create a rectangle to add to the collection
 * @return the created rectangle
 */
Rectangle* createRectangle() {
    Rectangle* newRectangle = new Rectangle();

    std::cout << "Enter bottom left coordinate and values for rectangle: " << std::endl;
    newRectangle->setBottomLeftPoint(getPoint());

    float newWidth;
    std::cout << "Please enter the width of the rectangle: ";
    std::cin >> newWidth;
    newRectangle->setWidth(newWidth);

    float newHeight;
    std::cout << "Please enter the height of the rectangle: ";
    std::cin >> newHeight;
    newRectangle->setHeight(newHeight);

    return newRectangle;
}


/**
 * create a circle to add to the collection
 * @return the created circle
 */
Circle* createCircle() {
    Circle* newCircle = new Circle();

    std::cout << "Enter point for the center of the circle: " << std::endl;
    newCircle->setCenterPoint(getPoint());

    float radius;
    std::cout << "Please enter the radius of the circle: ";
    std::cin >> radius;
    newCircle->setRadius(radius);

    return newCircle;
}


/**
 * create a right triangle to add to the collection
 * @return the created triangle
 */
Triangle* createTriangle() {
    Triangle* newTriangle = new Triangle();

    std::cout << "Enter the coordinates for right angle of the triangle: " << std::endl;
    newTriangle->setRightAnglePoint(getPoint());

    float height;
    std::cout << "Please enter the height of the triangle: ";
    std::cin >> height;
    newTriangle->setHeight(height);

    float base;
    std::cout << "Please enter the base of the triangle: ";
    std::cin >> base;
    newTriangle->setBase(base);

    return newTriangle;
}


/**
 * Print out all the shapes created by the user
 * @param shapesVector - vector collection of all the created shapes
 * @param shapeCount  - number of shapes in the vector collection
 */
void printShapes(std::vector<Shape*> shapesVector) {
    for (int i = 0; i < shapesVector.size(); i++) {
        std::cout << std::to_string(i + 1) << ". " << shapesVector[i]->shapeProperties() << std::endl;
    }
}

