//-----------------------------------------------------------
// File : Logger.h
// Class: CEN 3078, Spring 2023
// Devl : Katarya Johnson-Williams
// Desc : Declaration of a Logger class object
//---------------------------------------------------------

// HEADER GUARD
#ifndef PROJECT_SHAPES_CALCULATOR_LOGGER_H
#define PROJECT_SHAPES_CALCULATOR_LOGGER_H

enum ErrorSeverity {
    TRACE, // 0 by default
    DEBUG, // 1
    INFO, // 2
    WARN, // 3
    ERROR, // 4
    CRITICAL // 5
};

class Logger {
private:

    static ErrorSeverity severity;
    static const char* filepath;

public:

    static void log(ErrorSeverity type, const char* message);
    static void setSeverity(ErrorSeverity newSeverity);

};

#endif //PROJECT_SHAPES_CALCULATOR_LOGGER_H
