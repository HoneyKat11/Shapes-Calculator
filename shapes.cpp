//-----------------------------------------------------------
// File: shapes.cpp
// Class: COP 3003, Fall 2022
// Devl: Katarya Johnson-Williams
// Desc: Final Project to Calculate Shape Values
//-----------------------------------------------------------

#include <iostream> // console I/O
#include <vector> // vectors (lists)
#include <memory> // dynamic memory management library (unique pointers)
#include <limits> // validate user input
#include "Point.h"
#include "Shape.h"
#include "Line.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

// Function Prototypes (Declarations)
//-----------------------------------------------------------
float validateInput(float input);
Point getPoint();
std::unique_ptr<Line> createLine();
std::unique_ptr<Rectangle> createRectangle();
std::unique_ptr<Circle> createCircle();
std::unique_ptr<Triangle> createTriangle();
void printShapes(std::vector<std::unique_ptr<Shape>>& shapesVector);

int main() {

    // create shape collection vector
    std::vector<std::unique_ptr<Shape>> shapesVector;

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
        bool validMode = false;

        while (!validMode) {
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "You have entered an invalid mode. Please retry: ";
                std::cin >> shapeMode;
            } else {
                validMode = true;
            }
        }

        switch(shapeMode) {
            case LINE:
                shapesVector.push_back(std::move(createLine()));
                break; // end line
            case RECTANGLE:
                shapesVector.push_back(std::move(createRectangle()));
                break; // end rectangle
            case CIRCLE:
                shapesVector.push_back(std::move(createCircle()));
                break; // end circle
            case TRIANGLE:
                shapesVector.push_back(std::move(createTriangle()));
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
 * validate float input
 * @param input - from the user
 * @return valid float
 */
float validateInput(float input) {
    float userInput = input;
    bool validInput = false;

    // loop until valid input is provided
    while (!validInput) {
        if (std::cin.fail()) { // if cin fails
            std::cin.clear(); // clear the error state of the buffer
            // ignore the rest of the line after the first instance of the error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "You have entered an invalid input. Please retry: ";
            std::cin >> userInput; // prompt for new input
        } else { // cin was successful
            validInput = true;
        }
    }

    return userInput;
}


/**
 * create a point
 * @return the created point
 */
Point getPoint() {
    Point newPoint;

    float coordX, coordY;
    std::cout << "Please enter the X coordinate for a point: ";
    std::cin >> coordX;
    coordX = validateInput(coordX);

    std::cout << "Please enter the Y coordinate for a point: ";
    std::cin >> coordY;
    coordY = validateInput(coordY);

    newPoint.setCoordinateX(coordX);
    newPoint.setCoordinateY(coordY);

    return newPoint;
}


/**
 * create a line to add to the collection
 * @return the created line
 */
std::unique_ptr<Line> createLine() {
    std::unique_ptr<Line> newLine(new Line());

    std::cout << "Enter coordinates for two points of the line: " << std::endl;
    newLine->setPointOne(getPoint());
    newLine->setPointTwo(getPoint());

    return newLine;
}


/**
 * create a rectangle to add to the collection
 * @return the created rectangle
 */
std::unique_ptr<Rectangle> createRectangle() {
    std::unique_ptr<Rectangle> newRectangle(new Rectangle());

    std::cout << "Enter bottom left coordinate and values for rectangle: " << std::endl;
    newRectangle->setBottomLeftPoint(getPoint());

    float newWidth;
    std::cout << "Please enter the width of the rectangle: ";
    std::cin >> newWidth;
    newWidth = validateInput(newWidth);
    newRectangle->setWidth(newWidth);

    float newHeight;
    std::cout << "Please enter the height of the rectangle: ";
    std::cin >> newHeight;
    newHeight = validateInput(newHeight);
    newRectangle->setHeight(newHeight);

    return newRectangle;
}


/**
 * create a circle to add to the collection
 * @return the created circle
 */
std::unique_ptr<Circle> createCircle() {
    std::unique_ptr<Circle> newCircle(new Circle());

    std::cout << "Enter point for the center of the circle: " << std::endl;
    newCircle->setCenterPoint(getPoint());

    float radius;
    std::cout << "Please enter the radius of the circle: ";
    std::cin >> radius;
    radius = validateInput(radius);
    newCircle->setRadius(radius);

    return newCircle;
}


/**
 * create a right triangle to add to the collection
 * @return the created triangle
 */
std::unique_ptr<Triangle> createTriangle() {
    std::unique_ptr<Triangle> newTriangle(new Triangle());

    std::cout << "Enter the coordinates for right angle of the triangle: " << std::endl;
    newTriangle->setRightAnglePoint(getPoint());

    float height;
    std::cout << "Please enter the height of the triangle: ";
    std::cin >> height;
    height = validateInput(height);
    newTriangle->setHeight(height);

    float base;
    std::cout << "Please enter the base of the triangle: ";
    std::cin >> base;
    base = validateInput(base);
    newTriangle->setBase(base);

    return newTriangle;
}


/**
 * Print out all the shapes created by the user
 * @param shapesVector - vector collection of all the created shapes
 * @param shapeCount  - number of shapes in the vector collection
 */
void printShapes(std::vector<std::unique_ptr<Shape>>& shapesVector) {
    for (int i = 0; i < shapesVector.size(); i++) {
        std::cout << std::to_string(i + 1) << ". " << shapesVector[i]->shapeProperties() << std::endl;
    }
}

