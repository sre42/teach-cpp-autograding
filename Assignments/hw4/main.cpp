#include <iostream>
#include <Circle.h>
#include <Square.h>
#include "CustomException.h"

using namespace std;

int main() {

    cout << "------------------------------------------" << endl;
    cout << "----------------CIRCLE-------------------" << endl;
    cout << "------------------------------------------" << endl;
    Circle<int> *circle = new Circle<int>(2, 2, 4);
    cout << "Radius of circle:" << circle->getRadius() << endl;
    cout << "point representing the center of Circle:" << circle->getX() << "," << circle->getY() << endl;
    cout << "Area of circle:" << circle->area() << endl;
    cout << "Circumference of circle:" << circle->circumference() << endl;


    cout << "------------------------------------------" << endl;
    cout << "----------------RECTANGLE-------------------" << endl;
    cout << "------------------------------------------" << endl;
    Rectangle<int> *rectangle = new Rectangle<int>(4, 4, 5, 6);
    cout << "Area of rectangle:" << rectangle->area() << endl;
    cout << "Circumference of rectangle:" << rectangle->circumference() << endl;
    cout << "Sides of rectangle:" << rectangle->getWidth() << "," << rectangle->getHeight() << endl;
    cout << "Point representing the center of rectangle:" << rectangle->getX() << "," << rectangle->getY() << endl;


    cout << "------------------------------------------" << endl;
    cout << "----------------SQUARE-------------------" << endl;
    cout << "------------------------------------------" << endl;
    Square<int> *square = new Square<int>(3, 3, 3);
    cout << "Area of square:" << square->area() << endl;
    cout << "Circumference of square:" << square->circumference() << endl;
    cout << "Sides of square:" << square->getWidth() << "," << square->getHeight() << endl;
    cout << "Point representing the center of square:" << square->getX() << "," << square->getY() << endl;


    cout << "------------------------------------------" << endl;
    cout << "-----------CIRCLE EXCEPTION---------------" << endl;
    cout << "------------------------------------------" << endl;
    try {
        Circle<int> *circleE = new Circle<int>(2, 2, -1);
    } catch (CustomException &CE) {
        cout << CE.what() << endl;
        cout << "Error code:" << CE.getErrorCode() << endl;
    } catch (exception &e) {
        cout << "DEFAULT EXCEPTION, THIS SHOULD NOT HAPPEN " << e.what();
    }


    cout << "------------------------------------------" << endl;
    cout << "---------RECTANGLE EXCEPTION--------------" << endl;
    cout << "------------------------------------------" << endl;
    try {
        Rectangle<int> *rectangle = new Rectangle<int>(4, 4, -5, 6);
    } catch (CustomException &CE) {
        cout << CE.what() << endl;
        cout << "Error code:" << CE.getErrorCode() << endl;
    } catch (exception &e) {
        cout << "DEFAULT EXCEPTION, THIS SHOULD NOT HAPPEN " << e.what();
    }


    cout << "------------------------------------------" << endl;
    cout << "-----------SQUARE EXCEPTION---------------" << endl;
    cout << "------------------------------------------" << endl;
    try {
        Square<int> *square = new Square<int>(3, 3, -3);
    } catch (CustomException &CE) {
        cout << CE.what() << endl;
        cout << "Error code:" << CE.getErrorCode() << endl;
    } catch (exception &e) {
        cout << "DEFAULT EXCEPTION, THIS SHOULD NOT HAPPEN " << e.what();
    }


    return 0;
}
