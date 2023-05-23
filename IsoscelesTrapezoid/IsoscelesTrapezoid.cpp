#include "pch.h"
#include "IsoscelesTrapezoid.h"

myIsoscelesTrapezoid::IsoscelesTrapezoid::IsoscelesTrapezoid(double top, double base, double height)
{
    if (top < 0) {
        throw exception("The top of an isosceles trapezoid cannot be negative or zero.");
    }

    if (base < 0) {
        throw exception("The base of an isosceles trapezoid cannot be negative or zero.");
    }

    if (height < 0) {
        throw exception("The height of an isosceles trapezoid cannot be negative or zero.");
    }

    _top = top;
    _base = base;
    _height = height;
}

double myIsoscelesTrapezoid::IsoscelesTrapezoid::area()
{
    return (((_top + _base) * _height) / 2);
}

double myIsoscelesTrapezoid::IsoscelesTrapezoid::perimeter()
{
    return 2*sqrt(pow((_base - _top) / 2, 2) + pow(_height, 2)) + _top + _base;
}

string myIsoscelesTrapezoid::IsoscelesTrapezoid::toString()
{
    return "IsoscelesTrapezoid";
}

double myIsoscelesTrapezoid::IsoscelesTrapezoid::top()
{
    return (_top);
}

double myIsoscelesTrapezoid::IsoscelesTrapezoid::base()
{
    return (_base);
}

double myIsoscelesTrapezoid::IsoscelesTrapezoid::height()
{
    return (_height);
}