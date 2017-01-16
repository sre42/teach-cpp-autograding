#pragma once

#include <iostream>
#include <exception>

using namespace std;

/**
 * DO NOT MODIFY
 */
class CustomException : public exception {
private:
    int errorCode;

public:
    CustomException() : errorCode(2) { }

    CustomException(int errorCode) : errorCode(errorCode) { }

    virtual const char *what() const throw() {
        switch (errorCode) {
            case 2:
                return "General Custom Exception - No error code Specified";
            case 22:
                return "Custom Exception No. 22 - Invalid circle radius";
            case 33:
                return "Custom Exception No. 33 - Invalid rectangle/square side(s)";

        }
        return "WARNING, THIS SHOULD NOT HAPPEN! CHECK EXCEPTION CLASS LOGIC";
    }


    int getErrorCode() const {
        return errorCode;
    }
};
