//-----------------------------------------------------------
// File : Logger.cpp
// Class: CEN 3078, Spring 2023
// Devl : Katarya Johnson-Williams
// Desc : Implementation of a Logger class object
//---------------------------------------------------------

#include <iostream> // console I/O
#include "Logger.h"

// Constructors
//---------------------------------------------------------
ErrorSeverity Logger::severity = TRACE;
const char* Logger::filepath = "log.txt";

// Methods
//---------------------------------------------------------
/**
 * dynamically update the severity of the log
 * @param newSeverity - new severity value
 */
void Logger::setSeverity(ErrorSeverity newSeverity) {
    severity = newSeverity;
}

/**
 * create a log of an error with a message
 * @param type - level of severity
 * @param message - to be included with error
 */
void Logger::log(ErrorSeverity type, const char* message) {
    // change label based on type
    if (type >= severity) {
        std::ofstream FILE(filepath, std::ios_base::app);

        switch (type) {
            case TRACE:
                FILE << "TRACE: \t";
                break;
            case DEBUG:
                FILE << "DEBUG: \t";
                break;
            case INFO:
                FILE << "INFO: \t";
                break;
            case WARN:
                FILE << "WARN: \t";
                break;
            case ERROR:
                FILE << "ERROR: \t";
                break;
            case CRITICAL:
                FILE << "CRITICAL: \t";
        }

        // add error message to log.txt
        FILE << message << "\n";
        FILE.close();
    }
}
