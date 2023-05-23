#include "pch.h"
#include "Rectangle.h"

myRectangle::Rectangle::Rectangle(double width, double height)
{
    if (width < 0) {
        throw exception("The width of a rectangle cannot be negative or zero.");
    }
    else if (height < 0) {
        throw exception("The height of a rectangle cannot be negative or zero.");
    }
    else {
        _width = width;
        _height = height;
    }
}

double myRectangle::Rectangle::area()
{
    return (_width * _height);
}

double myRectangle::Rectangle::perimeter()
{
    return (2 * (_height + _width));
}

string myRectangle::Rectangle::toString()
{
    return "Rectangle";
}

double myRectangle::Rectangle::width()
{
    return (_width);
}

double myRectangle::Rectangle::height()
{
    return (_height);
}