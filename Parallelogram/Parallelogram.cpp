#include "pch.h"
#include "Parallelogram.h"

myParallelogram::Parallelogram::Parallelogram(double side, double base, double height)
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

double myParallelogram::Parallelogram::area()
{
    return (_base * _height);
}

double myParallelogram::Parallelogram::perimeter()
{
    return (2 * (_side + _base));
}

string myParallelogram::Parallelogram::toString()
{
    return "Parallelogram";
}

double myParallelogram::Parallelogram::side()
{
    return (_side);
}

double myParallelogram::Parallelogram::base()
{
    return (_base);
}

double myParallelogram::Parallelogram::height()
{
    return (_height);
}