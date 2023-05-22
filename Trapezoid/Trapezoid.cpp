#include "pch.h"
#include "Trapezoid.h"

myTrapezoid::Trapezoid::Trapezoid(float top, float base, float height)
{
    if (top < 0) {
        throw exception("The top of a trapezoid cannot be negative or zero.");
    }

    if (base < 0) {
        throw exception("The base of a trapezoid cannot be negative or zero.");
    }

    if (height < 0) {
        throw exception("The height of a trapezoid cannot be negative or zero.");
    }

    _top = top;
    _base = base;
    _height = height;
}

float myTrapezoid::Trapezoid::area()
{
    return (((_top + _base) * _height) / 2);
}

float myTrapezoid::Trapezoid::perimeter() // TODO: update this formula
{
    return (2 * (_height + _top + _base));
}

string myTrapezoid::Trapezoid::toString()
{
    return "Trapezoid";
}

float myTrapezoid::Trapezoid::top()
{
    return (_top);
}

float myTrapezoid::Trapezoid::base()
{
    return (_base);
}

float myTrapezoid::Trapezoid::height()
{
    return (_height);
}