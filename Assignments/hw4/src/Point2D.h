#pragma once

#include "Shape.h"
/**
 * DO NOT MODIFY
 */
template<class T>
class Point2D : public Shape {
protected:
    T x, y;
public:

    Point2D() : x(0), y(0) { }

    Point2D(T x, T y) : x(x), y(y) { }

    T getX() const;

    T getY() const;

    void setX(T x);

    void setY(T y);


};

template<class T>
T Point2D<T>::getX() const {
    return x;
}

template<class T>
T Point2D<T>::getY() const {
    return y;
}

template<class T>
void Point2D<T>::setX(T x) {
    Point2D<T>::x = x;
}

template<class T>
void Point2D<T>::setY(T y) {
    Point2D<T>::y = y;
}

