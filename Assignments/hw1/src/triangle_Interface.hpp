#pragma once

#include <vector>


template<class T>
class triangleInterface {
public:

    /** Sets or modifies the sides of this triangle. Ensures that the new sides form a triangle. */
    virtual void setSides(T newSide1, T newSide2, T newSide3) = 0;

    /** Gets the three sides of this triangle.
     * @return A vector containing the values of the sides. */
    virtual std::vector<T> getSides() const = 0;

    /** Computes the area of this triangle. @return This triangle's area. */
    virtual T getArea() const = 0;

    /** Computes the perimeter of this triangle. @return This triangle's perimeter. */
    virtual T getPerimeter() const = 0;

    /** @return True if this triangle is a right triangle. */
    virtual bool isRightTriangle() const = 0;

    /** @return True if this triangle is an equilateral triangle. */
    virtual bool isEquilateral() const = 0;

    /** @return True if this triangle is an isosceles triangle. */
    virtual bool isIsosceles() const = 0;
};
