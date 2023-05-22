#include "pch.h"
#include "Rhombus.h"

myRhombus::Rhombus::Rhombus(float short_diagonal, float long_diagonal)
{
    if (short_diagonal < 0) {
        throw exception("The short diagonal of a rhombus cannot be negative or zero.");
    }
    else if (long_diagonal < 0) {
        throw exception("The long diagonal of a rhombus cannot be negative or zero.");
    }
    else {
        _short_diagonal = short_diagonal;
        _long_diagonal = long_diagonal;
    }
}

float myRhombus::Rhombus::area()
{
    return (_short_diagonal * _long_diagonal);
}

float myRhombus::Rhombus::perimeter()
{
    float edge = sqrt(pow(_short_diagonal, 2) + pow(_long_diagonal, 2)) / 2;
    return (4 * edge);
}

string myRhombus::Rhombus::toString()
{
    return "Rhombus";
}

float myRhombus::Rhombus::short_diagonal()
{
    return (_short_diagonal);
}

float myRhombus::Rhombus::long_diagonal()
{
    return (_long_diagonal);
}