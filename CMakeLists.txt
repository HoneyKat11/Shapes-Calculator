cmake_minimum_required(VERSION 3.23)
project(PROJECT_Shapes_Calculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(PROJECT_Shapes_Calculator shapes.cpp Point.cpp Point.h Shape.cpp Shape.h
        Line.cpp Line.h Rectangle.cpp Rectangle.h Circle.cpp Circle.h Triangle.cpp Triangle.h)
