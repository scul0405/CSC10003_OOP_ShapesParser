#include "pch.h"
#include "Parallelogram.h"

myParallelogram::Parallelogram::Parallelogram(float side, float base, float height)
{
    if (side < 0) {
        throw exception("The side of a parallelogram cannot be negative or zero.");
    }
    
    if (base < 0) {
        throw exception("The base of a parallelogram cannot be negative or zero.");
    }

    if (height < 0) {
        throw exception("The height of a parallelogram cannot be negative or zero.");
    }

    _side = side;
    _base = base;
    _height = height;
}

float myParallelogram::Parallelogram::area()
{
    return (_base * _height);
}

float myParallelogram::Parallelogram::perimeter()
{
    return (2 * (_side + _base));
}

string myParallelogram::Parallelogram::toString()
{
    return "Parallelogram";
}

float myParallelogram::Parallelogram::side()
{
    return (_side);
}

float myParallelogram::Parallelogram::base()
{
    return (_base);
}

float myParallelogram::Parallelogram::height()
{
    return (_height);
}